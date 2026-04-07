/*
 * XREFs of _lambda_9b895451a2b89393d97211386094df83_::operator() @ 0x180054BFC
 * Callers:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18002C904 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     wil::details::lambda_call__lambda_9b895451a2b89393d97211386094df83___::_lambda_call__lambda_9b895451a2b89393d97211386094df83___ @ 0x18010648C (wil--details--lambda_call__lambda_9b895451a2b89393d97211386094df83___--_lambda_call__lambda_9b89.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_9b895451a2b89393d97211386094df83_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v2 = **a1;
  v5 = 0;
  v6 = 0;
  v4 = _xmm;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 240LL))(v2, &v4);
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[1] + 32LL))(*a1[1]);
}
