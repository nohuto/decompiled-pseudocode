/*
 * XREFs of _lambda_150041feadb12d29b74b347f051d22fe_::operator() @ 0x1800F3188
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_298607fb54b79f08d3da2d7394d86fe3___::Run @ 0x1800F3100 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_298607fb54b79f08d3da2d7394d86fe3___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameTitleFromWindowManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F33FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameTitleFromWindowManager@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F3484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wi.c)
 *     ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F350C (-GetAppChromeData@@YA-AV-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper.c)
 *     ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F35A4 (-GetAppTitleBarConfig@@YA-AV-$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewMan.c)
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x180146FA0 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall lambda_150041feadb12d29b74b347f051d22fe_::operator()(struct IImmersiveApplication **a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 v4; // rdx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v5; // rdx
  int NormalDisplayNameWithTitleSafe; // eax
  void *v7; // rbx
  struct IImmersiveApplication *v8; // rdi
  int (__fastcall *v9)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  char v10; // bl
  RTL_SRWLOCK *v11; // rbx
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, GUID *, __int64 *); // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v17; // eax
  int v18; // eax
  LPVOID pv; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h]
  __int64 v21; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF
  __int64 v24; // [rsp+78h] [rbp+38h] BYREF
  __int64 v25; // [rsp+80h] [rbp+40h] BYREF
  PSRWLOCK v26; // [rsp+88h] [rbp+48h]

  v25 = 0LL;
  v2 = *((_QWORD *)*a1 + 15);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 144LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  if ( v3(v2, &v25) >= 0 )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationFrameTitleFromWindowManager>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ApplicationFrameTitleFromWindowManager>::GetImpl'::`2'::impl,
      v4);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::GetImpl'::`2'::impl,
      0LL);
    pv = 0LL;
    v20 = -1LL;
    v21 = -1LL;
    NormalDisplayNameWithTitleSafe = IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
                                       a1[1],
                                       v5,
                                       (unsigned __int16 **)&pv);
    v7 = pv;
    if ( NormalDisplayNameWithTitleSafe >= 0 )
      (*(void (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v25 + 24LL))(v25, pv);
    if ( v7 )
      CoTaskMemFree(v7);
    v23 = 0LL;
    v8 = a1[1];
    v9 = **(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    if ( v9(v8, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v23) >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 216LL))(v23);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v25 + 88LL))(v25, 128LL, v10 != 0 ? 0x80 : 0);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  }
  v24 = 0LL;
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  v26 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = **((_QWORD **)*a1 + 13);
  if ( v12 )
  {
    v13 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v12 + 40LL);
    v14 = v24;
    v24 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v13(v12, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v24) >= 0 )
    {
      v15 = v24;
      if ( !v24 )
        goto LABEL_17;
      GetAppTitleBarConfig(&v23, v24);
      if ( BYTE2(v23) )
      {
        v17 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)*a1 + 176LL))(*a1, &v23);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x635,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v17);
      }
      GetAppChromeData(&pv, v24);
      if ( (_BYTE)v20 )
      {
        v18 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID))(*(_QWORD *)*a1 + 160LL))(*a1, pv);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x63B,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v18);
      }
    }
  }
  v15 = v24;
LABEL_17:
  if ( v11 )
  {
    ReleaseSRWLockExclusive(v11);
    v15 = v24;
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
}
