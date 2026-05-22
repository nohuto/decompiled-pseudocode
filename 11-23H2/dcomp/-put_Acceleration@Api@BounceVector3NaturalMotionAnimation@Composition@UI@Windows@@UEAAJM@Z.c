/*
 * XREFs of ?put_Acceleration@Api@BounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x18017DFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetAcceleration@Bounce@Composition@UI@Windows@@QEAAJM@Z @ 0x180167BF4 (-SetAcceleration@Bounce@Composition@UI@Windows@@QEAAJM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::BounceVector3NaturalMotionAnimation::Api::put_Acceleration(
        Windows::UI::Composition::BounceVector3NaturalMotionAnimation::Api *this,
        float a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v4; // edi
  int v5; // eax

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 56);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 440) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::Bounce::SetAcceleration(
           (Windows::UI::Composition::BounceVector3NaturalMotionAnimation::Api *)((char *)this - 8),
           a2);
    v4 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x36u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
