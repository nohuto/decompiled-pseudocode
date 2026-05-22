/*
 * XREFs of ?GetOffset@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ @ 0x180155694
 * Callers:
 *     ?SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180155890 (-SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVComposi.c)
 *     ?get_Offset@Api@CompositionClip@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x180155DE0 (-get_Offset@Api@CompositionClip@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@.c)
 * Callees:
 *     <none>
 */

const struct Windows::Foundation::Numerics::Vector2 *__fastcall Windows::UI::Composition::CompositionClip::GetOffset(
        Windows::UI::Composition::CompositionClip *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 20);
  if ( v1 )
    return (const struct Windows::Foundation::Numerics::Vector2 *)(v1 + 176);
  else
    return (const struct Windows::Foundation::Numerics::Vector2 *)&Windows::UI::Composition::ComponentTransform2D::sc_defaultOffset;
}
