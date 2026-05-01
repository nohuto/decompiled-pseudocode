/*
 * XREFs of _Init_thread_abort @ 0x1801897F0
 * Callers:
 *     __lambda_376cdae45175a47ad8184ea3fe0886a7_::operator()_::_1_::dtor$0 @ 0x1801A48CE (__lambda_376cdae45175a47ad8184ea3fe0886a7_--operator()_--_1_--dtor$0.c)
 *     _Platform::Box_Windows::Foundation::Size_::Box_Windows::Foundation::Size__::_1_::dtor$0 @ 0x180213850 (_Platform--Box_Windows--Foundation--Size_--Box_Windows--Foundation--Size__--_1_--dtor$0.c)
 *     _AreVirtualDesktopsEnabled_::_1_::dtor$0 @ 0x18021BFD2 (_AreVirtualDesktopsEnabled_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow_::_1_::dtor$0 @ 0x18038709A (_CortanaStoreAppExperienceManager--CreateCortanaAltTabProxyWindow_--_1_--dtor$0.c)
 *     _CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1803884B7 (_CortanaStoreAppExperienceManager--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$0 @ 0x18045F3E4 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&stru_1807B2F40);
  *a1 = 0;
  LeaveCriticalSection(&stru_1807B2F40);
  return Init_thread_notify();
}
