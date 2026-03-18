/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x1405C4C6C
 * Callers:
 *     MiInsertUnusedSubsection @ 0x140220AAC (MiInsertUnusedSubsection.c)
 *     MiAppendSubsectionChain @ 0x14022CBE0 (MiAppendSubsectionChain.c)
 *     MiDeleteControlArea @ 0x1402700FC (MiDeleteControlArea.c)
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140286EC0 (MiIncrementSubsectionViewCount.c)
 *     MiConvertStaticSubsections @ 0x14028AED4 (MiConvertStaticSubsections.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateSubsectionCrossPartitionRefs(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = a1[12] ^ (a1[12] ^ a2) & 0x3FFFFFFFu;
  a1[12] = result;
  if ( a2 == 0x3FFFFFFF )
  {
    result = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 62LL) |= 2u;
  }
  return result;
}
