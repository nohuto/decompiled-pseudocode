/*
 * XREFs of ??1VisualTreeIsland@Composition@UI@Windows@@UEAA@XZ @ 0x18000C6B4
 * Callers:
 *     ??_EVisualTreeIsland@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000C670 (--_EVisualTreeIsland@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::VisualTreeIsland::~VisualTreeIsland(
        Windows::UI::Composition::VisualTreeIsland *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 69);
  if ( v2 )
  {
    *((_QWORD *)this + 69) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 68);
  if ( v3 )
  {
    *((_QWORD *)this + 68) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  Windows::UI::Composition::CompositionIsland::~CompositionIsland(this);
}
