/*
 * XREFs of sub_14055D470 @ 0x14055D470
 * Callers:
 *     sub_14055D2EC @ 0x14055D2EC (sub_14055D2EC.c)
 * Callees:
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_14055D470(__int64 a1, __int64 **a2)
{
  __int64 *i; // rbx
  __int64 j; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( a2 )
  {
    for ( i = *a2; i != (__int64 *)a2; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) )
      {
        sub_140593218(a1, i[5], *((unsigned int *)i + 8));
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 4); j = (unsigned int)(j + 1) )
        {
          v6 = i[2 * j + 6];
          if ( v6 )
          {
            v7 = i[2 * (unsigned int)j + 7];
            if ( v7 )
              sub_140593218(a1, v6, v7);
          }
        }
      }
    }
  }
  return 0LL;
}
