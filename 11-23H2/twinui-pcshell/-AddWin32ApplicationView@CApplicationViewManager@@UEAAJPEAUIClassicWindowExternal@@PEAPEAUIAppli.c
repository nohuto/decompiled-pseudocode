/*
 * XREFs of ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x1800DFAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z @ 0x1800DFBF4 (--0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z.c)
 *     ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x1800DFE50 (-SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z.c)
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x1800DFEC0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800E0158 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800E0C30 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x1800E0CEC (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E0E20 (-AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180128890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180128890.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWin32ApplicationView(
        RTL_SRWLOCK *this,
        struct IClassicWindowExternal *a2,
        struct IApplicationView **a3)
{
  struct IApplicationView *v6; // rsi
  CWin32ApplicationView *v7; // rax
  __int64 *v8; // rbp
  int Instance; // eax
  unsigned int v10; // edi
  const struct _GUID *v11; // rcx
  int v12; // eax
  struct IApplicationView *v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = (CWin32ApplicationView *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v7 = CWin32ApplicationView::CWin32ApplicationView(v7, a2);
    v6 = v7;
    v8 = (__int64 *)v7;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v7 )
  {
    v10 = -2147024882;
    v15 = 526LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v10,
      v17);
    goto LABEL_12;
  }
  Instance = CApplicationViewBase::RuntimeClassInitialize((CApplicationViewBase *)v8);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v16 = 36LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)Instance,
      v17);
    v15 = 527LL;
    goto LABEL_22;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8 + 28);
  Instance = AppSizeConstraintsCache_CreateInstance(v11, (void **)v8 + 28);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v16 = 37LL;
    goto LABEL_21;
  }
  Instance = CWin32ApplicationView::InitializeCloakType(v8, 0LL);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v16 = 38LL;
    goto LABEL_21;
  }
  Instance = CWin32ApplicationView::SetForceActiveWindowAppearance((CWin32ApplicationView *)v8, 0);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v16 = 39LL;
    goto LABEL_21;
  }
  CWin32ApplicationView::QuerySizeConstraintsFromApp((CWin32ApplicationView *)v8);
  AcquireSRWLockExclusive(this + 66);
  v12 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-17], v6, 0LL);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12,
      (_DWORD)this + 528);
    if ( this != (RTL_SRWLOCK *)-528LL )
      ReleaseSRWLockExclusive(this + 66);
  }
  else
  {
    if ( this != (RTL_SRWLOCK *)-528LL )
      ReleaseSRWLockExclusive(this + 66);
    v13 = v6;
    v6 = 0LL;
    *a3 = v13;
    v10 = 0;
  }
LABEL_12:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(v6);
  return v10;
}
