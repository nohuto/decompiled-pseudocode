/*
 * XREFs of PropertySetDbLevel @ 0x1C0030860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF__guid_dd @ 0x1C0002514 (WPP_RECORDER_AND_TRACE_SF__guid_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C0002614 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002806C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C0032438 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetDbLevel(PIRP Irp, __int64 a2, int *a3)
{
  int v4; // r12d
  PKSFILTER FilterFromIrp; // rbx
  int v6; // edi
  char v7; // si
  char v8; // dl
  __int64 Context; // r13
  __int64 v10; // r14
  __int64 v11; // rbp
  char v12; // dl
  _DWORD *v14; // rbp
  int v15; // ebx
  int v16; // [rsp+20h] [rbp-98h]
  int v17; // [rsp+28h] [rbp-90h]
  int v18; // [rsp+38h] [rbp-80h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+60h] [rbp-58h]
  unsigned int v21; // [rsp+C8h] [rbp+10h]
  unsigned int v23; // [rsp+D8h] [rbp+20h] BYREF

  v23 = 0;
  v4 = *a3;
  v21 = *(_DWORD *)(a2 + 32);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v6 = -1073741811;
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF__guid_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v16,
      v17,
      0x13u,
      v18,
      a2);
  if ( FilterFromIrp )
  {
    Context = (__int64)FilterFromIrp->Context;
    v10 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
    v11 = *(_QWORD *)(v10 + 128);
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v16,
        v17,
        0x14u,
        v18);
    if ( *(_DWORD *)(*(_QWORD *)(Context + 16) + 536LL) == 1 )
    {
      if ( v21 < *(_DWORD *)(v10 + 92) )
      {
        v14 = (_DWORD *)(32LL * v21 + v11);
        v15 = v14[7];
        if ( v4 <= v15 )
        {
          v15 = v4;
          if ( v4 < v14[6] )
            v15 = v14[6];
        }
        *a3 = v15;
        v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, unsigned int, int, unsigned int *))(v10 + 136))(
               Context,
               v10,
               CurrentStackLocation->Parameters.Read.Length,
               a3,
               v21,
               1,
               &v23);
        if ( v6 >= 0 )
        {
          v14[3] = v15;
          Irp->IoStatus.Information = v23;
          return (unsigned int)v6;
        }
      }
    }
    else if ( DeviceRequestPowerUp(Context) < 0 )
    {
      v6 = -1073741661;
    }
    else
    {
      v6 = QueuePropertyRequest(Irp);
      if ( v6 >= 0 )
        return (unsigned int)v6;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v7 = 0;
  }
  if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v16,
      0xAu,
      0x15u,
      (__int64)&WPP_ec316f5a3b2f32ff42433c904743c1e5_Traceguids);
  return (unsigned int)v6;
}
