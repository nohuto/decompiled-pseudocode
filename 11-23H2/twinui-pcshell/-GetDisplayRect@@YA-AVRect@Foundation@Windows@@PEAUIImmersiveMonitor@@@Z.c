/*
 * XREFs of ?GetDisplayRect@@YA?AVRect@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z @ 0x18006F3EC
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

float *__fastcall GetDisplayRect(float *a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  float *result; // rax
  int v6; // r9d
  int v7; // ecx
  int v8; // edx
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *a2;
  *(_OWORD *)v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *))(v2 + 72))(a2, v9);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4D,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v4,
      v9[0]);
  result = a1;
  v6 = v9[1];
  v7 = v9[2] - v9[0];
  v8 = v9[3] - v9[1];
  *a1 = (float)v9[0];
  a1[1] = (float)v6;
  a1[2] = (float)v7;
  a1[3] = (float)v8;
  return result;
}
