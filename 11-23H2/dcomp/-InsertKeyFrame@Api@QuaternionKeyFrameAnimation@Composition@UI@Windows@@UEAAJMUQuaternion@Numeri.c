/*
 * XREFs of ?InsertKeyFrame@Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUQuaternion@Numerics@Foundation@5@@Z @ 0x18017B3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertQuaternionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUQuaternion@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x1801880A4 (-InsertQuaternionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUQuaternion@Numeric.c)
 */

__int64 __fastcall Windows::UI::Composition::QuaternionKeyFrameAnimation::Api::InsertKeyFrame(
        __int64 a1,
        float a2,
        struct Windows::Foundation::Numerics::Quaternion *a3)
{
  Windows::UI::Composition::KeyFrameAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v6; // edi
  int inserted; // eax
  unsigned int v8; // edx
  int v9; // ecx

  v3 = (Windows::UI::Composition::KeyFrameAnimation *)(a1 - 496);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 496 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    if ( a2 < 0.0 || a2 > 1.0 )
    {
      v6 = -2147024809;
      v8 = 71;
      v9 = -2147024809;
    }
    else
    {
      inserted = Windows::UI::Composition::KeyFrameAnimation::InsertQuaternionKeyFrame(v3, a2, a3, 0LL);
      v6 = inserted;
      if ( inserted >= 0 )
      {
        v6 = 0;
        goto LABEL_10;
      }
      v8 = 74;
      v9 = inserted;
    }
    DoStackCaptureDirect(v9, v8);
    goto LABEL_10;
  }
  v6 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
