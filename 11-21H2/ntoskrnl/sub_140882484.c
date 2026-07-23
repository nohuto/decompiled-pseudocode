/*
 * XREFs of sub_140882484 @ 0x140882484
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 * Callees:
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

void __fastcall sub_140882484(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  sub_1403478A0((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
