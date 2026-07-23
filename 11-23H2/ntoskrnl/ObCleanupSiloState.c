/*
 * XREFs of ObCleanupSiloState @ 0x14097AFD0
 * Callers:
 *     ObShutdownSystem @ 0x14097B000 (ObShutdownSystem.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACFB8 (PspDeleteExternalServerSiloState.c)
 *     PspDeleteServerSiloGlobals @ 0x1409AD090 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x1407B004C (ObDereferenceDeviceMap.c)
 */

char __fastcall ObCleanupSiloState(volatile __int64 *a1)
{
  char result; // al
  __int64 v2; // rcx

  result = (char)a1;
  v2 = _InterlockedExchange64(a1, 0LL);
  if ( v2 )
    return ObDereferenceDeviceMap((volatile signed __int64 *)(v2 & 0xFFFFFFFFFFFFFFF0uLL), (v2 & 0xF) + 1);
  return result;
}
