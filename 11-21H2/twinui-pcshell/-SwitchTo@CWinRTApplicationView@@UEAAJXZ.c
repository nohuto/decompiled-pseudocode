/*
 * XREFs of ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x18002F2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x18002F3C0 (-SetFocus@CWinRTApplicationView@@UEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::SwitchTo(CWinRTApplicationView *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v2 = *((_QWORD *)this + 26);
  v3 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v4 = v3(v2, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v10);
  v5 = v4;
  if ( v4 == -2147023728 )
  {
    v4 = CWinRTApplicationView::SetFocus(this);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_6;
    v7 = 88LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v4,
      v8);
    goto LABEL_6;
  }
  if ( v4 < 0 )
  {
    v7 = 93LL;
    goto LABEL_11;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 32LL))(v10, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 96LL;
    goto LABEL_11;
  }
  v5 = CWinRTApplicationView::SetFocus(this);
  if ( v5 >= 0 )
    v5 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return (unsigned int)v5;
}
