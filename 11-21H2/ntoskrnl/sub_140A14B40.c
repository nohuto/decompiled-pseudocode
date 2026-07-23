/*
 * XREFs of sub_140A14B40 @ 0x140A14B40
 * Callers:
 *     sub_140A11614 @ 0x140A11614 (sub_140A11614.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A14B40(__int64 a1, unsigned int a2, _WORD *a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned int i; // r11d
  unsigned int v8; // r8d
  unsigned int v9; // edx
  _WORD *v10; // rdi

  v4 = 0LL;
  if ( a2 && a4 <= a2 )
  {
    for ( i = 0; i + a4 <= a2; ++i )
    {
      v8 = 0;
      v9 = i;
      if ( a4 )
      {
        v10 = a3;
        while ( v9 < a2 )
        {
          if ( !*(_WORD *)(a1 + 2LL * v9) && ++v9 >= a2 )
            return v4;
          if ( *(_WORD *)(a1 + 2LL * v9) != *v10 )
            break;
          ++v8;
          ++v10;
          ++v9;
          if ( v8 >= a4 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( v8 == a4 )
          return a1 + 2LL * i;
      }
    }
  }
  return v4;
}
