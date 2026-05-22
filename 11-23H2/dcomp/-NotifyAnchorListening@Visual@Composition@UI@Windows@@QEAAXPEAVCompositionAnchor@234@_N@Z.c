/*
 * XREFs of ?NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z @ 0x18006D31C
 * Callers:
 *     ?Destroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ @ 0x18000C0B0 (-Destroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RemoveListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@@Z @ 0x18000C138 (-RemoveListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPri.c)
 *     ?AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@_N@Z @ 0x18006BE40 (-AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivat.c)
 *     ?RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C848 (-RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::Visual::NotifyAnchorListening(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::CompositionAnchor *a2,
        unsigned __int8 a3)
{
  struct Windows::UI::Composition::CompositionAnchor *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // edx

  v4 = (struct Windows::UI::Composition::CompositionAnchor *)*((_QWORD *)this + 35);
  if ( v4 != a2 || !v4 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  if ( *((_BYTE *)this + 276) != a3 )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = *((_DWORD *)this + 32);
    *((_BYTE *)this + 276) = a3;
    DirectComposition::CDevice::ResourceSetIntegerProperty(*(DirectComposition::CDevice **)(v5 + 456), v6, 0x2Bu, a3);
  }
}
