/*
 * XREFs of sub_1403D6DF4 @ 0x1403D6DF4
 * Callers:
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 *     sub_140B252DC @ 0x140B252DC (sub_140B252DC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1403D6DF4(__int64 a1)
{
  return (*(_DWORD *)(a1 + 36) & 0x2000000) != 0
      && *(_BYTE *)a1 == 80
      && *(_BYTE *)(a1 + 1) == 97
      && *(_BYTE *)(a1 + 2) == 100
      && (unsigned __int8)(*(_BYTE *)(a1 + 3) - 48) <= 9u;
}
