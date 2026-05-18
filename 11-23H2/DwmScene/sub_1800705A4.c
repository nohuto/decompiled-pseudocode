/*
 * XREFs of sub_1800705A4 @ 0x1800705A4
 * Callers:
 *     sub_18006FE4C @ 0x18006FE4C (sub_18006FE4C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18006FE14 @ 0x18006FE14 (sub_18006FE14.c)
 */

__int64 __fastcall sub_1800705A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18006FE14((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFF80uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + (a3 << 7);
  *(_QWORD *)(a1 + 16) = a2 + (a4 << 7);
  return result;
}
