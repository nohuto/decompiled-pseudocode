/*
 * XREFs of sub_140A529EC @ 0x140A529EC
 * Callers:
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140398488 @ 0x140398488 (sub_140398488.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

unsigned __int64 sub_140A529EC()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rbp
  char v2; // si
  LARGE_INTEGER PerformanceCounter; // rdi
  unsigned __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  qword_140C1D010 = 0LL;
  v0 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  xmmword_140C1D000 = 0LL;
  v1 = 1000000LL * *((unsigned int *)KeGetCurrentPrcb() + 17);
  v2 = sub_14042A5E0(&v7, &v8);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  result = sub_14029394C(__rdtsc() - v8 - v7, v1, qword_140D069F8);
  v5 = PerformanceCounter.QuadPart - result;
  if ( byte_140C223A8 || v2 )
  {
    v6 = sub_140398488();
    v7 -= v6;
    v0 = v6;
    result = sub_14029394C(v7, v1, qword_140D069F8);
    v5 -= result;
  }
  xmmword_140C1D000 = __PAIR128__(v0, v7);
  qword_140C1D010 = v5;
  return result;
}
