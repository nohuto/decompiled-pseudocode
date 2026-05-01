/*
 * XREFs of ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x18008CB4C
 * Callers:
 *     _lambda_67f1862805ee8077baf0f70ad7f386d7_::operator() @ 0x180197F54 (_lambda_67f1862805ee8077baf0f70ad7f386d7_--operator().c)
 *     _lambda_bd25e2ba6f0ad956a34c66bf3060a154_::operator() @ 0x180198238 (_lambda_bd25e2ba6f0ad956a34c66bf3060a154_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c9098dcc85f0f6ecb700463d9f74921___::Run @ 0x180198470 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c9098dcc85f0f6ecb700463d9f74921___--Run.c)
 * Callees:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800889D0 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x18008E728 (-IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z.c)
 *     ?SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z @ 0x18008E7B8 (-SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_25771992@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801453AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_25771992@@@de.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AAR_DIRECTPOLICYCHECKS_24924568@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801460B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AAR_DIRECTPOLICYCHECKS_24924568.c)
 */

__int64 __fastcall CortanaAvailability::WriteCortanaAvailabilityToRegistry(
        CortanaAvailability *this,
        unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rdx
  int IsCortanaAvailable; // ebx
  __int64 v4; // rdx
  int v5; // edi
  unsigned int v6; // r9d
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  IsCortanaAvailable = CortanaExperienceHelpers::IsCortanaAvailable((CortanaExperienceHelpers *)&v11, a2);
  if ( IsCortanaAvailable != -2147024894 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_25771992>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_25771992>::GetImpl'::`2'::impl,
      0LL);
    if ( IsCortanaAvailable < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x100,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)IsCortanaAvailable,
        v9);
      return (unsigned int)IsCortanaAvailable;
    }
  }
  v5 = CortanaAvailability::CheckCortanaAvailability((CortanaAvailability *)&v12, v2);
  if ( v5 < 0 )
  {
    v8 = 261LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v5,
      v9);
    return (unsigned int)v5;
  }
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AAR_DIRECTPOLICYCHECKS_24924568>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_AAR_DIRECTPOLICYCHECKS_24924568>::GetImpl'::`2'::impl,
    v4);
  v5 = CortanaExperienceHelpers::SetCortanaRegKey(L"IsAvailable", (const unsigned __int16 *)v12, 0, v6);
  if ( v5 < 0 )
  {
    v8 = 265LL;
    goto LABEL_11;
  }
  if ( v12 != v11 || IsCortanaAvailable == -2147024894 )
    SendNotifyMessageW(HWND_BROADCAST, 0x1Au, 0LL, (LPARAM)L"TraySettings");
  return 0LL;
}
