/*
 * XREFs of ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C0011530
 * Callers:
 *     ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C000CD10 (-DeInitIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C000FCC0 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CSidebandDevice::StopIoQueueThread(CSidebandDevice *this)
{
  char v2; // di
  bool v3; // dl

  if ( *((_QWORD *)this + 21) )
  {
    v2 = 1;
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    KeSetEvent((PRKEVENT)((char *)this + 176), 0, 0);
    KeWaitForSingleObject(*((PVOID *)this + 21), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*((PVOID *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    KeClearEvent((PRKEVENT)((char *)this + 176));
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v2 = 0;
    }
    if ( v2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
  }
  return 0LL;
}
