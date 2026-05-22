/*
 * XREFs of ?GetScale@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ @ 0x180155708
 * Callers:
 *     ?SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180155890 (-SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVComposi.c)
 *     ?get_Scale@Api@CompositionClip@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x180155F90 (-get_Scale@Api@CompositionClip@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z.c)
 * Callees:
 *     <none>
 */

const struct Windows::Foundation::Numerics::Vector2 *__fastcall Windows::UI::Composition::CompositionClip::GetScale(
        Windows::UI::Composition::CompositionClip *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 20);
  if ( v1 )
    return (const struct Windows::Foundation::Numerics::Vector2 *)(v1 + 184);
  else
    return (const struct Windows::Foundation::Numerics::Vector2 *)&Windows::UI::Composition::ComponentTransform2D::sc_defaultScale;
}
