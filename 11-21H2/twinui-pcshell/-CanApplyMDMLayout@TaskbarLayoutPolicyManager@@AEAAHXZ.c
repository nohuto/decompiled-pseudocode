/*
 * XREFs of ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x1801173E8
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180116C90 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180319364 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117440 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@details@wil@@QEAAX_NW4.c)
 *     wil::details::RunFeatureDispatch__lambda_4d22249b2e966fdcd7fec0fc117130b9__&_ @ 0x180117658 (wil--details--RunFeatureDispatch__lambda_4d22249b2e966fdcd7fec0fc117130b9__-_.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyMDMLayout(TaskbarLayoutPolicyManager *this, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  TaskbarLayoutPolicyManager *v7; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(a2) = 1;
  v4[2] = 0LL;
  v4[0] = retaddr;
  v4[1] = "pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp";
  v7 = this;
  v5 = 304;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MdmSupportForEdu>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetImpl'::`2'::impl,
    a2);
  return wil::details::RunFeatureDispatch__lambda_4d22249b2e966fdcd7fec0fc117130b9____(v2, v4, &v7);
}
