/*
 * XREFs of ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18003E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180035D30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x18003EAAC (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18003EC10 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800E0C30 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IUnknown *a3)
{
  CWinRTApplicationView *v6; // rsi
  CWinRTApplicationView *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  volatile int *v11; // rdx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = (CWinRTApplicationView *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v7 = CWinRTApplicationView::CWinRTApplicationView(v7, a2);
    v6 = v7;
  }
  if ( !v7 )
  {
    v9 = -2147024882;
    v13 = 2147942414LL;
    v14 = 541LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v13,
      v15);
    goto LABEL_9;
  }
  v8 = CWinRTApplicationView::RuntimeClassInitialize(v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = (unsigned int)v8;
    v14 = 542LL;
    goto LABEL_14;
  }
  AcquireSRWLockExclusive(this + 66);
  v10 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-17], v6, a3);
  v9 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x221,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10,
      (_DWORD)this + 528);
  if ( this != (RTL_SRWLOCK *)-528LL )
    ReleaseSRWLockExclusive(this + 66);
LABEL_9:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(
      (__int64)v6,
      v11);
  return v9;
}
