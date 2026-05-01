/*
 * XREFs of ??R?$__func@V_lambda_5e29e8e218b412ab1c511f17015bec1e_@@$$A6AJK@Z@__function@wistd@@UEAAJ$$QEAK@Z @ 0x1801D0BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_5e29e8e218b412ab1c511f17015bec1e_,long (unsigned long)>::operator()(
        __int64 a1,
        unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8), *a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (int)"desktop\\internal\\shell\\inc\\private\\smartcookie.h",
      (const char *)(unsigned int)v2);
  return v3;
}
