/*
 * XREFs of ??4?$ComPtr@UIWeakReference@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x14001F524
 * Callers:
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBV?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@Z @ 0x14001F4C0 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@UIWeak.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1400251BC (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IWeakReference>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v5);
  }
  return a1;
}
