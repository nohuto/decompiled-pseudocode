/*
 * XREFs of sub_1405228C8 @ 0x1405228C8
 * Callers:
 *     sub_1405682F4 @ 0x1405682F4 (sub_1405682F4.c)
 *     sub_140A659E0 @ 0x140A659E0 (sub_140A659E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405228C8(_BYTE *a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 i; // r10
  __int64 result; // rax

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 && a2 <= 0x7FFFFFFF )
  {
    for ( i = a2; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    result = i == 0 ? 0xC000000D : 0;
    v4 = (a2 - i) & -(__int64)(i != 0);
  }
  else
  {
    result = 3221225485LL;
  }
  if ( a3 )
  {
    if ( (int)result >= 0 )
      v3 = v4;
    *a3 = v3;
  }
  return result;
}
