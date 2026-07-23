/*
 * XREFs of sub_140256F0C @ 0x140256F0C
 * Callers:
 *     sub_14026B354 @ 0x14026B354 (sub_14026B354.c)
 *     sub_1403D8D00 @ 0x1403D8D00 (sub_1403D8D00.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_140256F0C(int a1)
{
  LONG result; // eax

  if ( a1 || (unsigned __int64)qword_140C51888 <= 0x8000000 )
    return KeSetEvent(&stru_140C51C10, 0, 0);
  return result;
}
