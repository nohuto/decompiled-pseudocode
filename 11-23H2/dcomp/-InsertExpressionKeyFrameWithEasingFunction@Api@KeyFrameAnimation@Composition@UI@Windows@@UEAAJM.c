/*
 * XREFs of ?InsertExpressionKeyFrameWithEasingFunction@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUHSTRING__@@PEAUICompositionEasingFunction@345@@Z @ 0x180084140
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCompositionEasingFunction@234@@Z @ 0x18005E190 (-InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCom.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::Api::InsertExpressionKeyFrameWithEasingFunction(
        Windows::UI::Composition::KeyFrameAnimation::Api *this,
        float a2,
        HSTRING a3,
        struct IUnknown *a4)
{
  Windows::UI::Composition::CompositorCommon **v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v8; // rdx
  int inserted; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v13; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = (Windows::UI::Composition::CompositorCommon **)((char *)this - 344);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 40);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( ((_BYTE)v4[4] & 2) == 0 )
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  v14 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
    (volatile signed __int32 **)&v14,
    v8);
  inserted = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
               (struct Microsoft::WRL2::ContextSession *)v5,
               a4,
               (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEasingFunction::s_InterfaceType,
               &v14);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v13 = 1714;
    goto LABEL_10;
  }
  inserted = Windows::UI::Composition::KeyFrameAnimation::InsertExpressionKeyFrame(v4, a2, a3, v14);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v13 = 1716;
LABEL_10:
    DoStackCaptureDirect(inserted, v13);
    goto LABEL_5;
  }
  v10 = 0;
LABEL_5:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
    (volatile signed __int32 **)&v14,
    v11);
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v10;
}
