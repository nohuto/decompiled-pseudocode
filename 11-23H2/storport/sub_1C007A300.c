/*
 * XREFs of sub_1C007A300 @ 0x1C007A300
 * Callers:
 *     sub_1C005A398 @ 0x1C005A398 (sub_1C005A398.c)
 * Callees:
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007BE80 @ 0x1C007BE80 (sub_1C007BE80.c)
 */

__int64 __fastcall sub_1C007A300(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdx
  unsigned int v9; // r10d
  unsigned int v10; // esi
  int v11; // eax

  if ( a3 && a4 )
  {
    v9 = sub_1C007B2F4(a1);
    if ( !v9 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
      {
        return (unsigned int)-2147483631;
      }
      else
      {
        v10 = 0;
        if ( a3 )
        {
          while ( 1 )
          {
            v11 = sub_1C007BE80(a1, a2, v10, a4 + 80LL * v10);
            v9 = v11;
            if ( v11 < 0 )
              break;
            if ( ++v10 >= a3 )
              goto LABEL_11;
          }
          v9 = sub_1C007B340(a1, a2, (unsigned int)v11);
        }
LABEL_11:
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
