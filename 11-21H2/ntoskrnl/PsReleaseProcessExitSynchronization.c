/*
 * XREFs of PsReleaseProcessExitSynchronization @ 0x1406BBE50
 * Callers:
 *     sub_140558960 @ 0x140558960 (sub_140558960.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 */

void __fastcall PsReleaseProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  sub_1402AD030(a1 + 139);
}
