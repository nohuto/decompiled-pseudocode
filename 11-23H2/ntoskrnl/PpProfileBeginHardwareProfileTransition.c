/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x140963A60
 * Callers:
 *     PipProcessStartPhase1 @ 0x140790D68 (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867478 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
