/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180048DFC
 * Callers:
 *     _CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent_::_1_::dtor$6 @ 0x180066028 (_CAccentAcrylicBlurBehind--EnsureAcrylicBrushForAccent_--_1_--dtor$6.c)
 *     _CAccentAcrylicBlurBehind::ValidateGraphicsDevice_::_1_::dtor$1 @ 0x18006603A (_CAccentAcrylicBlurBehind--ValidateGraphicsDevice_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
