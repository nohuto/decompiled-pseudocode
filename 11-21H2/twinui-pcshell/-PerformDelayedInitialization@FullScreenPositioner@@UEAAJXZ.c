/*
 * XREFs of ?PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ @ 0x1801520B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FullScreenAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015215C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FullScreenAnimation@@@details@wil@@QEAAX_.c)
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180152350 (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::PerformDelayedInitialization(FullScreenPositioner *this)
{
  void **v1; // rbx
  HRESULT Service; // eax
  bool v4; // bl
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void **)((char *)this + 200);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 25);
  Service = IUnknown_QueryService(
              *((IUnknown **)this - 1),
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              v1);
  v4 = 0;
  v5 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x147,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)Service);
    return v5;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    if ( (int)wil::wnf_query_nothrow<int>(&WNF_TMCN_ISTABLETMODE, &v8, &v9) >= 0 )
    {
      if ( v9 )
        v4 = v8 != 0;
    }
    *((_BYTE *)this + 392) = v4;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullScreenAnimation>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_FullScreenAnimation>::GetImpl'::`2'::impl,
      0LL);
    return 0LL;
  }
}
