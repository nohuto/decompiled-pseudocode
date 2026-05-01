/*
 * XREFs of _lambda_a1e0b2aff68b27cc6a79652c5f2cfbda_::operator() @ 0x180514D48
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a1e0b2aff68b27cc6a79652c5f2cfbda__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x180516150 (std--_Func_impl_no_alloc__lambda_a1e0b2aff68b27cc6a79652c5f2cfbda__bool_APP_LAYOUT__ea_180516150.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetVtcAppPanelWidth@PPIWin32VtcLayoutOperation@@AEAAHXZ @ 0x180516954 (-_GetVtcAppPanelWidth@PPIWin32VtcLayoutOperation@@AEAAHXZ.c)
 */

char __fastcall lambda_a1e0b2aff68b27cc6a79652c5f2cfbda_::operator()(PPIWin32VtcLayoutOperation **a1, __int64 a2)
{
  PPIWin32VtcLayoutOperation *v2; // r14
  int VtcAppPanelWidth; // r8d
  int v6; // esi
  PPIWin32VtcLayoutOperation *v7; // rdi
  int v8; // eax
  PPIWin32VtcLayoutOperation *v9; // rcx
  char result; // al
  int v11[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *a1;
  if ( (*(unsigned __int8 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD))(*(_QWORD *)*a1 + 168LL))(
         *a1,
         *(_QWORD *)(a2 + 16)) )
  {
    VtcAppPanelWidth = PPIWin32VtcLayoutOperation::_GetVtcAppPanelWidth(v2);
    v6 = *((_DWORD *)a1 + 9);
    *(_QWORD *)a1[1] = *(_QWORD *)(a2 + 16);
  }
  else
  {
    v6 = *((_DWORD *)a1 + 9);
    VtcAppPanelWidth = *((_DWORD *)a1 + 8) - v6 - PPIWin32VtcLayoutOperation::_GetVtcAppPanelWidth(v2);
  }
  v7 = a1[3];
  v11[1] = *((_DWORD *)v7 + 1);
  v11[3] = *((_DWORD *)v7 + 3);
  v11[0] = *((_DWORD *)v7 + 2);
  v11[2] = VtcAppPanelWidth + v11[0];
  v8 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64, int *))(*(_QWORD *)v2 + 184LL))(v2, a2, v11);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v8);
  v9 = a1[2];
  result = 1;
  *(_OWORD *)v7 = *(_OWORD *)v11;
  *((_DWORD *)v7 + 2) += v6;
  ++*(_DWORD *)v9;
  return result;
}
