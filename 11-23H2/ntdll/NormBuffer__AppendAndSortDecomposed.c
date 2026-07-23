/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x18010D804
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x18010DD00 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x18010DD78 (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x18008A0FC (NormBuffer__AppendEx.c)
 *     NormBuffer__Insert @ 0x18010D98C (NormBuffer__Insert.c)
 *     NormBuffer__SortBeforeSameClass @ 0x18010DE80 (NormBuffer__SortBeforeSameClass.c)
 */

char __fastcall NormBuffer__AppendAndSortDecomposed(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // esi
  char v4; // di

  v3 = a2;
  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1[14] + 32LL)) << 7)
                + *(_QWORD *)(a1[14] + 40LL)
                - 128);
  LOBYTE(a2) = v4 & 0x3F;
  NormBuffer__SortBeforeSameClass(a1, a2);
  if ( a1[13] == a1[5] )
    return NormBuffer__AppendEx((__int64)a1, v3, v4 & 0x3F, v4 & 0xC0);
  else
    return NormBuffer__Insert(a1, v3);
}
