/*
 * XREFs of _lambda_acd10b41a0cddad1ef38ef822c802fad_::operator() @ 0x1800608F0
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_acd10b41a0cddad1ef38ef822c802fad___::Invoke @ 0x1800608E0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_acd10b41a0cddad1ef38ef822c802fa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_acd10b41a0cddad1ef38ef822c802fad_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = *(_QWORD *)(*a1 + 208LL);
  v5 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  v6 = v5(v4, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 227LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v6,
      v10);
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 230LL;
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, v13, a1 + 1, a1[3]);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 232LL;
    goto LABEL_9;
  }
  v7 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v7;
}
