/*
 * XREFs of ??1NestableRuntimeClass@WRL2@Microsoft@@UEAA@XZ @ 0x180055764
 * Callers:
 *     ??1SceneLightingEffect@Effects@Composition@UI@Windows@@UEAA@XZ @ 0x1800118F4 (--1SceneLightingEffect@Effects@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??_GCompositionIslandEnvironment@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800122B0 (--_GCompositionIslandEnvironment@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1CompositionPath@Composition@UI@Windows@@MEAA@XZ @ 0x180012994 (--1CompositionPath@Composition@UI@Windows@@MEAA@XZ.c)
 *     ??1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ @ 0x18003C660 (--1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??_GCompositionPropertySet@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800587A0 (--_GCompositionPropertySet@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_ECompositionSurfaceWrapper@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800611B0 (--_ECompositionSurfaceWrapper@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GCompositionEffectSourceParameter@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800830A0 (--_GCompositionEffectSourceParameter@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GNestableRuntimeClass@WRL2@Microsoft@@UEAAPEAXI@Z @ 0x1801089F0 (--_GNestableRuntimeClass@WRL2@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801117F0 (--_GCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAA@XZ @ 0x180146168 (--1WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass(
        Microsoft::WRL2::NestableRuntimeClass *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  *(_QWORD *)this = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
  if ( *((_DWORD *)this + 4) )
    RaiseFailFastException(0LL, 0LL, 0);
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)this + 4) = -1073741823;
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 16LL))(v2);
}
