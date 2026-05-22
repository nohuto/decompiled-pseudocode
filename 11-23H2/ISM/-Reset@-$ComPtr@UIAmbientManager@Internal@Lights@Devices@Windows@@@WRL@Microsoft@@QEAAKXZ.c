/*
 * XREFs of ?Reset@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@QEAAKXZ @ 0x18005A4EC
 * Callers:
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E9838 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::Reset(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(a1);
}
