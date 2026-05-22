/*
 * XREFs of ?InsertKeyFrameWithEasingFunction@Api@Vector4KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector4@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z @ 0x18017E840
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?InsertVector4KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector4@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z @ 0x180188210 (-InsertVector4KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector4@Numerics@Foun.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector4KeyFrameAnimation::Api::InsertKeyFrameWithEasingFunction(
        __int64 a1,
        float a2,
        struct Windows::Foundation::Numerics::Vector4 *a3,
        struct IUnknown *a4)
{
  Windows::UI::Composition::KeyFrameAnimation *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int inserted; // eax
  __int64 v11; // rdx
  unsigned int v12; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v14[2]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (Windows::UI::Composition::KeyFrameAnimation *)(a1 - 496);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 496 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v14[0] = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
      (volatile signed __int32 **)v14,
      v8);
    inserted = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                 (struct Microsoft::WRL2::ContextSession *)v5,
                 a4,
                 (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEasingFunction::s_InterfaceType,
                 v14);
    v9 = inserted;
    if ( inserted < 0 )
    {
      v12 = 94;
    }
    else
    {
      inserted = Windows::UI::Composition::KeyFrameAnimation::InsertVector4KeyFrame(v4, a2, a3, v14[0]);
      v9 = inserted;
      if ( inserted >= 0 )
      {
        v9 = 0;
LABEL_9:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
          (volatile signed __int32 **)v14,
          v11);
        goto LABEL_10;
      }
      v12 = 96;
    }
    DoStackCaptureDirect(inserted, v12);
    goto LABEL_9;
  }
  v9 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
