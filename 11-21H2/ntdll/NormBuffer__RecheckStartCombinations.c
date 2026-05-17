/*
 * XREFs of NormBuffer__RecheckStartCombinations @ 0x18010C58C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180090608 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x18010C2AC (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x18010CA6C (Normalization__CanCombinableCharactersCombine.c)
 */

unsigned __int64 __fastcall NormBuffer__RecheckStartCombinations(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned __int16 *v4; // rdi
  char v5; // bp
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // r15
  char v10; // si
  unsigned __int16 *v11; // rdx
  char v12; // r9
  unsigned __int16 *v13; // r8
  char v14; // al
  char v15; // r9
  __int64 v16; // rax
  unsigned __int16 *v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 93) == 64;
  v2 = a1;
  result = *(_QWORD *)(a1 + 80);
  v17 = (unsigned __int16 *)result;
  if ( v1 )
  {
    v4 = *(unsigned __int16 **)(a1 + 40);
    v5 = 0;
    if ( (unsigned __int16 *)result != v4 )
    {
      while ( 1 )
      {
        result = NormBuffer__GetCurrentOutputChar(a1, &v17);
        v6 = *(_QWORD *)(v2 + 112);
        v7 = result & 0x7F;
        v8 = *(_QWORD *)(v6 + 32);
        v9 = *(_QWORD *)(v6 + 40);
        a1 = v9 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + v8) << 7);
        v10 = *(_BYTE *)(v7 + a1 - 128) & 0x3F;
        if ( v10 == v5 )
          goto LABEL_17;
        if ( (*(_BYTE *)(v7 + a1 - 128) & 0xC0) != 0xC0 )
          break;
        result = Normalization__CanCombinableCharactersCombine(
                   *(_QWORD *)(v2 + 112),
                   *(unsigned int *)(v2 + 88),
                   (unsigned int)result);
        if ( !(_DWORD)result )
          break;
        v11 = v17;
        v12 = *(_BYTE *)((result & 0x7F)
                       + v9
                       + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + v8) << 7)
                       - 128);
        v13 = v17;
        a1 = *(_QWORD *)(v2 + 80);
        *(_WORD *)(a1 - 2) = result;
        *(_QWORD *)(v2 + 40) -= 2LL;
        v4 = *(unsigned __int16 **)(v2 + 40);
        *(_DWORD *)(v2 + 88) = result;
        v14 = v12 & 0x3F;
        v15 = v12 & 0xC0;
        *(_BYTE *)(v2 + 92) = v14;
        result = *(_QWORD *)(v2 + 64);
        *(_BYTE *)(v2 + 93) = v15;
        if ( (unsigned __int16 *)result == v4 )
        {
          if ( (unsigned __int64)v11 >= result )
          {
            v16 = *(_QWORD *)(v2 + 24);
            *(_DWORD *)(v2 + 56) = 0;
            result = v16 - 2;
            *(_WORD *)(v2 + 72) = 0;
          }
          else
          {
            result -= 2LL;
          }
          *(_QWORD *)(v2 + 64) = result;
        }
        if ( v11 != v4 )
        {
          do
          {
            a1 = (__int64)(v13 + 1);
            result = v13[1];
            *v13 = result;
            v13 = (unsigned __int16 *)a1;
            v4 = *(unsigned __int16 **)(v2 + 40);
          }
          while ( (unsigned __int16 *)a1 != v4 );
          v15 = *(_BYTE *)(v2 + 93);
        }
        if ( v15 != 64 )
          return result;
LABEL_18:
        if ( v11 == v4 )
          return result;
      }
      v5 = v10;
LABEL_17:
      v11 = ++v17;
      goto LABEL_18;
    }
  }
  return result;
}
