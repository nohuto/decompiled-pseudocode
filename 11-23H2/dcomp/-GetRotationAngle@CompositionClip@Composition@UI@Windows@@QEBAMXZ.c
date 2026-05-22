/*
 * XREFs of ?GetRotationAngle@CompositionClip@Composition@UI@Windows@@QEBAMXZ @ 0x1801556B8
 * Callers:
 *     ?SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180155890 (-SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVComposi.c)
 *     ?get_RotationAngle@Api@CompositionClip@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x180155E70 (-get_RotationAngle@Api@CompositionClip@Composition@UI@Windows@@UEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::CompositionClip::GetRotationAngle(
        Windows::UI::Composition::CompositionClip *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 20);
  if ( v1 )
    return *(float *)(v1 + 192);
  else
    return 0.0;
}
