/*
 * XREFs of ?GetRotationAngleInDegrees@CompositionSurfaceBrush@Composition@UI@Windows@@QEBAMXZ @ 0x1801596F0
 * Callers:
 *     ?get_RotationAngleInDegrees@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18012B660 (-get_RotationAngleInDegrees@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::CompositionSurfaceBrush::GetRotationAngleInDegrees(
        Windows::UI::Composition::CompositionSurfaceBrush *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 36);
  if ( v1 )
    return *(float *)(v1 + 192) * 57.295776;
  else
    return 0.0;
}
