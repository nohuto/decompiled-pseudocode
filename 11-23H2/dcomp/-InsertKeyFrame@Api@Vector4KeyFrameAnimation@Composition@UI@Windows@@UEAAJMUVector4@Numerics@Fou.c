/*
 * XREFs of ?InsertKeyFrame@Api@Vector4KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector4@Numerics@Foundation@5@@Z @ 0x18017E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertVector4KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector4@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x180188210 (-InsertVector4KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector4@Numerics@Foun.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector4KeyFrameAnimation::Api::InsertKeyFrame(
        __int64 a1,
        float a2,
        struct Windows::Foundation::Numerics::Vector4 *a3)
{
  Windows::UI::Composition::KeyFrameAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v6; // edi
  int inserted; // eax

  v3 = (Windows::UI::Composition::KeyFrameAnimation *)(a1 - 496);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 496 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertVector4KeyFrame(v3, a2, a3, 0LL);
    v6 = inserted;
    if ( inserted < 0 )
      DoStackCaptureDirect(inserted, 0x45u);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
