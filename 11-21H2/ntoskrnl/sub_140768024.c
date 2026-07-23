/*
 * XREFs of sub_140768024 @ 0x140768024
 * Callers:
 *     sub_1406DFC4C @ 0x1406DFC4C (sub_1406DFC4C.c)
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_14076B554 @ 0x14076B554 (sub_14076B554.c)
 */

__int64 __fastcall sub_140768024(__int64 a1)
{
  __int64 v2; // r9
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&stru_140C467E0);
  RtlDeleteElementGenericTableAvl(&stru_140C46820, Buffer);
  KeReleaseGuardedMutex(&stru_140C467E0);
  LOBYTE(v2) = 1;
  return sub_14076B554(a1, 0LL, 0LL, v2);
}
