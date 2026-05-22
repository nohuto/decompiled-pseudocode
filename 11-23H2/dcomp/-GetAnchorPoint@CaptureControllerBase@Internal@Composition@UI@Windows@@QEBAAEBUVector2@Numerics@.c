/*
 * XREFs of ?GetAnchorPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@5@XZ @ 0x18018A0EC
 * Callers:
 *     ?get_AnchorPoint@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@6@@Z @ 0x18017F550 (-get_AnchorPoint@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJPEAU.c)
 * Callees:
 *     <none>
 */

const struct Windows::Foundation::Numerics::Vector2 *__fastcall Windows::UI::Composition::Internal::CaptureControllerBase::GetAnchorPoint(
        Windows::UI::Composition::Internal::CaptureControllerBase *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 22);
  if ( v1 )
    return (const struct Windows::Foundation::Numerics::Vector2 *)(v1 + 160);
  else
    return (const struct Windows::Foundation::Numerics::Vector2 *)&Windows::UI::Composition::ComponentTransform2D::sc_defaultAnchorPoint;
}
