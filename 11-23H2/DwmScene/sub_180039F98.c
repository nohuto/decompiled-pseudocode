/*
 * XREFs of sub_180039F98 @ 0x180039F98
 * Callers:
 *     sub_180039E78 @ 0x180039E78 (sub_180039E78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180039F98(
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
    return sub_18003A528(a1, a2, a3, a6, (__int64)a8);
  if ( a5 > a7 )
    return sub_180039C9C(a1, a2, a3, a4, a5, a6, a7, a8);
  return sub_18003A644(a1, a2, a3, a6, (__int64)a8);
}
