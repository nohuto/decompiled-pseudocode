/*
 * XREFs of ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x1801A511C
 * Callers:
 *     _lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_::_lambda_invoker_cdecl_ @ 0x1801A25B0 (_lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1801A4144 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x1801A6128 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801D0FEC (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::OnUpdateCursorMagnetismTimer(ControllerProcessor *this)
{
  _QWORD *CursorPosition; // rax
  __int64 v3; // rcx
  POINT v4; // rbx
  int v5; // eax
  POINT pt; // [rsp+30h] [rbp-38h] BYREF
  int v8[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CursorPosition = (_QWORD *)ControllerProcessor::GetCursorPosition(this, &pt);
  v3 = *((_QWORD *)this + 939);
  *(_OWORD *)v8 = 0LL;
  *((_QWORD *)this + 45) = *CursorPosition;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 96LL))(v3, *((unsigned int *)this + 710), 1LL) < 0 )
    *(_OWORD *)v8 = 0LL;
  CursorAttraction::ApplyCursorAttraction(
    (ControllerProcessor *)((char *)this + 7556),
    &pt,
    (const struct tagRECT *)((char *)this + 360));
  v4 = pt;
  if ( ((*((_BYTE *)this + 328) & 8) == 0 || PtInRect((const RECT *)((char *)this + 404), pt))
    && (*((_DWORD *)this + 90) != v4.x || *((_DWORD *)this + 91) != pt.y) )
  {
    v5 = ControllerProcessor::SetPointerPosition(this, v4, 0);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB4E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v5,
        (int)v8);
  }
  return 0LL;
}
