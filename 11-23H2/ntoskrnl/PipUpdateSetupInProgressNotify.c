/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x1409522C8
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x1409522B0 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14041D510 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x140862928 (PipUpdateSetupInProgress.c)
 */

void __fastcall PipUpdateSetupInProgressNotify(HANDLE KeyHandle, char a2)
{
  HANDLE v4; // rbx

  if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
  {
    v4 = 0LL;
    if ( ZwNotifyChangeKey(KeyHandle, 0LL, PnpSetupWorkItem, (PVOID)1, &PnpSetupIoStatusBlock, 4u, 0, 0LL, 0, 1u) < 0 )
      v4 = KeyHandle;
    if ( a2 )
      PipUpdateSetupInProgress(KeyHandle);
    if ( v4 )
      ZwClose(v4);
  }
}
