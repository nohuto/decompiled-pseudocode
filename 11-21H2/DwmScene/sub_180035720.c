/*
 * XREFs of sub_180035720 @ 0x180035720
 * Callers:
 *     sub_1800357B4 @ 0x1800357B4 (sub_1800357B4.c)
 * Callees:
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_180030140 @ 0x180030140 (sub_180030140.c)
 *     sub_1800456DC @ 0x1800456DC (sub_1800456DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180035720(__int64 *a1, __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rax

  sub_1800456DC(a2, a1);
  sub_180030140(*a2);
  v4 = (__int64 *)a1[89];
  if ( v4 == (__int64 *)a1[90] )
  {
    sub_180012720(a1 + 88, (__int64)v4, a2);
  }
  else
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *v4 = *a2;
    v4[1] = a2[1];
    a1[89] += 16LL;
  }
  return a2;
}
