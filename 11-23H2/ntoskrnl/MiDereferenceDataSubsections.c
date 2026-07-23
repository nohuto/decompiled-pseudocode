/*
 * XREFs of MiDereferenceDataSubsections @ 0x14066B658
 * Callers:
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiOffsetToProtos @ 0x1402887D0 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x140289550 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14029CD14 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementLargeSubsections @ 0x14063CC44 (MiDecrementLargeSubsections.c)
 */

__int64 __fastcall MiDereferenceDataSubsections(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4, int a5)
{
  __int64 *v9; // rbp
  __int64 *SubsectionNode; // rax
  unsigned __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v9 = (__int64 *)MiOffsetToProtos(a1, *a2, &v12);
  a5 = -a5;
  if ( a4 )
  {
    SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0);
    MiDecrementLargeSubsections(v9, SubsectionNode);
  }
  return MiRemoveViewsFromSectionWithPfn(v9);
}
