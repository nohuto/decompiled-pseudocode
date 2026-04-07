/*
 * XREFs of _CAnimationScheduler::_SetStoryboardTriggerForAnimationClock_::_1_::dtor$0 @ 0x1800A7E1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CAnimationScheduler::_SetStoryboardTriggerForAnimationClock_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 32));
}
