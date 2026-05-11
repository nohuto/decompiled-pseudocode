/*
 * XREFs of PropertySetFeatureValue @ 0x1C0030C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002806C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C0032438 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetFeatureValue(PIRP Irp, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  PKSFILTER v7; // r14
  int v8; // ebp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v10; // rdi
  char v11; // dl
  __int64 Context; // rcx
  unsigned int v14; // edx
  int v15; // [rsp+20h] [rbp-58h]
  unsigned int v16; // [rsp+88h] [rbp+10h] BYREF

  v16 = 0;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v7 = FilterFromIrp;
  v8 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v8;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v10 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      0xAu,
      0xBu,
      (__int64)&WPP_ec316f5a3b2f32ff42433c904743c1e5_Traceguids);
  Context = (__int64)v7->Context;
  if ( *(_DWORD *)(*(_QWORD *)(Context + 16) + 536LL) == 1 )
  {
    v14 = *(_DWORD *)(a2 + 32);
    if ( v14 < *(_DWORD *)(v10 + 92) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, unsigned int, int, unsigned int *))(v10 + 136))(
             Context,
             v10,
             CurrentStackLocation->Parameters.Read.Length,
             a3,
             v14,
             1,
             &v16);
      if ( v8 >= 0 )
        Irp->IoStatus.Information = v16;
    }
    return (unsigned int)v8;
  }
  if ( DeviceRequestPowerUp(Context) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
