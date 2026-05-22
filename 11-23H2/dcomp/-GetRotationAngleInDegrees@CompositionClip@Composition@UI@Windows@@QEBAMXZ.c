/*
 * XREFs of ?GetRotationAngleInDegrees@CompositionClip@Composition@UI@Windows@@QEBAMXZ @ 0x1801556DC
 * Callers:
 *     ?SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180155890 (-SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVComposi.c)
 *     ?get_RotationAngleInDegrees@Api@CompositionClip@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x180155F00 (-get_RotationAngleInDegrees@Api@CompositionClip@Composition@UI@Windows@@UEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::CompositionClip::GetRotationAngleInDegrees(
        Windows::UI::Composition::CompositionClip *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 20);
  if ( v1 )
    return *(float *)(v1 + 192) * 57.295776;
  else
    return 0.0;
}
