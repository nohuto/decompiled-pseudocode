/*
 * XREFs of ??R_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@QEBA@XZ @ 0x1805F9C40
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1805FA0E0 (-Run@-$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // ebp
  __int64 v6; // r15
  unsigned int i; // esi
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v11);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    v6 = *(_QWORD *)(a1 + 24);
    for ( i = 0; i < v11; ++i )
    {
      v12 = 0LL;
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
      if ( v9(v8, i, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade, &v12) >= 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))a1)(v12, v6, v5);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
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
