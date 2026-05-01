/*
 * XREFs of ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x1805F30A8
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800495FC (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall ExperienceManagerUtils::ScaleByDPI(ExperienceManagerUtils *this, int a2)
{
  return MulDiv((int)this, a2, 96);
}
