/*
 * XREFs of ??1CompositionLight@Composition@UI@Windows@@UEAA@XZ @ 0x18000DE04
 * Callers:
 *     ??_GAmbientLight@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000DD70 (--_GAmbientLight@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_ESharedLight@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000DDC0 (--_ESharedLight@Private@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_ESpotLight@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800B6320 (--_ESpotLight@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_ECompositionLight@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123B80 (--_ECompositionLight@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EDistantLight@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124020 (--_EDistantLight@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GPointLight@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124360 (--_GPointLight@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionLight::~CompositionLight(
        Windows::UI::Composition::CompositionLight *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 216);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 176);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::CompositionLight *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
}
