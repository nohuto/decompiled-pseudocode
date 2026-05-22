/*
 * XREFs of ?get_TransformMatrix@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUMatrix3x2@Numerics@Foundation@6@@Z @ 0x18017FB60
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAAEBUMatrix3x2@Numerics@Foundation@5@XZ @ 0x18018A1CC (-GetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAAEBUMatrix3x2@Num.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureController::Partner::get_TransformMatrix(
        Windows::UI::Composition::Internal::CaptureController::Partner *this,
        struct Windows::Foundation::Numerics::Matrix3x2 *a2)
{
  Windows::UI::Composition::Internal::CaptureControllerBase *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  const struct Windows::Foundation::Numerics::Matrix3x2 *TransformMatrix; // rax

  v2 = (Windows::UI::Composition::Internal::CaptureController::Partner *)((char *)this - 192);
  *(_OWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    TransformMatrix = Windows::UI::Composition::Internal::CaptureControllerBase::GetTransformMatrix(v2);
    *(_OWORD *)a2 = *(_OWORD *)TransformMatrix;
    *((_QWORD *)a2 + 2) = *((_QWORD *)TransformMatrix + 2);
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
