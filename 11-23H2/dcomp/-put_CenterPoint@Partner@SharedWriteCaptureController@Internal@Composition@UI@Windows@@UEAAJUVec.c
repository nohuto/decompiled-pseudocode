/*
 * XREFs of ?put_CenterPoint@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@6@@Z @ 0x180182960
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetCenterPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@5@@Z @ 0x18018A31C (-SetCenterPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedWriteCaptureController::Partner::put_CenterPoint(
        __int64 a1,
        __int64 a2)
{
  Windows::UI::Composition::Internal::CaptureControllerBase *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (Windows::UI::Composition::Internal::CaptureControllerBase *)(a1 - 192);
  v7[0] = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 192 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::Internal::CaptureControllerBase::SetCenterPoint(
           v2,
           (const struct Windows::Foundation::Numerics::Vector2 *)v7);
    v4 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x129u);
    else
      v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
