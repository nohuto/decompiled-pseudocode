/*
 * XREFs of ?DecrementObjectCount@ServiceModule@Internal@Windows@@UEAAKXZ @ 0x1800C3500
 * Callers:
 *     ?DecrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ @ 0x18006A740 (-DecrementObjectCount@ServiceModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ServiceModule::DecrementObjectCount(Windows::Internal::ServiceModule *this)
{
  return Microsoft::WRL::Module<2,Windows::Internal::ServiceModule>::DecrementObjectCount((__int64)this + 40);
}
