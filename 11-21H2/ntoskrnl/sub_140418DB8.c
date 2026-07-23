/*
 * XREFs of sub_140418DB8 @ 0x140418DB8
 * Callers:
 *     sub_14038D164 @ 0x14038D164 (sub_14038D164.c)
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140418DB8(__int64 a1)
{
  _BOOL8 v1; // r8
  unsigned __int64 result; // rax

  v1 = 0LL;
  if ( (qword_140D06958 & 0x20000000) != 0 )
  {
    result = __readmsr(0x50000001u);
    if ( (result & 1) != 0 )
    {
      if ( (xmmword_140D06920 & 0x80000000000000LL) != 0 )
        v1 = (*(_BYTE *)(a1 + 1762) & 0x30) == 16;
      result = v1 | __readmsr(0x50000002u) & 0xFFFFFFFFFFFFFFFEuLL;
      __writemsr(0x50000002u, result);
    }
  }
  return result;
}
