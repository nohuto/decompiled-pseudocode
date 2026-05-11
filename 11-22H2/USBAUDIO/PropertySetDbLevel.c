/*
 * XREFs of PropertySetDbLevel @ 0x1C003E370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C00054E4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF__guid_dd @ 0x1C000A0A0 (WPP_RECORDER_AND_TRACE_SF__guid_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002A38C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C0031588 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetDbLevel(PIRP Irp, __int64 a2, struct _LIST_ENTRY *a3)
{
  unsigned int v3; // eax
  int Flink; // r12d
  PKSFILTER FilterFromIrp; // rbx
  int v8; // r8d
  int v9; // edi
  char v10; // si
  char v11; // dl
  __int64 v12; // r9
  const KSFILTER_DESCRIPTOR *Descriptor; // rax
  __int64 Context; // r10
  __int64 v15; // r14
  __int64 v16; // rbp
  char v17; // dl
  int v18; // edx
  _DWORD *v20; // rbp
  int v21; // ebx
  struct _LIST_ENTRY *v22; // r9
  int v23; // [rsp+20h] [rbp-98h]
  int v24; // [rsp+28h] [rbp-90h]
  int v25; // [rsp+38h] [rbp-80h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+60h] [rbp-58h]
  unsigned int v27; // [rsp+C0h] [rbp+8h]
  unsigned int v28; // [rsp+C8h] [rbp+10h] BYREF
  struct _LIST_ENTRY *v29; // [rsp+D0h] [rbp+18h]
  __int64 v30; // [rsp+D8h] [rbp+20h]

  v29 = a3;
  v3 = *(_DWORD *)(a2 + 32);
  v28 = 0;
  Flink = (int)a3->Flink;
  v27 = v3;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v9 = -1073741811;
  v10 = 1;
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF__guid_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v23,
      v24,
      0x13u,
      v25,
      a2);
  if ( FilterFromIrp )
  {
    v12 = *(unsigned int *)(a2 + 24);
    Descriptor = FilterFromIrp->Descriptor;
    Context = (__int64)FilterFromIrp->Context;
    v30 = Context;
    v15 = (__int64)&Descriptor->NodeDescriptors[7 * v12];
    v16 = *(_QWORD *)(v15 + 128);
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v17,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v23,
        v24,
        0x14u,
        v25);
      Context = v30;
    }
    if ( *(_DWORD *)(*(_QWORD *)(Context + 16) + 536LL) == 1 )
    {
      if ( v27 < *(_DWORD *)(v15 + 92) )
      {
        v20 = (_DWORD *)(32LL * v27 + v16);
        v21 = v20[7];
        if ( Flink <= v21 )
        {
          v21 = Flink;
          if ( Flink < v20[6] )
            v21 = v20[6];
        }
        v22 = v29;
        LODWORD(v29->Flink) = v21;
        v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _LIST_ENTRY *, unsigned int, int, unsigned int *))(v15 + 136))(
               Context,
               v15,
               CurrentStackLocation->Parameters.Read.Length,
               v22,
               v27,
               1,
               &v28);
        if ( v9 >= 0 )
        {
          v20[3] = v21;
          Irp->IoStatus.Information = v28;
          return (unsigned int)v9;
        }
      }
    }
    else if ( DeviceRequestPowerUp(Context) < 0 )
    {
      v9 = -1073741661;
    }
    else
    {
      v9 = QueuePropertyRequest(Irp, (struct _LIST_ENTRY *)a2, v29, (struct _LIST_ENTRY *)PropertySetDbLevel);
      if ( v9 >= 0 )
        return (unsigned int)v9;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v18 = 21;
    LOBYTE(v18) = v10;
    LOBYTE(v8) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v18, v8, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v9;
}
