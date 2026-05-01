/*
 * XREFs of _WindowEventDispatcher::TryShowAsStandaloneAsync_::_1_::dtor$11 @ 0x1802207AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::TryShowAsStandaloneAsync_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)(a2 + 104));
}
