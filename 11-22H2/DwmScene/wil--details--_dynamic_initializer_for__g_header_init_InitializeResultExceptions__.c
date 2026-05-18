/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__ @ 0x180003020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall __noreturn *wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__())(wil::details *__hidden this, const struct wil::FailureInfo *)
{
  void (__fastcall __noreturn *result)(wil::details *__hidden, const struct wil::FailureInfo *); // rax

  wil::details::g_pfnRethrow = (void (*)(void))wil::details::Rethrow;
  result = wil::details::ThrowResultExceptionInternal;
  wil::details::g_pfnThrowResultException = (void (*)(const struct wil::FailureInfo *))wil::details::ThrowResultExceptionInternal;
  return result;
}
