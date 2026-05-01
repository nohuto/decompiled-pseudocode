/*
 * XREFs of ?ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180494474
 * Callers:
 *     ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x180493D80 (-Execute@AllUpViewUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AllUpViewUriHandler::ShowAllUpView(__int64 a1, unsigned int a2)
{
  LPVOID v3; // rbx
  __int64 (__fastcall *v4)(LPVOID, SID *, GUID *, __int64 *); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp+18h] BYREF

  v10 = a1;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  CoCreateInstance(
    &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
    0LL,
    0x404u,
    &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
    &ppv);
  v10 = 0LL;
  v3 = ppv;
  v4 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v5 = v4(v3, &SID_AllUpView, &GUID_e053969d_e07d_482d_ae3b_17d1f01bf1ad, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, 0LL, a2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 69LL;
  }
  else
  {
    v7 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return v6;
}
