/*
 * XREFs of Feature_IndexerFanBackoff__private_IsEnabledPreCheck @ 0x180031238
 * Callers:
 *     CrmPolicyTableEntryGet @ 0x180031360 (CrmPolicyTableEntryGet.c)
 *     CrmLogActivityUpdate @ 0x180031800 (CrmLogActivityUpdate.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 Feature_IndexerFanBackoff__private_IsEnabledPreCheck()
{
  unsigned __int8 v0; // al
  int v1; // ecx
  __int128 v3; // [rsp+58h] [rbp+1Fh]
  __int64 v4; // [rsp+68h] [rbp+2Fh]
  __int128 v5; // [rsp+70h] [rbp+37h] BYREF
  __int64 v6; // [rsp+80h] [rbp+47h]

  v3 = 0LL;
  HIDWORD(v4) = 0;
  _m_prefetchw(&Feature_IndexerFanBackoff__private_reporting);
  v0 = _InterlockedOr(&Feature_IndexerFanBackoff__private_reporting, 3u);
  v1 = v3;
  if ( (v0 & 1) == 0 )
    v1 = 1;
  LODWORD(v3) = v1;
  LODWORD(v4) = (v0 >> 1) & 1;
  v6 = v4;
  v5 = v3;
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(27995822LL, 2LL, 1LL, &Feature_IndexerFanBackoff__private_reporting, &v5);
  if ( !(_DWORD)v6 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(27995822LL, &Feature_PackagedAppLaunchBlock_logged_traits, 0LL, 1LL);
  return 1LL;
}
