/*
 * XREFs of WdtpBarkWorkerThread @ 0x140A6F0D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

LONG __fastcall WdtpBarkWorkerThread(__int64 a1)
{
  (*(void (__fastcall **)(__int64))(a1 + 24))(a1 + 141);
  return KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
}
