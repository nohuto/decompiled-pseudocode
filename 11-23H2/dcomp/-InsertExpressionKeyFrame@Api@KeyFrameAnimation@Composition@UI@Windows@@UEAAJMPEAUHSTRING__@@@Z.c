/*
 * XREFs of ?InsertExpressionKeyFrame@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUHSTRING__@@@Z @ 0x180088C50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCompositionEasingFunction@234@@Z @ 0x18005E190 (-InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCom.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::Api::InsertExpressionKeyFrame(
        Windows::UI::Composition::KeyFrameAnimation::Api *this,
        float a2,
        HSTRING a3)
{
  Windows::UI::Composition::CompositorCommon **v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int inserted; // eax
  unsigned int v7; // edi

  v3 = (Windows::UI::Composition::CompositorCommon **)((char *)this - 344);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 40);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( ((_BYTE)v3[4] & 2) != 0 )
  {
    inserted = Windows::UI::Composition::KeyFrameAnimation::InsertExpressionKeyFrame(v3, a2, a3, 0LL);
    v7 = inserted;
    if ( inserted < 0 )
      DoStackCaptureDirect(inserted, 0x69Au);
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
