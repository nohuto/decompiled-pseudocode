/*
 * XREFs of sub_1800C9FBC @ 0x1800C9FBC
 * Callers:
 *     sub_1800111B0 @ 0x1800111B0 (sub_1800111B0.c)
 *     sub_180011560 @ 0x180011560 (sub_180011560.c)
 *     sub_1800C91A0 @ 0x1800C91A0 (sub_1800C91A0.c)
 *     sub_1800C9360 @ 0x1800C9360 (sub_1800C9360.c)
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 *     sub_1800C97F0 @ 0x1800C97F0 (sub_1800C97F0.c)
 *     sub_1800C9C20 @ 0x1800C9C20 (sub_1800C9C20.c)
 *     sub_1800C9E00 @ 0x1800C9E00 (sub_1800C9E00.c)
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 *     sub_1800CAB90 @ 0x1800CAB90 (sub_1800CAB90.c)
 *     sub_1800CAFD0 @ 0x1800CAFD0 (sub_1800CAFD0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180047AFC @ 0x180047AFC (sub_180047AFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800C9FBC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[8]; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v8; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v7);
  sub_180011C50(v3, &v5);
  if ( v8 )
    sub_180010574(v8);
  if ( v5 )
  {
    sub_180047AFC(a2, &v5);
    if ( v6 )
      sub_180010530(v6);
  }
  else
  {
    if ( v6 )
      sub_180010530(v6);
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
