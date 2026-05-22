/*
 * XREFs of ?GetRotationAngle@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAMXZ @ 0x18018A158
 * Callers:
 *     ?get_RotationAngle@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18017F9B0 (-get_RotationAngle@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAM@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::GetRotationAngle(
        Windows::UI::Composition::Internal::CaptureControllerBase *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 22);
  if ( v1 )
    return *(float *)(v1 + 192);
  else
    return 0.0;
}
