/*
 * XREFs of ?GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z @ 0x180055824
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z @ 0x1800552C8 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall TaskbarAcrylic::GetLuminosityOpacity(TaskbarAcrylic *this)
{
  unsigned int v1; // eax

  v1 = BYTE2(this) + 5 * BYTE1(this) + 2 * (unsigned __int8)this;
  if ( (_BYTE)this == BYTE1(this) && BYTE1(this) == BYTE2(this) )
  {
    if ( v1 <= 0x400 )
    {
      return DOUBLE_0_96;
    }
    else
    {
      if ( ((unsigned int)this & 0xFFFFFF) != 0xFCFCFC )
        return DOUBLE_0_9;
      return DOUBLE_0_85;
    }
  }
  else
  {
    if ( v1 > 0x400 )
      return DOUBLE_0_9;
    return DOUBLE_0_8;
  }
}
