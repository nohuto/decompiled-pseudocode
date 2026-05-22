/*
 * XREFs of ?GetRotationAngle@CompositionShape@Composition@UI@Windows@@QEBAMXZ @ 0x18018991C
 * Callers:
 *     ?get_RotationAngle@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x180189C60 (-get_RotationAngle@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::CompositionShape::GetRotationAngle(
        Windows::UI::Composition::CompositionShape *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 19);
  if ( v1 )
    return *(float *)(v1 + 192);
  else
    return 0.0;
}
