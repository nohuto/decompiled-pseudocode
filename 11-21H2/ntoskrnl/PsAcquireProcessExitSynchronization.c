/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x140711F20
 * Callers:
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 * Callees:
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return sub_140347810(a1 + 139) == 0 ? 0xC000010A : 0;
}
