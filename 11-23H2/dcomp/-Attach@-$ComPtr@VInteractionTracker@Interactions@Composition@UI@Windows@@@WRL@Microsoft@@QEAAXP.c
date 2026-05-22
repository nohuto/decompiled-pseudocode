/*
 * XREFs of ?Attach@?$ComPtr@VInteractionTracker@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteractionTracker@Interactions@Composition@UI@Windows@@@Z @ 0x1801370D4
 * Callers:
 *     ??$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@$$T@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTracker@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEA$$T@Z @ 0x180134AF8 (--$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompos.c)
 *     ??$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAUIInteractionTrackerOwner@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTracker@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAUIInteractionTrackerOwner@4567@@Z @ 0x180134BB8 (--$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V123_ea_180134BB8.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTracker>::Attach(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  *a1 = a2;
  return result;
}
