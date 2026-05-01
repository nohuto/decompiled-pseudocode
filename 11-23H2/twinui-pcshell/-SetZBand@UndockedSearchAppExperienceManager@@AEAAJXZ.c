/*
 * XREFs of ?SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800BA150
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800B7650 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801747C0 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BA2B8 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::SetZBand(UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rdx
  _DWORD *v3; // rcx
  unsigned int v4; // esi
  float v5; // xmm0_4
  float v6; // xmm1_4
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  ULONG v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v13[4]; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *(_DWORD **)(wil::details::static_lazy<SearchAppLauncherLogging>::get(
                      this,
                      _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v3, (int)&dword_1808547CF, 0, 0, 2u, &v14);
  if ( !*((_QWORD *)this + 8) )
    return 0LL;
  v4 = 13;
  v5 = *((float *)this + 32);
  v6 = *((float *)this + 33);
  v13[0] = (int)v5;
  v13[1] = (int)v6;
  v13[2] = (int)(float)(v5 + *((float *)this + 34));
  v13[3] = (int)(float)(v6 + *((float *)this + 35));
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    v2);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 13) + 40LL))(
          *((_QWORD *)this + 13),
          v13)
    || *((_BYTE *)this + 872) )
  {
    v4 = 6;
  }
  v12 = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
         (char *)this + 64,
         &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      v11);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, v4);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB4D,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        v11);
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v8;
}
