/*
 * XREFs of ?GetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAAEBUMatrix3x2@Numerics@Foundation@5@XZ @ 0x18018A1CC
 * Callers:
 *     ?get_TransformMatrix@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUMatrix3x2@Numerics@Foundation@6@@Z @ 0x18017FB60 (-get_TransformMatrix@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUMatrix3.c)
 * Callees:
 *     <none>
 */

const struct Windows::Foundation::Numerics::Matrix3x2 *__fastcall Windows::UI::Composition::Internal::CaptureControllerBase::GetTransformMatrix(
        Windows::UI::Composition::Internal::CaptureControllerBase *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 22);
  if ( v1 )
    return (const struct Windows::Foundation::Numerics::Matrix3x2 *)(v1 + 136);
  else
    return (const struct Windows::Foundation::Numerics::Matrix3x2 *)&Windows::UI::Composition::ComponentTransform2D::sc_defaultTransformMatrix;
}
