/*
 * XREFs of ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015402C
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800F0510 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x18015410C (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<AtmosCheck>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = CSpatialAudioTech::s_spAtmosCheck;
  if ( *a1 != CSpatialAudioTech::s_spAtmosCheck )
  {
    v5 = CSpatialAudioTech::s_spAtmosCheck;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v5);
  }
  return a1;
}
