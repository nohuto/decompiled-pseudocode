/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAA@XZ @ 0x1804FFE0C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$7 @ 0x180259FD7 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonFileNameForThi.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$1 @ 0x180259FFE (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_180259FFE.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$8 @ 0x18025AC0B (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelongsToThisUser_-.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$1 @ 0x18025AC32 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_18025AC32.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$4 @ 0x1802BB539 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$4.c)
 *     _wil::details::GetTokenInfoWrap__TOKEN_USER_wil::err_exception_policy_0__::_1_::dtor$0 @ 0x1802BB581 (_wil--details--GetTokenInfoWrap__TOKEN_USER_wil--err_exception_policy_0__--_1_--dtor$0.c)
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$0 @ 0x1802BB5E4 (_KioskPositioner--GetUserSidString_--_1_--dtor$0.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$4_0 @ 0x180710CE6 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$4_0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::~unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete(v1);
}
