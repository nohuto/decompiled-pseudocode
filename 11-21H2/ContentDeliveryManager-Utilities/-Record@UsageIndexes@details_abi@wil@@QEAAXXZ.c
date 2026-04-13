/*
 * XREFs of ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18003F71C
 * Callers:
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x1800293E0 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800400B4 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180042A80 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180040664 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 */

void __fastcall wil::details_abi::UsageIndexes::Record(
        wil::details_abi::UsageIndexes *this,
        __int64 a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+48h] [rbp-18h]

  if ( *((_BYTE *)this + 56) )
  {
    v5 = WNF_WIL_FEATURE_DEVICE_USAGE_TRACKING_1;
    v6 = WNF_WIL_FEATURE_DEVICE_USAGE_TRACKING_2;
    v7 = WNF_WIL_FEATURE_DEVICE_USAGE_TRACKING_3;
    wil::details_abi::RecordWnfUsageIndex(
      (wil::details_abi *)&v5,
      (const struct __WIL__WNF_STATE_NAME *)3,
      (unsigned __int64)this,
      a4);
  }
  if ( *((_BYTE *)this + 120) )
  {
    v5 = WNF_WIL_FEATURE_USAGE_TRACKING_1;
    v6 = WNF_WIL_FEATURE_USAGE_TRACKING_2;
    v7 = WNF_WIL_FEATURE_USAGE_TRACKING_3;
    wil::details_abi::RecordWnfUsageIndex(
      (wil::details_abi *)&v5,
      (const struct __WIL__WNF_STATE_NAME *)3,
      (unsigned __int64)this + 64,
      a4);
  }
  if ( *((_BYTE *)this + 184) )
  {
    v5 = WNF_WIL_FEATURE_HEALTH_TRACKING_1;
    v6 = WNF_WIL_FEATURE_HEALTH_TRACKING_2;
    v7 = WNF_WIL_FEATURE_HEALTH_TRACKING_3;
    v8 = WNF_WIL_FEATURE_HEALTH_TRACKING_4;
    v9 = WNF_WIL_FEATURE_HEALTH_TRACKING_5;
    v10 = WNF_WIL_FEATURE_HEALTH_TRACKING_6;
    wil::details_abi::RecordWnfUsageIndex(
      (wil::details_abi *)&v5,
      (const struct __WIL__WNF_STATE_NAME *)6,
      (unsigned __int64)this + 128,
      a4);
  }
}
