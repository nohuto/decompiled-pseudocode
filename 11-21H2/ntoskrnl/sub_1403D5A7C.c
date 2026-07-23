/*
 * XREFs of sub_1403D5A7C @ 0x1403D5A7C
 * Callers:
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_140508270 @ 0x140508270 (sub_140508270.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403D5A7C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 4) != 209 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      *(_DWORD *)(a2 + 12) |= 2u;
  }
  return result;
}
