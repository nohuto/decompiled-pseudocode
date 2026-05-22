/*
 * XREFs of ?ClearInertiaCenterpoint@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXW4ScrollAxis@@@Z @ 0x1801374E4
 * Callers:
 *     ?ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137548 (-ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AE.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTracker::ClearInertiaCenterpoint(__int64 a1, int a2)
{
  int v4; // r8d

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)(a1 + 384 + 8LL * a2));
  if ( a2 )
  {
    if ( a2 != 1 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    v4 = 68;
  }
  else
  {
    v4 = 67;
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    v4,
    0);
}
