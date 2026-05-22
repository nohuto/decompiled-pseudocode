/*
 * XREFs of ?put_TransformMatrix@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@6@@Z @ 0x180180250
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@5@@Z @ 0x18018A8C4 (-SetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Nu.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureController::Partner::put_TransformMatrix(
        __int64 a1,
        const struct Windows::Foundation::Numerics::Matrix3x2 *a2)
{
  Windows::UI::Composition::Internal::CaptureControllerBase *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = (Windows::UI::Composition::Internal::CaptureControllerBase *)(a1 - 192);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 192 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::Internal::CaptureControllerBase::SetTransformMatrix(v2, a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x12Bu);
    else
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
