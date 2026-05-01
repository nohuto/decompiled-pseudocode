/*
 * XREFs of ??R_lambda_98a8142f581a4fdcd56dbd206b43412c_@@QEBAJXZ @ 0x18053F308
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18053F730 (-Run@-$CTaskWrapper@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_98a8142f581a4fdcd56dbd206b43412c_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int i; // ebp
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, _QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    v6 = *(_DWORD *)(a1 + 20);
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 32);
    for ( i = 0; i < v13; ++i )
    {
      v14 = 0LL;
      v10 = *(_QWORD *)(a1 + 8);
      v11 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v10 + 32LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
      if ( v11(v10, i, &GUID_cd403e52_deed_4c13_b437_b98380f2b1e8, &v14) >= 0 )
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, int))a1)(v14, v8, v7, v6, v5);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
