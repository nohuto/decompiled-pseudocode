/*
 * XREFs of sub_180070620 @ 0x180070620
 * Callers:
 *     sub_180070104 @ 0x180070104 (sub_180070104.c)
 *     sub_180070138 @ 0x180070138 (sub_180070138.c)
 *     sub_180070144 @ 0x180070144 (sub_180070144.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18006FE14 @ 0x18006FE14 (sub_18006FE14.c)
 */

__int64 __fastcall sub_180070620(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18006FE14((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFF80uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
