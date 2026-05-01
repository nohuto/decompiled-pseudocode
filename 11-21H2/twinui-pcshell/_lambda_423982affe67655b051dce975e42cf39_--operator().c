/*
 * XREFs of _lambda_423982affe67655b051dce975e42cf39_::operator() @ 0x18041D1BC
 * Callers:
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_423982affe67655b051dce975e42cf39___ @ 0x18041CCF8 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IX.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_423982affe67655b051dce975e42cf39_::operator()(_DWORD *a1, __int64 *a2)
{
  int v4; // eax
  char v5; // bl
  HWND hWnd[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  hWnd[1] = (HWND)a2;
  v4 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)*a2 + 40LL))(*a2, hWnd);
  v5 = 0;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x180,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v4);
  if ( GetWindowRect(hWnd[0], &Rect)
    && Rect.left == *a1
    && Rect.top == a1[1]
    && Rect.right == a1[2]
    && Rect.bottom == a1[3] )
  {
    v5 = 1;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v5;
}
