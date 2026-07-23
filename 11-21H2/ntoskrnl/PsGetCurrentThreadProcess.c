/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14023A1C0
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1406785F0 (SeCheckForCriticalAceRemoval.c)
 *     sub_1406B4F98 @ 0x1406B4F98 (sub_1406B4F98.c)
 *     sub_1406B5158 @ 0x1406B5158 (sub_1406B5158.c)
 *     sub_1406B67A0 @ 0x1406B67A0 (sub_1406B67A0.c)
 *     sub_1407240A0 @ 0x1407240A0 (sub_1407240A0.c)
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_14079D470 @ 0x14079D470 (sub_14079D470.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407F77B8 @ 0x1407F77B8 (sub_1407F77B8.c)
 *     sub_1407FE9A0 @ 0x1407FE9A0 (sub_1407FE9A0.c)
 *     sub_140847400 @ 0x140847400 (sub_140847400.c)
 *     sub_140910BCC @ 0x140910BCC (sub_140910BCC.c)
 *     sub_140916788 @ 0x140916788 (sub_140916788.c)
 *     sub_1409188E8 @ 0x1409188E8 (sub_1409188E8.c)
 *     sub_1409C6D8C @ 0x1409C6D8C (sub_1409C6D8C.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7340 (SeAuditFipsCryptoSelftests.c)
 *     sub_1409C7E08 @ 0x1409C7E08 (sub_1409C7E08.c)
 *     SeAuditTransactionStateChange @ 0x1409C7FD0 (SeAuditTransactionStateChange.c)
 *     sub_1409C820C @ 0x1409C820C (sub_1409C820C.c)
 *     sub_1409C8548 @ 0x1409C8548 (sub_1409C8548.c)
 *     sub_1409C8774 @ 0x1409C8774 (sub_1409C8774.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     sub_1409C99C0 @ 0x1409C99C0 (sub_1409C99C0.c)
 *     sub_1409C9C64 @ 0x1409C9C64 (sub_1409C9C64.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadProcess()
{
  return *((_QWORD *)KeGetCurrentThread() + 68);
}
