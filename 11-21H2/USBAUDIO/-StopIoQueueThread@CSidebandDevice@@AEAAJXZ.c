/*
 * XREFs of ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C000FB7C
 * Callers:
 *     ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C0009AB0 (-DeInitIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C000D460 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CSidebandDevice::StopIoQueueThread(CSidebandDevice *this)
{
  char v2; // di
  char v3; // dl
  int v5; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+20h] [rbp-28h]

  if ( *((_QWORD *)this + 22) )
  {
    v2 = 1;
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v3,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        9u,
        0x12u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    KeSetEvent((PRKEVENT)((char *)this + 184), 0, 0);
    KeWaitForSingleObject(*((PVOID *)this + 22), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*((PVOID *)this + 22));
    *((_QWORD *)this + 22) = 0LL;
    KeClearEvent((PRKEVENT)((char *)this + 184));
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v2 = 0;
    }
    if ( v2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v2,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        9u,
        0x13u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  }
  return 0LL;
}
