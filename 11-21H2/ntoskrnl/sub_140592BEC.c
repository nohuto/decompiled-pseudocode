/*
 * XREFs of sub_140592BEC @ 0x140592BEC
 * Callers:
 *     sub_140593778 @ 0x140593778 (sub_140593778.c)
 * Callees:
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 */

char __fastcall sub_140592BEC(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int i; // edi
  int v4; // eax

  v2 = a1;
  for ( i = 0; i < 4; ++i )
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !i )
    {
      v4 = sub_1402FDD20(a1);
      if ( v4 )
        continue;
    }
    LOBYTE(v4) = sub_1403D99B4(v2, (PVOID)8);
  }
  return v4;
}
