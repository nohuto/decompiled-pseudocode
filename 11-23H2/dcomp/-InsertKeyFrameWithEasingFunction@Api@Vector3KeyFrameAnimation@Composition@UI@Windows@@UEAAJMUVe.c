/*
 * XREFs of ?InsertKeyFrameWithEasingFunction@Api@Vector3KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z @ 0x18007C600
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InsertVector3KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x18007C6A4 (-InsertVector3KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foun.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector3KeyFrameAnimation::Api::InsertKeyFrameWithEasingFunction(
        __int64 a1,
        float a2,
        struct Windows::Foundation::Numerics::Vector3 *a3,
        struct IUnknown *a4)
{
  Windows::UI::Composition::KeyFrameAnimation *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int inserted; // eax
  unsigned int v9; // ebx
  unsigned int v11; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12[2]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (Windows::UI::Composition::KeyFrameAnimation *)(a1 - 496);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 496 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v4 + 32) & 2) == 0 )
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  inserted = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
               (struct Microsoft::WRL2::ContextSession *)v5,
               a4,
               (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEasingFunction::s_InterfaceType,
               v12);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v11 = 94;
    goto LABEL_10;
  }
  inserted = Windows::UI::Composition::KeyFrameAnimation::InsertVector3KeyFrame(v4, a2, a3, v12[0]);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v11 = 96;
LABEL_10:
    DoStackCaptureDirect(inserted, v11);
    goto LABEL_5;
  }
  v9 = 0;
LABEL_5:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(v12);
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
