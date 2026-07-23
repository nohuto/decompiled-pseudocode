/*
 * XREFs of sub_1403D1DA8 @ 0x1403D1DA8
 * Callers:
 *     sub_1403D1870 @ 0x1403D1870 (sub_1403D1870.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_1403D1DA8(__int64 a1)
{
  unsigned __int8 result; // al
  unsigned int v2; // edx
  unsigned __int8 *v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // cl

  result = 1;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 32);
    if ( v2 )
    {
      v3 = (unsigned __int8 *)(a1 + 1440);
      v4 = v2;
      do
      {
        v5 = result;
        result = *v3;
        v3 += 344;
        if ( result <= v5 )
          result = v5;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
