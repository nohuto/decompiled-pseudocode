/*
 * XREFs of ?HampSystemPpleIsHostCacheEligible@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18008E7E0
 * Callers:
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18007C22C (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z @ 0x1800972A4 (-PpleHostCacheHelperIsEligibleByPackageFullName@@YAJPEAXPEBGPEAE@Z.c)
 */

__int64 __fastcall HampSystemPpleIsHostCacheEligible(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx
  unsigned __int8 v4[4]; // [rsp+20h] [rbp-128h] BYREF
  int v5[3]; // [rsp+24h] [rbp-124h] BYREF
  unsigned __int16 v6[128]; // [rsp+30h] [rbp-118h] BYREF

  v4[0] = 1;
  v5[0] = 256;
  PsmGetPackageFullNameFromKey((char *)a1 + 24, v6, v5);
  v2 = 552LL;
  if ( a1 )
    v2 = (__int64)a1 + 488;
  PpleHostCacheHelperIsEligibleByPackageFullName((void *)v2, v6, v4);
  return v4[0];
}
