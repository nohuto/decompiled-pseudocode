/*
 * XREFs of ?GetRotationAngleInDegrees@CompositionShape@Composition@UI@Windows@@QEBAMXZ @ 0x180189940
 * Callers:
 *     ?get_RotationAngleInDegrees@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x180189CF0 (-get_RotationAngleInDegrees@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::CompositionShape::GetRotationAngleInDegrees(
        Windows::UI::Composition::CompositionShape *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 19);
  if ( v1 )
    return *(float *)(v1 + 192) * 57.295776;
  else
    return 0.0;
}
