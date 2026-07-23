/*
 * XREFs of SeUnlockSubjectContext @ 0x140723F40
 * Callers:
 *     sub_14024B8BC @ 0x14024B8BC (sub_14024B8BC.c)
 *     sub_1402F9614 @ 0x1402F9614 (sub_1402F9614.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140668AEC @ 0x140668AEC (sub_140668AEC.c)
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     sub_1406950FC @ 0x1406950FC (sub_1406950FC.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     sub_1406C0B60 @ 0x1406C0B60 (sub_1406C0B60.c)
 *     sub_1406CDC5C @ 0x1406CDC5C (sub_1406CDC5C.c)
 *     sub_14072266C @ 0x14072266C (sub_14072266C.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_1407F7AD0 @ 0x1407F7AD0 (sub_1407F7AD0.c)
 *     sub_1409E57B8 @ 0x1409E57B8 (sub_1409E57B8.c)
 *     sub_140A03FB4 @ 0x140A03FB4 (sub_140A03FB4.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __stdcall SeUnlockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6));
  KeLeaveCriticalRegion();
  if ( SubjectContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->ClientToken + 6));
    KeLeaveCriticalRegion();
  }
}
