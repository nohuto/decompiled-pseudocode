/*
 * XREFs of ?SetViewState@CWinRTApplicationView@@UEAAJI@Z @ 0x1803CFDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::SetViewState(CWinRTApplicationView *this, unsigned int a2)
{
  WPARAM v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v9 = 0LL;
  v3 = *((_QWORD *)this + 26);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  v5 = v4(v3, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(__int64, HWND *))(*(_QWORD *)v9 + 32LL))(v9, &hWnd);
    PostMessageW(hWnd, 0x112u, v2, 0LL);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return v6;
}
