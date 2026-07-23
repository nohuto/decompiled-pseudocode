/*
 * XREFs of sub_140248574 @ 0x140248574
 * Callers:
 *     sub_1406FC148 @ 0x1406FC148 (sub_1406FC148.c)
 * Callees:
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 */

__int64 __fastcall sub_140248574(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_140C4F3E0;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    v2 = qword_140C4F378;
  return sub_1402710C4(
           v2 + 128,
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 8) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
