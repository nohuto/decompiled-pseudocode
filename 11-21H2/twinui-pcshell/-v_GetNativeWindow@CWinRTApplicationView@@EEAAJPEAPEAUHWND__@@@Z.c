/*
 * XREFs of ?v_GetNativeWindow@CWinRTApplicationView@@EEAAJPEAPEAUHWND__@@@Z @ 0x180033B90
 * Callers:
 *     ?GetThumbnailWindow@CWinRTApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180033B80 (-GetThumbnailWindow@CWinRTApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?CanReceiveInput@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x1803140C0 (-CanReceiveInput@CWinRTApplicationView@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::v_GetNativeWindow(CWinRTApplicationView *this, HWND *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v3 = *((_QWORD *)this + 26);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  v5 = v4(v3, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 144LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v5,
      v9);
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 32LL))(v11, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 145LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return v6;
}
