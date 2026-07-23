/*
 * XREFs of sub_14054E548 @ 0x14054E548
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054E548(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r9
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, 0x68uLL);
  v4 = 0LL;
  v8[1] = a1;
  v8[2] = a2;
  v5 = &v8[4];
  do
  {
    v6 = *(int *)((char *)&qword_14003BE80[1] + v4);
    v4 += 4LL;
    v6 *= 2LL;
    *(v5 - 1) = qword_140C54050[v6];
    *v5 = qword_140C54058[v6];
    v5 += 2;
  }
  while ( v4 < 8 );
  qsort(&v8[3], 2uLL, 0x10uLL, sub_140B4D520);
  return sub_140358A20(2u, 215, 0, (__int64)v8);
}
