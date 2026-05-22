/*
 * XREFs of ?WaitCallback@GameInputWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180016AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitCallback@GameInputWatcher@@AEAAXXZ @ 0x180016B00 (-WaitCallback@GameInputWatcher@@AEAAXXZ.c)
 */

void __fastcall GameInputWatcher::WaitCallback(
        PTP_CALLBACK_INSTANCE Instance,
        GameInputWatcher *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  if ( !WaitResult )
    GameInputWatcher::WaitCallback(Context);
}
