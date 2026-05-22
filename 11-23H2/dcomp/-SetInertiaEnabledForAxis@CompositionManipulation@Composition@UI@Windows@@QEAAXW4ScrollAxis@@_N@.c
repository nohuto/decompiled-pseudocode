/*
 * XREFs of ?SetInertiaEnabledForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z @ 0x1801615D0
 * Callers:
 *     ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual@345@_N@Z @ 0x18011DB7C (-RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVi.c)
 *     ?SetInertiaEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z @ 0x18011DFBC (-SetInertiaEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4Sc.c)
 *     ?AddManipulationWithChaining@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionManipulationPartner@456@PEAUICompositionInteractionPartner@456@_N@Z @ 0x180136CC0 (-AddManipulationWithChaining@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJP.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionManipulation::SetInertiaEnabledForAxis(
        __int64 a1,
        int a2,
        unsigned __int8 a3)
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
      v5 = 6;
    }
    else
    {
      v4 = a3;
      v5 = 5;
    }
  }
  else
  {
    v4 = a3;
    v5 = 4;
  }
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    v5,
    v4);
}
