/*
 * XREFs of ?put_ProgressBehavior@Api@AnimationController@Composition@UI@Windows@@UEAAJW4AnimationControllerProgressBehavior@345@@Z @ 0x18011C210
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetProgressBehavior@AnimationController@Composition@UI@Windows@@QEAAJW4AnimationControllerProgressBehavior@234@@Z @ 0x18011BED0 (-SetProgressBehavior@AnimationController@Composition@UI@Windows@@QEAAJW4AnimationControllerProgr.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationController::Api::put_ProgressBehavior(__int64 a1, int a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = a1 - 168;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::AnimationController::SetProgressBehavior(v2, a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x224u);
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
