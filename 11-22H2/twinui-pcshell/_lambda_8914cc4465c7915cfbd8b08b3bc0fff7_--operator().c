/*
 * XREFs of _lambda_8914cc4465c7915cfbd8b08b3bc0fff7_::operator() @ 0x1801D8C9C
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___::Invoke @ 0x1801D9030 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_8914cc4465c7915cfb_ea_1801D9030.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_8914cc4465c7915cfbd8b08b3bc0fff7_::operator()(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  if ( v4(a2, &GUID_329d2470_eefd_4972_9d8a_9e7cffe3b767, &v9) < 0
    || (v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 72LL))(
               v9,
               *(_QWORD *)a1,
               *(unsigned int *)(a1 + 8)),
        v6 = v5,
        v5 >= 0) )
  {
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return v6;
}
