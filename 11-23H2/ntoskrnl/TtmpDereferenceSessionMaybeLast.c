/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1409A546C
 * Callers:
 *     TtmCleanupCurrentSession @ 0x1409A4090 (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1409A5B30 (TtmpSessionWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x1409AB490 (TtmiSessionTerminalListWorker.c)
 *     TtmpDeleteQueue @ 0x1409AC660 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
