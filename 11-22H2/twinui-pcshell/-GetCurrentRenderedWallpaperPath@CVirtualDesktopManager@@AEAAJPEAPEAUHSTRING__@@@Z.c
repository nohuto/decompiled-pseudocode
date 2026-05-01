/*
 * XREFs of ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x1806019C4
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18060384C (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ @ 0x180607108 (-UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1801B73D8 (-Release@HString@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f03fbe1e409519c33ffd389fa0e0619f___ @ 0x180214C78 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f03fbe1e409519c33ffd389fa0e0619f.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x1802D37A0 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180603380 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4Repo.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(LPVOID *this, HSTRING *a2)
{
  HSTRING *v2; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  HRESULT v7; // eax
  LPVOID *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  LPVOID *p_pv; // [rsp+40h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+48h] [rbp+28h] BYREF
  const wchar_t *v13; // [rsp+50h] [rbp+30h] BYREF

  p_pv = this;
  v2 = a2;
  *a2 = 0LL;
  pv = 0LL;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwSotUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VwSotUpdates>::GetImpl'::`2'::impl,
    a2);
  p_pv = &pv;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f03fbe1e409519c33ffd389fa0e0619f___(
         v4,
         CurrentThreadId,
         &p_pv);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x579,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_8;
  }
  if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&pv) )
  {
    p_pv = 0LL;
    v13 = (const wchar_t *)pv;
    v7 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((HSTRING *)&p_pv, &v13);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x589,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::Wrappers::HString::Release((HSTRING *)&p_pv);
      goto LABEL_8;
    }
    v8 = p_pv;
    p_pv = 0LL;
    *v2 = (HSTRING)v8;
    Microsoft::WRL::Wrappers::HString::Release((HSTRING *)&p_pv);
  }
  v6 = 0;
LABEL_8:
  if ( pv )
    CoTaskMemFree(pv);
  return v6;
}
