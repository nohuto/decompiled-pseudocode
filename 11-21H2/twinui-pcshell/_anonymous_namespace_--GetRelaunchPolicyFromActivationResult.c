/*
 * XREFs of _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x18045EA6C
 * Callers:
 *     _lambda_5bca6f87553ee4a307de3070de971dc8_::operator() @ 0x1801B0020 (_lambda_5bca6f87553ee4a307de3070de971dc8_--operator().c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 */

__int64 __fastcall anonymous_namespace_::GetRelaunchPolicyFromActivationResult(int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rax

  if ( dword_1807B7544 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1807B7544);
    if ( dword_1807B7544 == -1 )
    {
      dword_1807B286C = -2147009295;
      dword_1807B2870 = 0;
      byte_1807B2874 = 1;
      dword_1807B2878 = -2147009287;
      dword_1807B287C = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v2,
        v3);
      byte_1807B2880 = 1;
      dword_1807B2884 = -2147009280;
      dword_1807B2888 = 2;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v4,
        v5);
      byte_1807B288C = 1;
      dword_1807B2890 = -2018374645;
      dword_1807B2894 = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v6,
        v7);
      byte_1807B2898 = 1;
      dword_1807B289C = -2144927148;
      dword_1807B28A0 = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v8,
        v9);
      byte_1807B28A4 = 1;
      dword_1807B28A8 = -2147024891;
      dword_1807B28AC = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v10,
        v11);
      byte_1807B28B0 = 1;
      dword_1807B28B4 = -2147023728;
      dword_1807B28B8 = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v12,
        v13);
      byte_1807B28BC = 1;
      dword_1807B28C0 = -2147009290;
      dword_1807B28C4 = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v14,
        v15);
      byte_1807B28C8 = 1;
      dword_1807B28CC = -2147009284;
      dword_1807B28D0 = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v16,
        v17);
      byte_1807B28D4 = 1;
      dword_1807B28D8 = -2147009296;
      dword_1807B28DC = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
        1u,
        v18,
        v19);
      byte_1807B28E0 = 1;
      Init_thread_footer(&dword_1807B7544);
    }
  }
  v20 = (char *)&unk_1807B2860;
  while ( *(_DWORD *)v20 != a1 || !v20[8] )
  {
    v20 += 12;
    if ( v20 == (char *)&PPILayoutOperation::_insertSide )
      return 1LL;
  }
  return *((unsigned int *)v20 + 1);
}
