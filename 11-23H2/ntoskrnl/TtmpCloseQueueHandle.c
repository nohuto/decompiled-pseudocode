/*
 * XREFs of TtmpCloseQueueHandle @ 0x1409AC620
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x1402FA720 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x1409A91EC (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
