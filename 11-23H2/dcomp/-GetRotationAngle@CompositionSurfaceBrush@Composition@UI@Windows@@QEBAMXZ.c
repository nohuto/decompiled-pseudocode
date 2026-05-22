/*
 * XREFs of ?GetRotationAngle@CompositionSurfaceBrush@Composition@UI@Windows@@QEBAMXZ @ 0x1801596CC
 * Callers:
 *     ?get_RotationAngle@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18012B500 (-get_RotationAngle@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Window.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::CompositionSurfaceBrush::GetRotationAngle(
        Windows::UI::Composition::CompositionSurfaceBrush *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 36);
  if ( v1 )
    return *(float *)(v1 + 192);
  else
    return 0.0;
}
