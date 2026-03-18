/*
 * XREFs of TtmpOpenQueueHandle @ 0x1409AB660
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     TtmiLogQueueHandleOpened @ 0x1409A9398 (TtmiLogQueueHandleOpened.c)
 */

__int64 __fastcall TtmpOpenQueueHandle(__int64 a1, char a2, struct _KPROCESS *a3)
{
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    PsGetProcessId(a3);
  TtmiLogQueueHandleOpened();
  return 0LL;
}
