/*
 * XREFs of sub_14097A014 @ 0x14097A014
 * Callers:
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 * Callees:
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 */

__int64 __fastcall sub_14097A014(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  ULONG_PTR v6; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r10

  if ( a4 )
  {
    if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
      {
        v6 = sub_140313C70(a3);
        sub_1405A89EC(v9, v8, v6, v6 + 8 * ((v7 >> 12) - 1 + ((v7 & 0xFFF) != 0)), 0);
        return 0LL;
      }
    }
    else if ( (a5 & 0x10000000) != 0 )
    {
      return 3221225494LL;
    }
  }
  return 3221225632LL;
}
