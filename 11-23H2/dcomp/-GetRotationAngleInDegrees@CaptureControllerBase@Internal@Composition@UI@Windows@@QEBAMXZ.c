/*
 * XREFs of ?GetRotationAngleInDegrees@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAMXZ @ 0x18018A17C
 * Callers:
 *     ?get_RotationAngleInDegrees@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18017FA40 (-get_RotationAngleInDegrees@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::GetRotationAngleInDegrees(
        Windows::UI::Composition::Internal::CaptureControllerBase *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 22);
  if ( v1 )
    return *(float *)(v1 + 192) * 57.295776;
  else
    return 0.0;
}
