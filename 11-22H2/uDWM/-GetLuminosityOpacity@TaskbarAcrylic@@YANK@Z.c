/*
 * XREFs of ?GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z @ 0x18006B5BC
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z @ 0x1800A137C (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall TaskbarAcrylic::GetLuminosityOpacity(TaskbarAcrylic *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ecx

  v1 = BYTE2(this) + 5 * BYTE1(this) + 2 * (unsigned __int8)this;
  if ( (_BYTE)this == BYTE1(this) && BYTE1(this) == BYTE2(this) )
  {
    v2 = (unsigned int)this & 0xFFFFFF;
    if ( v1 <= 0x400 )
      return DOUBLE_0_96;
    if ( v2 == 16579836 )
      return DOUBLE_0_85;
    return DOUBLE_0_9;
  }
  if ( v1 > 0x400 )
    return DOUBLE_0_9;
  return DOUBLE_0_8;
}
