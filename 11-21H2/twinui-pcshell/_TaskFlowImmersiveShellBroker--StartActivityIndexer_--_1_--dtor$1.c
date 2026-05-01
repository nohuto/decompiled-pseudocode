/*
 * XREFs of _TaskFlowImmersiveShellBroker::StartActivityIndexer_::_1_::dtor$1 @ 0x18021B063
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::StartActivityIndexer_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
