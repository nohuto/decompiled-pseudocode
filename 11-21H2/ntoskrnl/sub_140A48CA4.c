/*
 * XREFs of sub_140A48CA4 @ 0x140A48CA4
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 sub_140A48CA4()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  qword_140C22E28 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C1D010;
  v0 = &qword_140001B28;
  v1 = 59LL;
  qword_140C22DF0 = 1000LL * *(unsigned int *)(sub_140348800(0) + 68);
  do
  {
    if ( (v0[1] & 0x20000000) != 0 )
    {
      v4 = *(__int64 *)((char *)&qword_140C22D18 + *v0);
      if ( v4 > (unsigned __int64)xmmword_140C1D000 )
        v4 -= *((_QWORD *)&xmmword_140C1D000 + 1);
      v3 = *v0;
      *(__int64 *)((char *)&qword_140C22D18 + v3) = sub_14029394C(
                                                      v4,
                                                      1000000LL * *((unsigned int *)KeGetCurrentPrcb() + 17),
                                                      qword_140D069F8);
    }
    v0 += 3;
    --v1;
  }
  while ( v1 );
  result = qword_140C22DE8 - qword_140C22D80;
  qword_140C22D78 = qword_140C22DE8 - qword_140C22D80;
  return result;
}
