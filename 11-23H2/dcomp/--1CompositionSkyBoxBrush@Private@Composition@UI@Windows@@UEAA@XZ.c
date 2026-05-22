/*
 * XREFs of ??1CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAA@XZ @ 0x180123048
 * Callers:
 *     ??_ECompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123CD0 (--_ECompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::~CompositionSkyBoxBrush(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush *this,
        __int64 a2)
{
  __int64 v3; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(
    (volatile signed __int32 **)this + 25,
    a2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 21);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v3);
}
