/*
 * XREFs of ?GetRotationAngle@CompositionGradientBrush@Composition@UI@Windows@@QEBAMXZ @ 0x1801739A8
 * Callers:
 *     ?get_RotationAngle@Api@?$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18012B450 (-get_RotationAngle@Api@-$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Wind.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::CompositionGradientBrush::GetRotationAngle(
        Windows::UI::Composition::CompositionGradientBrush *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 29);
  if ( v1 )
    return *(float *)(v1 + 192);
  else
    return 0.0;
}
