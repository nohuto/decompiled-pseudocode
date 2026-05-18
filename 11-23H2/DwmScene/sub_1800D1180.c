/*
 * XREFs of sub_1800D1180 @ 0x1800D1180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D1180(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __m128i si128; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 144);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B850);
  v5 = 3;
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 192LL))(v2, si128.m128i_u32[a2]);
}
