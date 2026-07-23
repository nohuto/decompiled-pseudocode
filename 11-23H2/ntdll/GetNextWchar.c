/*
 * XREFs of GetNextWchar @ 0x18010A194
 * Callers:
 *     RtlGenerate8dot3Name @ 0x18010A2F0 (RtlGenerate8dot3Name.c)
 * Callees:
 *     RtlIsValidOemCharacter @ 0x18010A954 (RtlIsValidOemCharacter.c)
 */

__int64 __fastcall GetNextWchar(unsigned __int16 *a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // eax
  unsigned __int16 v6; // r10
  int v11; // eax
  unsigned __int16 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a2;
  v5 = *a1;
  v6 = 0;
  while ( v4 < v5 >> 1 )
  {
    v6 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v4);
    *a2 = v4 + 1;
    v13 = v6;
    if ( v6 <= 0x20u )
      goto LABEL_9;
    if ( v6 >= 0x7Fu )
    {
      if ( !a4 || !(unsigned __int8)RtlIsValidOemCharacter(&v13) )
        goto LABEL_9;
      v6 = v13;
    }
    if ( v6 != 46 )
    {
      if ( v6 < 0x80u )
      {
LABEL_13:
        v11 = RtlFatIllegalTable[(unsigned __int64)v6 >> 5];
        if ( _bittest(&v11, v6 & 0x1F) )
          v6 = 95;
      }
      if ( (unsigned __int16)(v6 - 97) <= 0x19u )
        v6 -= 32;
      return v6;
    }
    if ( !a3 )
      goto LABEL_13;
LABEL_9:
    v5 = *a1;
    v6 = 0;
    v4 = *a2;
  }
  return v6;
}
