/*
 * XREFs of ?Attach@?$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z @ 0x18053AF28
 * Callers:
 *     ??$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaceModeButtonAcc@@@12@$$QEAPEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUtagRECT@@@Z @ 0x18053A7FC (--$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV-$NativeString@V-$CoTaskMemPolicy@G@In.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18053BAF0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIInvokeProvider@@UIPlaceModeButtonAcc@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804E33B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_1804E33B0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPlaceModeButtonAcc>::Attach(__int64 *a1, volatile int *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(
               v4,
               a2);
  *a1 = (__int64)a2;
  return result;
}
