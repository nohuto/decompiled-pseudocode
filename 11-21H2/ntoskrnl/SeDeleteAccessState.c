/*
 * XREFs of SeDeleteAccessState @ 0x14066C150
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     sub_14066CC94 @ 0x14066CC94 (sub_14066CC94.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 * Callees:
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  sub_1403478A0((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
