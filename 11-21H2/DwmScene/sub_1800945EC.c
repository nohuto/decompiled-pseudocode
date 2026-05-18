/*
 * XREFs of sub_1800945EC @ 0x1800945EC
 * Callers:
 *     sub_1800670B0 @ 0x1800670B0 (sub_1800670B0.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800945EC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  char *v4; // rcx
  volatile signed __int32 *v5; // rcx

  sub_18000B4C0(a1 + 496, 16LL, 10LL);
  sub_180029C94((__int64 *)(a1 + 480));
  sub_18000B4C0(a1 + 384, 16LL, 6LL);
  sub_18000B4C0(a1 + 192, 32LL, 6LL);
  sub_180010910(a1 + 176);
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
  {
    sub_180088D1C(v2, *(_QWORD *)(a1 + 152));
    sub_180010884(*(char **)(a1 + 144), 16 * ((__int64)(*(_QWORD *)(a1 + 160) - *(_QWORD *)(a1 + 144)) >> 4));
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  sub_180010910(a1 + 96);
  sub_180010910(a1 + 80);
  sub_180010910(a1 + 64);
  result = sub_180010910(a1 + 48);
  v4 = *(char **)(a1 + 24);
  if ( v4 )
  {
    result = sub_180010884(v4, (*(_QWORD *)(a1 + 40) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
