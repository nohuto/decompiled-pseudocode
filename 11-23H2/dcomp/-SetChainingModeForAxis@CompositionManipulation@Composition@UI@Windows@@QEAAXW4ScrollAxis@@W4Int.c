/*
 * XREFs of ?SetChainingModeForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@Interactions@234@@Z @ 0x1800B7E42
 * Callers:
 *     ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual@345@_N@Z @ 0x18011DB7C (-RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVi.c)
 *     ?SetChainingModeForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@2345@@Z @ 0x18011DE74 (-SetChainingModeForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4Scro.c)
 *     ?AddManipulationWithChaining@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionManipulationPartner@456@PEAUICompositionInteractionPartner@456@_N@Z @ 0x180136CC0 (-AddManipulationWithChaining@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJP.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionManipulation::SetChainingModeForAxis(__int64 a1, int a2, int a3)
{
  int v3; // edx
  __int64 v4; // r9
  int v5; // r8d

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      v4 = a3;
      v5 = 3;
    }
    else
    {
      v4 = a3;
      v5 = 2;
    }
  }
  else
  {
    v4 = a3;
    v5 = 1;
  }
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    v5,
    v4);
}
