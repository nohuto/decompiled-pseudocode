/*
 * XREFs of ?PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ @ 0x1800ACAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACB5C (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall FullScreenPositioner::PerformDelayedInitialization(FullScreenPositioner *this)
{
  void **v1; // rbx
  HRESULT Service; // eax
  bool v4; // bl
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void **)((char *)this + 184);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 23);
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
      (void *)0x128,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)Service,
      v7);
    return v5;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( (int)wil::wnf_query_nothrow<int>(&WNF_TMCN_ISTABLETMODE, &v9, &v10) >= 0 )
    {
      if ( v10 )
        v4 = v9 != 0;
    }
    *((_BYTE *)this + 360) = v4;
    return 0LL;
  }
}
