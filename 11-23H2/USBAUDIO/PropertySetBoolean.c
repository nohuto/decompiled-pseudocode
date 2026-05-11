/*
 * XREFs of PropertySetBoolean @ 0x1C002F9D0
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

__int64 __fastcall PropertySetBoolean(PIRP Irp, __int64 a2, unsigned __int8 *a3)
{
  PKSFILTER FilterFromIrp; // rax
  int v7; // r8d
  unsigned __int8 v8; // si
  int v9; // edi
  _QWORD *p_Descriptor; // r14
  char v11; // bl
  char v12; // dl
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rsi
  char v17; // dl
  int v18; // edx
  int v20; // [rsp+20h] [rbp-78h]
  int v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+38h] [rbp-60h]
  unsigned int v23; // [rsp+A0h] [rbp+8h] BYREF
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+A8h] [rbp+10h]
  __int64 v25; // [rsp+B0h] [rbp+18h]

  v23 = 0;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = *a3;
  v9 = -1073741811;
  p_Descriptor = &FilterFromIrp->Descriptor;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v11 = 1;
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF__guid_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      v21,
      0xCu,
      v22,
      a2);
  if ( v8 <= 1u && p_Descriptor )
  {
    v13 = *p_Descriptor;
    v14 = *(unsigned int *)(a2 + 32);
    v15 = p_Descriptor[2];
    v16 = *(_QWORD *)(v13 + 72) + 168LL * *(unsigned int *)(a2 + 24);
    v25 = *(_QWORD *)(v16 + 128);
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v17,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v20,
        v21,
        0xDu,
        v22);
    if ( *(_DWORD *)(*(_QWORD *)(v15 + 16) + 536LL) == 1 )
    {
      if ( (unsigned int)v14 < *(_DWORD *)(v16 + 92) )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int8 *, _DWORD, int, unsigned int *))(v16 + 136))(
               v15,
               v16,
               CurrentStackLocation->Parameters.Read.Length,
               a3,
               v14,
               1,
               &v23);
        if ( v9 >= 0 )
        {
          *(_BYTE *)(v25 + 16 * v14 + 12) = *a3;
          Irp->IoStatus.Information = v23;
          return (unsigned int)v9;
        }
      }
    }
    else if ( DeviceRequestPowerUp(v15) < 0 )
    {
      v9 = -1073741661;
    }
    else
    {
      v9 = QueuePropertyRequest(Irp);
      if ( v9 >= 0 )
        return (unsigned int)v9;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v11 = 0;
  }
  if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v18 = 14;
    LOBYTE(v18) = v11;
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v18, v7, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v9;
}
