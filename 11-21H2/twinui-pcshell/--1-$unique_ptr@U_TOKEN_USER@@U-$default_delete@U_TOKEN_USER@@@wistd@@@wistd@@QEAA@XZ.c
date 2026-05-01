/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAA@XZ @ 0x18044A540
 * Callers:
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$4 @ 0x18021D73F (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$4.c)
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$0 @ 0x180221F37 (_KioskPositioner--GetUserSidString_--_1_--dtor$0.c)
 *     _wil::details::GetTokenInfoWrap__TOKEN_USER_wil::err_exception_policy_0__::_1_::dtor$0 @ 0x180221F76 (_wil--details--GetTokenInfoWrap__TOKEN_USER_wil--err_exception_policy_0__--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
