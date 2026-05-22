/*
 * XREFs of ?Resume@Api@AnimationController@Composition@UI@Windows@@UEAAJXZ @ 0x18011BCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x1800197B0 (-Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationController::Api::Resume(
        Windows::UI::Composition::AnimationController::Api *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // esi
  Windows::UI::Composition::KeyFrameAnimator **v4; // rbp
  Windows::UI::Composition::KeyFrameAnimator **i; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    v3 = 0;
    *((_BYTE *)this + 28) = 0;
    v4 = (Windows::UI::Composition::KeyFrameAnimator **)*((_QWORD *)this + 5);
    for ( i = (Windows::UI::Composition::KeyFrameAnimator **)*((_QWORD *)this + 4); i != v4; ++i )
      Windows::UI::Composition::KeyFrameAnimator::Start(*i);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v3;
}
