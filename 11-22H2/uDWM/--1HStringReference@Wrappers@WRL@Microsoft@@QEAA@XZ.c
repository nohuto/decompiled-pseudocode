/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800585DC
 * Callers:
 *     _CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent_::_1_::dtor$6 @ 0x18009F5AC (_CAccentAcrylicBlurBehind--EnsureAcrylicBrushForAccent_--_1_--dtor$6.c)
 *     _CAccentAcrylicBlurBehind::ValidateGraphicsDevice_::_1_::dtor$1 @ 0x1800A182A (_CAccentAcrylicBlurBehind--ValidateGraphicsDevice_--_1_--dtor$1.c)
 *     _CGlobalLightSet::StopExpressionAnimationHelper_::_1_::dtor$1 @ 0x1800C1A94 (_CGlobalLightSet--StopExpressionAnimationHelper_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
