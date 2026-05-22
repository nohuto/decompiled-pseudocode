/*
 * XREFs of ??1SceneLightingEffect@Effects@Composition@UI@Windows@@UEAA@XZ @ 0x1800118F4
 * Callers:
 *     ??_GSceneLightingEffect@Effects@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800118B0 (--_GSceneLightingEffect@Effects@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::~SceneLightingEffect(HSTRING *this)
{
  HSTRING v2; // rcx

  WindowsDeleteString(this[13]);
  this[13] = 0LL;
  v2 = this[12];
  if ( v2 )
  {
    this[12] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass((Microsoft::WRL2::NestableRuntimeClass *)this);
}
