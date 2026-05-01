/*
 * XREFs of ??R_lambda_141e1a56e61cb55b5c4011860e8cf798_@@QEBAJXZ @ 0x18053EFF0
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18053F6D0 (-Run@-$CTaskWrapper@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_141e1a56e61cb55b5c4011860e8cf798_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // ebx
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
    v5 = *(_DWORD *)(a1 + 16);
    for ( i = 0; i < v10; ++i )
    {
      v11 = 0LL;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
      if ( v8(v7, i, &GUID_cd403e52_deed_4c13_b437_b98380f2b1e8, &v11) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))a1)(v11, v5);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
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
