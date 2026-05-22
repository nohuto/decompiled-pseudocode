/*
 * XREFs of ?InsertKeyFrame@Api@Vector2KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector2@Numerics@Foundation@5@@Z @ 0x18017D980
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertVector2KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector2@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x180188150 (-InsertVector2KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector2@Numerics@Foun.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector2KeyFrameAnimation::Api::InsertKeyFrame(
        __int64 a1,
        float a2,
        __int64 a3)
{
  Windows::UI::Composition::KeyFrameAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int inserted; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = (Windows::UI::Composition::KeyFrameAnimation *)(a1 - 496);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 496 + 24);
  v8 = a3;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertVector2KeyFrame(
                 v3,
                 a2,
                 (struct Windows::Foundation::Numerics::Vector2 *)&v8,
                 0LL);
    v5 = inserted;
    if ( inserted < 0 )
      DoStackCaptureDirect(inserted, 0x45u);
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
