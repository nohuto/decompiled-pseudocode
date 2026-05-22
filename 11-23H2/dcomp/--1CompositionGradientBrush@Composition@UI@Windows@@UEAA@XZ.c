/*
 * XREFs of ??1CompositionGradientBrush@Composition@UI@Windows@@UEAA@XZ @ 0x180012034
 * Callers:
 *     ??_GCompositionLinearGradientBrush@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180011FF0 (--_GCompositionLinearGradientBrush@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GCompositionRadialGradientBrush@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123C10 (--_GCompositionRadialGradientBrush@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionGradientBrush::~CompositionGradientBrush(
        Microsoft::WRL2::NestableRuntimeClass **this)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 29);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 28);
  this[22] = (Microsoft::WRL2::NestableRuntimeClass *)&DirectComposition::CRebuildableObject::`vftable';
  *this = (Microsoft::WRL2::NestableRuntimeClass *)&Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((CSparseStorage *)(this + 14));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass((Microsoft::WRL2::ContextRuntimeClass *)this);
}
