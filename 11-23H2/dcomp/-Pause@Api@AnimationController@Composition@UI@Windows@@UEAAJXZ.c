/*
 * XREFs of ?Pause@Api@AnimationController@Composition@UI@Windows@@UEAAJXZ @ 0x180084FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Pause@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x180008970 (-Pause@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationController::Api::Pause(
        Windows::UI::Composition::AnimationController::Api *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  Windows::UI::Composition::KeyFrameAnimator **v3; // rsi
  Windows::UI::Composition::KeyFrameAnimator **i; // rdi
  unsigned int v5; // edi

  v1 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    *((_BYTE *)this + 28) = 1;
    v3 = (Windows::UI::Composition::KeyFrameAnimator **)*((_QWORD *)this + 5);
    for ( i = (Windows::UI::Composition::KeyFrameAnimator **)*((_QWORD *)this + 4); i != v3; ++i )
      Windows::UI::Composition::KeyFrameAnimator::Pause(*i);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v5;
}
