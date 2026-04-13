/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__ @ 0x180003D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__())(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize, unsigned int)
{
  void (__fastcall *result)(DWORD, LPWSTR, DWORD, unsigned int); // rax

  wil::details::g_pfnGetModuleName = (__int64)wil::details::GetCurrentModuleName;
  wil::details::g_pfnGetModuleInformation = (__int64)wil::details::GetModuleInformation;
  wil::details::g_pfnDebugBreak = (__int64)wil::details::DebugBreak;
  wil::details::g_pfnRaiseFailFastException = (void (*)(struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int))wil::details::WilDynamicLoadRaiseFailFastException;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (__int64)wil::details::RtlNtStatusToDosErrorNoTeb;
  wil::details::g_pfnDllShutdownInProgress = (__int64)wil::details::RtlDllShutdownInProgress;
  wil::details::g_pfnRtlDisownModuleHeapAllocation = (__int64)wil::details::RtlDisownModuleHeapAllocation;
  result = wil::details::FormatNtStatusMsg;
  wil::details::g_pfnFormatNtStatusMsg = (void (*)(int, unsigned __int16 *, unsigned int))wil::details::FormatNtStatusMsg;
  return result;
}
