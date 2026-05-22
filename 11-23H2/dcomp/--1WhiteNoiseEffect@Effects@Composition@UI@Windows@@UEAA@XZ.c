/*
 * XREFs of ??1WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAA@XZ @ 0x180146168
 * Callers:
 *     ??_EWhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801461A0 (--_EWhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::Effects::WhiteNoiseEffect::~WhiteNoiseEffect(HSTRING *this)
{
  WindowsDeleteString(this[10]);
  this[10] = 0LL;
  Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass((Microsoft::WRL2::NestableRuntimeClass *)this);
}
