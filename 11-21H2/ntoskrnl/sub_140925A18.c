/*
 * XREFs of sub_140925A18 @ 0x140925A18
 * Callers:
 *     sub_140924D00 @ 0x140924D00 (sub_140924D00.c)
 *     sub_140924E08 @ 0x140924E08 (sub_140924E08.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 */

void __fastcall sub_140925A18(_DWORD *a1, unsigned int a2, _RTL_BITMAP *a3)
{
  unsigned int i; // edi
  unsigned int SizeOfBitMap; // ecx
  ULONG v8; // edx
  ULONG v9; // r8d

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      SizeOfBitMap = a3->SizeOfBitMap;
      v8 = *a1 >> 9;
      if ( v8 >= a3->SizeOfBitMap )
        break;
      v9 = SizeOfBitMap - v8;
      if ( (a1[1] >> 9) + v8 <= SizeOfBitMap )
        v9 = a1[1] >> 9;
      RtlSetBits(a3, v8, v9);
      a1 += 2;
    }
  }
}
