/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C020EF90
 * Callers:
 *     rimProcessHidInput @ 0x1C01A99EC (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01ADB64 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsProcessHidRawInputSupported @ 0x1C005670C (IsProcessHidRawInputSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetProcessHidRawInput(__int64 a1))(_QWORD)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  __int64 (__fastcall *result)(_QWORD); // rax
  char v6; // dl

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      86,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  result = (__int64 (__fastcall *)(_QWORD))IsProcessHidRawInputSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C029CC30;
    if ( qword_1C029CC30 )
      result = (__int64 (__fastcall *)(_QWORD))qword_1C029CC30(a1);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v6 || v2 )
    return (__int64 (__fastcall *)(_QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                             WPP_GLOBAL_Control->AttachedDevice,
                                             v6,
                                             v2,
                                             WPP_GLOBAL_Control->DeviceExtension,
                                             5,
                                             10,
                                             87,
                                             (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  return result;
}
