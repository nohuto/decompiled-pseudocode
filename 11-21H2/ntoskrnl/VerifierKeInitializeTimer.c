/*
 * XREFs of VerifierKeInitializeTimer @ 0x140A95EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierKeInitializeTimer(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))pXdvKeInitializeTimerEx)(a1, 0LL);
}
