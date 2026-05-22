/*
 * XREFs of ?GetRotationAngleInDegrees@CompositionGradientBrush@Composition@UI@Windows@@QEBAMXZ @ 0x1801739CC
 * Callers:
 *     ?get_RotationAngleInDegrees@Api@?$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18012B5B0 (-get_RotationAngleInDegrees@Api@-$CompositionGradientBrushT@VCompositionGradientBrush@Compositio.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::CompositionGradientBrush::GetRotationAngleInDegrees(
        Windows::UI::Composition::CompositionGradientBrush *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 29);
  if ( v1 )
    return *(float *)(v1 + 192) * 57.295776;
  else
    return 0.0;
}
