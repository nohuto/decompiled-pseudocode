/*
 * XREFs of ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x1801542F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004C410 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputForegroundManager@@@details@wil@@QEA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetForegroundThreadId@ForegroundManager@@QEAAIXZ @ 0x18008ABA4 (-GetForegroundThreadId@ForegroundManager@@QEAAIXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputInMinQueue@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E1B8C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputInMinQueue@@@details@wil@@QE.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::DeliverToInputService(
        NonBamoInputDeliveryServer *this,
        const struct KeyboardEvent *a2)
{
  __int64 v4; // r8
  const char *v5; // r9
  unsigned int ForegroundThreadId; // ebx
  __int64 v7; // r9
  ForegroundManager *ForegroundManager; // rax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4));
  if ( *(_DWORD *)a2 > 2u )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      267LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      v5);
  ForegroundThreadId = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardInputInMinQueue>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_KeyboardInputInMinQueue>::GetImpl'::`2'::impl,
    1u,
    v4,
    (__int64)v5);
  if ( !IsEdition(8778LL) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputForegroundManager>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_InputForegroundManager>::GetImpl'::`2'::impl,
      1u,
      3u,
      v7);
    ForegroundManager = ISMStatics::GetForegroundManager();
    ForegroundThreadId = ForegroundManager::GetForegroundThreadId(ForegroundManager);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, const struct KeyboardEvent *, _QWORD))(**((_QWORD **)this + 35) + 24LL))(
         *((_QWORD *)this + 35),
         a2,
         ForegroundThreadId);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x104,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v9,
      v11);
  return 0LL;
}
