/*
 * XREFs of ?IncrementObjectCount@ServiceModule@Internal@Windows@@UEAAKXZ @ 0x1800EFD80
 * Callers:
 *     ?IncrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ @ 0x180076700 (-IncrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall Windows::Internal::ServiceModule::IncrementObjectCount()
{
  return CoAddRefServerProcess();
}
