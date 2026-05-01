/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__ @ 0x10002110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__()
{
  wil::details::g_pfnGetModuleName = (int)wil::details::GetCurrentModuleName;
  wil::details::g_pfnDebugBreak = (int)wil::details::DebugBreak;
  wil::details::g_pfnRaiseFailFastException = (void (__stdcall *)(struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int))wil::details::WilDynamicLoadRaiseFailFastException;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (int)wil::details::RtlNtStatusToDosErrorNoTeb;
  wil::details::g_pfnDllShutdownInProgress = (int)wil::details::RtlDllShutdownInProgress;
  wil::details::g_pfnRtlDisownModuleHeapAllocation = (int)wil::details::RtlDisownModuleHeapAllocation;
  wil::details::g_pfnFormatNtStatusMsg = (void (__stdcall *)(int, wchar_t *, unsigned int))wil::details::FormatNtStatusMsg;
}
