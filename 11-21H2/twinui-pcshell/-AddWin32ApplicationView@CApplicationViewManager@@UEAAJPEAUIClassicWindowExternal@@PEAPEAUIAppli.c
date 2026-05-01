/*
 * XREFs of ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x1800E74A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x1800E7040 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x1800E7150 (-SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x1800E71B4 (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E7358 (-AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z @ 0x1800E75E4 (--0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800E9710 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800ECA54 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180113290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWin32ApplicationView(
        RTL_SRWLOCK *this,
        struct IClassicWindowExternal *a2,
        struct IApplicationView **a3)
{
  struct IApplicationView *v6; // rdi
  CWin32ApplicationView *v7; // rax
  __int64 *v8; // rbp
  int Instance; // eax
  unsigned int v10; // esi
  const struct _GUID *v11; // rcx
  int v12; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = (CWin32ApplicationView *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v6 = CWin32ApplicationView::CWin32ApplicationView(v7, a2);
    v8 = (__int64 *)v6;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    v10 = -2147024882;
    v14 = 523LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v10);
    goto LABEL_12;
  }
  Instance = CApplicationViewBase::RuntimeClassInitialize((CApplicationViewBase *)v8);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v15 = 35LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)Instance);
    v14 = 524LL;
    goto LABEL_22;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8 + 28);
  Instance = AppSizeConstraintsCache_CreateInstance(v11, (void **)v8 + 28);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v15 = 36LL;
    goto LABEL_21;
  }
  Instance = CWin32ApplicationView::InitializeCloakType((__int64)v8, 0);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v15 = 37LL;
    goto LABEL_21;
  }
  Instance = CWin32ApplicationView::SetForceActiveWindowAppearance((CWin32ApplicationView *)v8, 0);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v15 = 38LL;
    goto LABEL_21;
  }
  CWin32ApplicationView::QuerySizeConstraintsFromApp((__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v8);
  AcquireSRWLockExclusive(this + 66);
  v12 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-17], v6, 0LL);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x210,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12);
    if ( this != (RTL_SRWLOCK *)-528LL )
      ReleaseSRWLockExclusive(this + 66);
  }
  else
  {
    if ( this != (RTL_SRWLOCK *)-528LL )
      ReleaseSRWLockExclusive(this + 66);
    *a3 = (struct IApplicationView *)v8;
    v10 = 0;
    v8 = 0LL;
  }
LABEL_12:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(v8);
  return v10;
}
