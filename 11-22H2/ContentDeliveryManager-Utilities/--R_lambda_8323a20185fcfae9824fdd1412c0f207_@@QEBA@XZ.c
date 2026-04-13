/*
 * XREFs of ??R_lambda_8323a20185fcfae9824fdd1412c0f207_@@QEBA@XZ @ 0x18007E754
 * Callers:
 *     ??$_DoWithInvalidationCheck@V_lambda_c00b2ff9a306de4bec0320420481e79a_@@V_lambda_8323a20185fcfae9824fdd1412c0f207_@@@?$SimpleVectorIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_c00b2ff9a306de4bec0320420481e79a_@@AEBV_lambda_8323a20185fcfae9824fdd1412c0f207_@@@Z @ 0x18007C940 (--$_DoWithInvalidationCheck@V_lambda_c00b2ff9a306de4bec0320420481e79a_@@V_lambda_8323a20185fcfae.c)
 *     ??R_lambda_c00b2ff9a306de4bec0320420481e79a_@@QEBAJXZ @ 0x18007E894 (--R_lambda_c00b2ff9a306de4bec0320420481e79a_@@QEBAJXZ.c)
 * Callees:
 *     ??$Destroy@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18007AB58 (--$Destroy@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Int.c)
 */

_DWORD **__fastcall _lambda_8323a20185fcfae9824fdd1412c0f207_::operator()(_QWORD **a1)
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
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>((__int64 *)(*a1[1] + 8 * v2));
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
