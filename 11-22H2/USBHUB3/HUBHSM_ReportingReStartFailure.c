/*
 * XREFs of HUBHSM_ReportingReStartFailure @ 0x1C0008EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_ReportingReStartFailure(__int64 a1)
{
  struct _KEVENT *v1; // rcx

  v1 = *(struct _KEVENT **)(a1 + 960);
  v1[49].Header.LockNV = -1073741823;
  KeSetEvent(v1 + 48, 0, 0);
  return 2053LL;
}
