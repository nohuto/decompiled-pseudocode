/*
 * XREFs of PropertySetBoolean @ 0x1C0030350
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

__int64 __fastcall PropertySetBoolean(PIRP Irp, __int64 a2, unsigned __int8 *a3)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned __int8 v7; // si
  int v8; // edi
  _QWORD *p_Descriptor; // r14
  char v10; // bl
  char v11; // dl
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rsi
  char v16; // dl
  int v18; // [rsp+20h] [rbp-78h]
  int v19; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+38h] [rbp-60h]
  unsigned int v21; // [rsp+A0h] [rbp+8h] BYREF
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+A8h] [rbp+10h]
  __int64 v23; // [rsp+B0h] [rbp+18h]

  v21 = 0;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v7 = *a3;
  v8 = -1073741811;
  p_Descriptor = &FilterFromIrp->Descriptor;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
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
      v18,
      v19,
      0xCu,
      v20,
      a2);
  if ( v7 <= 1u && p_Descriptor )
  {
    v12 = *p_Descriptor;
    v13 = *(unsigned int *)(a2 + 32);
    v14 = p_Descriptor[2];
    v15 = *(_QWORD *)(v12 + 72) + 168LL * *(unsigned int *)(a2 + 24);
    v23 = *(_QWORD *)(v15 + 128);
    v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v16,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v18,
        v19,
        0xDu,
        v20);
    if ( *(_DWORD *)(*(_QWORD *)(v14 + 16) + 536LL) == 1 )
    {
      if ( (unsigned int)v13 < *(_DWORD *)(v15 + 92) )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int8 *, _DWORD, int, unsigned int *))(v15 + 136))(
               v14,
               v15,
               CurrentStackLocation->Parameters.Read.Length,
               a3,
               v13,
               1,
               &v21);
        if ( v8 >= 0 )
        {
          *(_BYTE *)(v23 + 16 * v13 + 12) = *a3;
          Irp->IoStatus.Information = v21;
          return (unsigned int)v8;
        }
      }
    }
    else if ( DeviceRequestPowerUp(v14) < 0 )
    {
      v8 = -1073741661;
    }
    else
    {
      v8 = QueuePropertyRequest(Irp);
      if ( v8 >= 0 )
        return (unsigned int)v8;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      0xAu,
      0xEu,
      (__int64)&WPP_ec316f5a3b2f32ff42433c904743c1e5_Traceguids);
  return (unsigned int)v8;
}
