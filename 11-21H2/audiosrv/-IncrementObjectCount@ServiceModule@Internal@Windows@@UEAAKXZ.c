/*
 * XREFs of ?IncrementObjectCount@ServiceModule@Internal@Windows@@UEAAKXZ @ 0x1800C3E10
 * Callers:
 *     ?IncrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ @ 0x18006A780 (-IncrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall Windows::Internal::ServiceModule::IncrementObjectCount()
{
  return CoAddRefServerProcess();
}
