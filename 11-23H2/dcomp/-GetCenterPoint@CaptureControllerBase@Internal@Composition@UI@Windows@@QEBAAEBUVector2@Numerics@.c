/*
 * XREFs of ?GetCenterPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@5@XZ @ 0x18018A110
 * Callers:
 *     ?get_CenterPoint@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@6@@Z @ 0x18017F5E0 (-get_CenterPoint@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUVector2@Num.c)
 * Callees:
 *     <none>
 */

const struct Windows::Foundation::Numerics::Vector2 *__fastcall Windows::UI::Composition::Internal::CaptureControllerBase::GetCenterPoint(
        Windows::UI::Composition::Internal::CaptureControllerBase *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 22);
  if ( v1 )
    return (const struct Windows::Foundation::Numerics::Vector2 *)(v1 + 168);
  else
    return (const struct Windows::Foundation::Numerics::Vector2 *)&Windows::UI::Composition::ComponentTransform2D::sc_defaultCenterPoint;
}
