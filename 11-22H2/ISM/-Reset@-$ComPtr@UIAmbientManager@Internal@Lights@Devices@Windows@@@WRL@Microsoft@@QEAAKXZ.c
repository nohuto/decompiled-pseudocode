/*
 * XREFs of ?Reset@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@QEAAKXZ @ 0x180062ED0
 * Callers:
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800F87B8 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::Reset(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(a1);
}
