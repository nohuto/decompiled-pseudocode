/*
 * XREFs of ?InsertKeyFrameWithEasingFunction@Api@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUICompositionPath@345@PEAUICompositionEasingFunction@345@@Z @ 0x180178410
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 *     ?InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@PEAVCompositionEasingFunction@234@@Z @ 0x1801785A0 (-InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::PathKeyFrameAnimation::Api::InsertKeyFrameWithEasingFunction(
        Windows::UI::Composition::PathKeyFrameAnimation::Api *this,
        float a2,
        struct IUnknown *a3,
        struct IUnknown *a4)
{
  Windows::UI::Composition::PathKeyFrameAnimation *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rdx
  struct Microsoft::WRL2::NestableRuntimeClass *v12; // r15
  struct Windows::UI::Composition::CompositionEasingFunction *v13; // r9
  int inserted; // eax
  unsigned int v15; // edx
  __int64 v16; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v18[2]; // [rsp+20h] [rbp-20h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+60h] [rbp+20h] BYREF

  v4 = (Windows::UI::Composition::PathKeyFrameAnimation::Api *)((char *)this - 496);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 59);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    if ( !a3 )
    {
      v9 = 154;
LABEL_19:
      v8 = -2147024809;
      DoStackCaptureDirect(-2147024809, v9);
      goto LABEL_20;
    }
    if ( a2 < 0.0 || a2 > 1.0 )
    {
      Windows::UI::Composition::OriginateInvalidArgument(16, (__int64)L"normalizedProgressKey");
      v9 = 158;
      goto LABEL_19;
    }
    v19 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v19);
    v10 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
            a3,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionPath::s_InterfaceType,
            &v19);
    v12 = v19;
    v8 = v10;
    if ( v10 < 0 )
    {
      DoStackCaptureDirect(v10, 0xA2u);
      goto LABEL_17;
    }
    v13 = 0LL;
    v18[0] = 0LL;
    if ( a4
      && (Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
            (volatile signed __int32 **)v18,
            v11),
          inserted = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                       (struct Microsoft::WRL2::ContextSession *)v5,
                       a4,
                       (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEasingFunction::s_InterfaceType,
                       v18),
          v13 = v18[0],
          v8 = inserted,
          inserted < 0) )
    {
      v15 = 167;
    }
    else
    {
      inserted = Windows::UI::Composition::PathKeyFrameAnimation::InsertPathKeyFrame(v4, a2, v12, v13);
      v8 = inserted;
      if ( inserted >= 0 )
      {
        v8 = 0;
        goto LABEL_12;
      }
      v15 = 170;
    }
    DoStackCaptureDirect(inserted, v15);
LABEL_12:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
      (volatile signed __int32 **)v18,
      v16);
LABEL_17:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v19);
    goto LABEL_20;
  }
  v8 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_20:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v8;
}
