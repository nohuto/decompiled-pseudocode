/*
 * XREFs of sub_14025E94C @ 0x14025E94C
 * Callers:
 *     sub_1406EBF2C @ 0x1406EBF2C (sub_1406EBF2C.c)
 * Callees:
 *     sub_14025E9D0 @ 0x14025E9D0 (sub_14025E9D0.c)
 *     sub_140376A50 @ 0x140376A50 (sub_140376A50.c)
 */

__int64 __fastcall sub_14025E94C(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 result; // rax

  if ( (*a2 & 0x40000) == 0 )
    return 3221225659LL;
  if ( a3 > 1
    || (result = ((__int64 (*)(void))sub_140376A50)(), (int)result >= 0)
    && (a3 || (result = sub_140376A50(a1, a2, 2LL), (int)result >= 0)) )
  {
    result = sub_14025E9D0(a2, a3);
    if ( (int)result >= 0 )
    {
      if ( a3 == 2 )
        sub_140376A50(a1, a2, 3LL);
      return 0LL;
    }
  }
  return result;
}
