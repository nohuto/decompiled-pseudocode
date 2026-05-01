/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__ @ 0x10002080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__()
{
  wil::details::g_pfnRethrow = (void (__stdcall *)())wil::details::Rethrow;
  wil::details::g_pfnThrowResultException = (void (__stdcall *)(const struct wil::FailureInfo *))wil::details::ThrowResultExceptionInternal;
}
