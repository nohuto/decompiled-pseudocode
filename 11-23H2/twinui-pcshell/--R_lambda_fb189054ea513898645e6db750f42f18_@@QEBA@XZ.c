/*
 * XREFs of ??R_lambda_fb189054ea513898645e6db750f42f18_@@QEBA@XZ @ 0x1805F9D44
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1805FA100 (-Run@-$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_fb189054ea513898645e6db750f42f18_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rbx
  unsigned int i; // ebp
  __int64 v7; // rsi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    for ( i = 0; i < v10; ++i )
    {
      v11 = 0LL;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
      if ( v8(v7, i, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade, &v11) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))a1)(v11, v5);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
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
