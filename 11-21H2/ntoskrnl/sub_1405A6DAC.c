/*
 * XREFs of sub_1405A6DAC @ 0x1405A6DAC
 * Callers:
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_1405A7708 @ 0x1405A7708 (sub_1405A7708.c)
 * Callees:
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 */

_BOOL8 __fastcall sub_1405A6DAC(__int64 a1, unsigned __int64 a2)
{
  char v3; // dl
  __int64 **v4; // rbx
  int v5; // ecx
  _BOOL8 result; // rax

  result = 0;
  if ( *(_QWORD *)(a1 + 1408) )
  {
    if ( *(_WORD *)(a1 + 2412) == 332 )
    {
      if ( (qword_140D068D8 & 0x40000000) != 0
        || (v3 = *(_BYTE *)(a1 + 643), (v3 & 2) != 0)
        || (qword_140D068D8 & 0x80000000) == 0 && (v3 & 1) == 0 )
      {
        if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 2172) & 1) == 0 )
          return 1;
        sub_1402ED128(1);
        v4 = sub_1403126F0(a2);
        sub_1402806E0(1, 0x11u);
        if ( v4 )
        {
          v5 = *((_DWORD *)v4 + 12);
          if ( (v5 & 0x70) != 0x30 && ((v5 & 0x70) != 0x20 || (v5 & 0xF80) != 0x80) )
            return 1;
        }
      }
    }
  }
  return result;
}
