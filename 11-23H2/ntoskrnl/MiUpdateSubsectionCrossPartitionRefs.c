/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x14066B494
 * Callers:
 *     MiDeleteControlArea @ 0x1402199D0 (MiDeleteControlArea.c)
 *     MiIncrementSubsectionViewCount @ 0x1402891F0 (MiIncrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14028BD00 (MiInsertUnusedSubsection.c)
 *     MiAppendSubsectionChain @ 0x1402932D8 (MiAppendSubsectionChain.c)
 *     MiDecrementSubsectionViewCount @ 0x14029FAD0 (MiDecrementSubsectionViewCount.c)
 *     MiConvertStaticSubsections @ 0x1402A0F18 (MiConvertStaticSubsections.c)
 *     MiExtendSection @ 0x1407067D4 (MiExtendSection.c)
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
