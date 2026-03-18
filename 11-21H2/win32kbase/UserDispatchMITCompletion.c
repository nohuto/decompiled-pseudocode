/*
 * XREFs of UserDispatchMITCompletion @ 0x1C0037D4C
 * Callers:
 *     NtMITDispatchCompletion @ 0x1C0037BD0 (NtMITDispatchCompletion.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0037E30 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 */

__int64 __fastcall UserDispatchMITCompletion(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edi
  char v4; // bl
  bool v5; // r8
  __int64 result; // rax
  int v7; // edx

  v2 = a2;
  v4 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      16,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  result = IOCPDispatcher::Dispatch(gpIOCPDispatcher, a1, v2);
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 2) != 0)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v7 || v4 )
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v7,
             v4,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             2,
             17,
             (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  return result;
}
