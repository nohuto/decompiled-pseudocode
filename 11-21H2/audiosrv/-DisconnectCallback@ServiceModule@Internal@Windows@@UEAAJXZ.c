/*
 * XREFs of ?DisconnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ @ 0x1800C3670
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z @ 0x1800C592C (-UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z.c)
 */

HRESULT __fastcall Windows::Internal::ServiceModule::DisconnectCallback(
        struct Microsoft::WRL::Details::ModuleBase **this,
        __int64 a2,
        const unsigned __int16 *a3)
{
  Microsoft::WRL::Details::UnregisterObjects((Microsoft::WRL::Details *)(this + 5), this[4], a3);
  return CoDisconnectContext(0xFFFFFFFF);
}
