/*
 * XREFs of MiDereferenceDataSubsections @ 0x14066B108
 * Callers:
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiOffsetToProtos @ 0x140288540 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x1402892C0 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14029CA84 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementLargeSubsections @ 0x14063C6F4 (MiDecrementLargeSubsections.c)
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
