/*
 * XREFs of sub_18003E1EC @ 0x18003E1EC
 * Callers:
 *     sub_18003E0C4 @ 0x18003E0C4 (sub_18003E0C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003E1EC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, unsigned __int64))
{
  if ( a4 <= a5 && a4 <= a7 )
    return sub_18003E764(a1, a2, a3, a6, (__int64)a8);
  if ( a5 > a7 )
    return sub_18003DEE8(a1, a2, a3, a4, a5, a6, a7, a8);
  return sub_18003E900(a1, a2, a3, a6, (__int64)a8);
}
