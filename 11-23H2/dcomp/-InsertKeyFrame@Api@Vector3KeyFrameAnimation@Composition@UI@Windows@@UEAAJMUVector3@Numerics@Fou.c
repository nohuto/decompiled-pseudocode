/*
 * XREFs of ?InsertKeyFrame@Api@Vector3KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@5@@Z @ 0x18007C430
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertVector3KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x18007C6A4 (-InsertVector3KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foun.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector3KeyFrameAnimation::Api::InsertKeyFrame(
        __int64 a1,
        float a2,
        struct Windows::Foundation::Numerics::Vector3 *a3)
{
  Windows::UI::Composition::KeyFrameAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int inserted; // eax
  unsigned int v7; // edi

  v3 = (Windows::UI::Composition::KeyFrameAnimation *)(a1 - 496);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 496 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertVector3KeyFrame(v3, a2, a3, 0LL);
    v7 = inserted;
    if ( inserted < 0 )
      DoStackCaptureDirect(inserted, 0x45u);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
