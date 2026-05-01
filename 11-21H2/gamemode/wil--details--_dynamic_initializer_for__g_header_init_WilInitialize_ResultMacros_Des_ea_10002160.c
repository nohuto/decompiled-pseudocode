/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem_SuppressPrivateApiUse__ @ 0x10002160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem_SuppressPrivateApiUse__()
{
  wil::details::g_pfnGetModuleName = (int)wil::details::GetCurrentModuleName;
  wil::details::g_pfnDebugBreak = (int)wil::details::DebugBreak;
  wil::details::g_pfnRaiseFailFastException = (void (__stdcall *)(struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int))wil::details::WilDynamicLoadRaiseFailFastException;
}
