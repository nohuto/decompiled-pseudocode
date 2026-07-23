/*
 * XREFs of NormBuffer__IsBlocked @ 0x18010DA64
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008A014 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x18010D89C (NormBuffer__GetCurrentOutputChar.c)
 */

bool __fastcall NormBuffer__IsBlocked(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  int CurrentOutputChar; // eax
  __int64 v10; // r10
  unsigned __int16 *v11; // r11
  unsigned __int16 *v12; // rax
  unsigned __int16 *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[5];
  a1[13] = v2;
  v5 = a1[10];
  if ( v2 == v5 )
    return 0;
  v14 = (unsigned __int16 *)(v2 - 2);
  if ( v2 - 2 == v5 - 2 )
    return 0;
  v6 = a1[14];
  v7 = *(_QWORD *)(v6 + 32);
  v8 = *(_QWORD *)(v6 + 40);
  while ( 1 )
  {
    CurrentOutputChar = NormBuffer__GetCurrentOutputChar(v5, &v14);
    LOBYTE(v5) = *(_BYTE *)((CurrentOutputChar & 0x7F)
                          + v8
                          + ((unsigned __int64)*(unsigned __int8 *)(((__int64)CurrentOutputChar >> 7) + v7) << 7)
                          - 128) & 0x3F;
    if ( (unsigned __int8)v5 <= a2 )
      break;
    v12 = v14;
    *(_QWORD *)(v10 + 104) = v14;
    v14 = v12 - 1;
    if ( v12 - 1 == v11 )
      return 0;
  }
  return (_BYTE)v5 == a2;
}
