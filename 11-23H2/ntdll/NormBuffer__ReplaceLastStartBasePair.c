/*
 * XREFs of NormBuffer__ReplaceLastStartBasePair @ 0x18010DD78
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18008A014 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendAndSortDecomposed @ 0x18010D804 (NormBuffer__AppendAndSortDecomposed.c)
 */

char __fastcall NormBuffer__ReplaceLastStartBasePair(__int64 a1, int a2, char a3, char a4)
{
  __int64 v4; // rbx
  __int16 v8; // r9
  __int64 v9; // rdx
  unsigned __int16 i; // r9
  unsigned __int16 v11; // cx
  __int64 v12; // rdx

  v4 = *(_QWORD *)(a1 + 112);
  v8 = *(_WORD *)(*(_QWORD *)(v4 + 64) + 2LL * (*(_DWORD *)(a1 + 88) % *(_DWORD *)(v4 + 56)));
  if ( (v8 & 0xE000) == 0 )
  {
    v9 = *(_QWORD *)(v4 + 72);
    for ( i = 2 * v8; ; i += 2 )
    {
      v11 = *(_WORD *)(v9 + 2LL * i);
      if ( !v11 || v11 == *(_DWORD *)(a1 + 88) )
        break;
    }
    v8 = *(_WORD *)(v9 + 2LL * i + 2);
  }
  v12 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 80) + 2LL * (unsigned __int16)((v8 & 0x1FFF) + 2));
  *(_WORD *)(*(_QWORD *)(a1 + 80) - 2LL) = a2;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  *(_BYTE *)(a1 + 93) = a4;
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( (_DWORD)v12 )
    return NormBuffer__AppendAndSortDecomposed((_QWORD *)a1, v12);
  else
    return 1;
}
