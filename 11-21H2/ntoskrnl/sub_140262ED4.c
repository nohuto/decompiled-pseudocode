/*
 * XREFs of sub_140262ED4 @ 0x140262ED4
 * Callers:
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_1402376C4 @ 0x1402376C4 (sub_1402376C4.c)
 *     sub_140261CF8 @ 0x140261CF8 (sub_140261CF8.c)
 *     sub_1403792D8 @ 0x1403792D8 (sub_1403792D8.c)
 *     sub_140379A64 @ 0x140379A64 (sub_140379A64.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14037DA00 @ 0x14037DA00 (sub_14037DA00.c)
 *     sub_14037DC94 @ 0x14037DC94 (sub_14037DC94.c)
 *     sub_14037DCC8 @ 0x14037DCC8 (sub_14037DCC8.c)
 *     sub_1403D735C @ 0x1403D735C (sub_1403D735C.c)
 * Callees:
 *     sub_140262F20 @ 0x140262F20 (sub_140262F20.c)
 *     sub_140262FAC @ 0x140262FAC (sub_140262FAC.c)
 */

__int64 __fastcall sub_140262ED4(unsigned __int64 a1, char a2, int a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r9d

  v3 = a1 >> 12;
  v4 = 1;
  v5 = a2 & 1 | 2;
  if ( (a2 & 2) == 0 )
    v5 = a2 & 1;
  if ( a3 )
    sub_140262FAC(v3, v5, 0LL);
  else
    return (unsigned int)sub_140262F20(v3, v5);
  return v4;
}
