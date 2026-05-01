/*
 * XREFs of ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x1800E9620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x1800E9410 (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800E9710 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x1800E9C98 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180125FB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180125FB0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IUnknown *a3)
{
  CWinRTApplicationView *v6; // rbx
  CWinRTApplicationView *v7; // rax
  CWinRTApplicationView *v8; // rbp
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = (CWinRTApplicationView *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v6 = CWinRTApplicationView::CWinRTApplicationView(v7, a2);
    v8 = v6;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    v10 = -2147024882;
    v13 = 2147942414LL;
    v14 = 538LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v13);
    goto LABEL_9;
  }
  v9 = CWinRTApplicationView::RuntimeClassInitialize(v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = (unsigned int)v9;
    v14 = 539LL;
    goto LABEL_15;
  }
  AcquireSRWLockExclusive(this + 66);
  v11 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-17], v6, a3);
  v10 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21E,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
  if ( this != (RTL_SRWLOCK *)-528LL )
    ReleaseSRWLockExclusive(this + 66);
LABEL_9:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v8);
  return v10;
}
