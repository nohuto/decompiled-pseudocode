/*
 * XREFs of ??R_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@QEBA@XZ @ 0x18007E028
 * Callers:
 *     ??$AtomicUpdate@V_lambda_6c210d7b4fa26faa8794b3b9e5692617_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6c210d7b4fa26faa8794b3b9e5692617_@@AEBV_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@Z @ 0x18007A934 (--$AtomicUpdate@V_lambda_6c210d7b4fa26faa8794b3b9e5692617_@@V_lambda_57e04f2f82b418462caa9ca3eb4.c)
 *     ??$Do@V_lambda_660cab06c15ab3e981810d6687fee6df_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@?$InvalidationChecker@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBV_lambda_660cab06c15ab3e981810d6687fee6df_@@AEBV_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@Z @ 0x18007B124 (--$Do@V_lambda_660cab06c15ab3e981810d6687fee6df_@@V_lambda_57e04f2f82b418462caa9ca3eb4aec1f_@@@-.c)
 * Callees:
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18007AB1C (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAU.c)
 */

_DWORD **__fastcall _lambda_57e04f2f82b418462caa9ca3eb4aec1f_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // rsi
  _DWORD *v4; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v4 = (_DWORD *)**a1;
  if ( *v4 )
  {
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>((__int64 *)(*a1[1] + 8 * v2));
      result = (_DWORD **)*a1;
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      v4 = *result;
    }
    while ( (unsigned int)v2 < **result );
  }
  *v4 = 0;
  return result;
}
