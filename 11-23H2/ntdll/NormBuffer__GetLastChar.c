/*
 * XREFs of NormBuffer__GetLastChar @ 0x18010D8F4
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008A014 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NormBuffer__GetLastChar(__int64 a1)
{
  unsigned __int16 *v2; // rcx
  unsigned int v4; // r8d
  __int64 v5; // r10
  char v6; // cl
  char v7; // al
  char v8; // cl

  v2 = (unsigned __int16 *)(*(_QWORD *)(a1 + 40) - 2LL);
  if ( *(unsigned __int16 **)(a1 + 64) == v2 )
    return *(unsigned int *)(a1 + 56);
  v4 = *v2;
  *(_QWORD *)(a1 + 64) = v2;
  *(_DWORD *)(a1 + 56) = v4;
  if ( v4 - 56321 <= 0x3FE )
  {
    v4 += (*(v2 - 1) - 55287) << 10;
    *(_DWORD *)(a1 + 56) = v4;
  }
  v5 = *(_QWORD *)(a1 + 112);
  if ( (unsigned __int8)(*(_BYTE *)(((__int64)(int)v4 >> 7) + *(_QWORD *)(v5 + 32)) - 1) > 0xF9u )
  {
    v7 = 0;
    v8 = 0;
  }
  else
  {
    v6 = *(_BYTE *)(*(_QWORD *)(v5 + 40)
                  + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v4 >> 7) + *(_QWORD *)(v5 + 32)) << 7)
                  + (v4 & 0x7F)
                  - 128);
    v7 = v6 & 0xC0;
    v8 = v6 & 0x3F;
  }
  *(_BYTE *)(a1 + 72) = v8;
  *(_BYTE *)(a1 + 73) = v7;
  return v4;
}
