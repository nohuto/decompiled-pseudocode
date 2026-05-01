/*
 * XREFs of ??R_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@QEBA@XZ @ 0x1805F9B28
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1805FA0C0 (-Run@-$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_7aa9acfd8aab90d02032eccdb335cb01_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r12
  unsigned int i; // ebp
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v12);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    v6 = *(_DWORD *)(a1 + 20);
    v7 = *(_QWORD *)(a1 + 24);
    for ( i = 0; i < v12; ++i )
    {
      v13 = 0LL;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v9 + 32LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
      if ( v10(v9, i, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade, &v13) >= 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))a1)(v13, v7, v6, v5);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
