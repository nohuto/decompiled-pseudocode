/*
 * XREFs of ?GetExtendedFramePosition@CWinRTApplicationView@@UEAAJPEAUtagRECT@@@Z @ 0x1803CF6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1802D1E5E (-_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetExtendedFramePosition(CWinRTApplicationView *this, struct tagRECT *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rbx
  int ExtendedFramePosition; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  CApplicationViewBase *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  HWND v13; // [rsp+50h] [rbp+18h] BYREF

  SetRectEmpty(a2);
  v12 = 0LL;
  v4 = *((_QWORD *)this + 26);
  v5 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  ExtendedFramePosition = v5(v4, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v12);
  v7 = ExtendedFramePosition;
  if ( ExtendedFramePosition < 0 )
  {
    v8 = 249LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)ExtendedFramePosition);
    goto LABEL_8;
  }
  ExtendedFramePosition = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 32LL))(v12, &v13);
  v7 = ExtendedFramePosition;
  if ( ExtendedFramePosition < 0 )
  {
    v8 = 252LL;
    goto LABEL_7;
  }
  ExtendedFramePosition = CApplicationViewBase::_GetExtendedFramePosition(v9, v13, a2);
  v7 = ExtendedFramePosition;
  if ( ExtendedFramePosition < 0 )
  {
    v8 = 254LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v7;
}
