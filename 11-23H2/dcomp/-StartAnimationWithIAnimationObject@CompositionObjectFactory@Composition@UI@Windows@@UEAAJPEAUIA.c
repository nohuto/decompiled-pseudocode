/*
 * XREFs of ?StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@UEAAJPEAUIAnimationObject@234@PEAUHSTRING__@@PEAUICompositionAnimation@234@@Z @ 0x180014F50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@SAJPEAUIAnimationObject@234@PEAUHSTRING__@@PEAVCompositionAnimation@234@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18001504C (-StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@SAJPEAUIAni.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObjectFactory::StartAnimationWithIAnimationObject(
        Windows::UI::Composition::CompositionObjectFactory *this,
        struct IUnknown *a2,
        HSTRING a3,
        struct IUnknown *a4)
{
  unsigned int v7; // edi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  Microsoft::WRL2::ContextSession *v9; // rbp
  int started; // eax
  unsigned int v11; // esi
  unsigned int v13; // edx
  unsigned int v14; // edx
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  if ( a4 )
  {
    v7 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
           a4,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
           &v15);
    if ( !v7 )
    {
      v8 = v15;
      v9 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)v15 + 3);
      Microsoft::WRL2::ContextSession::BeginApiEntry(v9);
      if ( (*((_BYTE *)v8 + 32) & 2) != 0 )
      {
        if ( a3 )
        {
          if ( a2 )
          {
            started = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                        v9,
                        a4,
                        (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
                        &v15);
            v11 = started;
            if ( started < 0 )
            {
              v14 = 1485;
            }
            else
            {
              started = Windows::UI::Composition::CompositionObjectFactory::StartAnimationWithIAnimationObject(
                          a2,
                          a3,
                          v15,
                          0LL);
              v11 = started;
              if ( started >= 0 )
              {
                v11 = 0;
LABEL_9:
                Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v15);
LABEL_10:
                Microsoft::WRL2::ContextSession::EndApiEntry(v9);
                Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
                return v11;
              }
              v14 = 1487;
            }
            DoStackCaptureDirect(started, v14);
            goto LABEL_9;
          }
          v13 = 1478;
        }
        else
        {
          v13 = 1477;
        }
        v11 = -2147024809;
        DoStackCaptureDirect(-2147024809, v13);
        goto LABEL_10;
      }
      v7 = -2147483629;
      RoOriginateErrorW(
        2147483667LL,
        0LL,
        L"The given object has already been closed / disposed and may no longer be used.");
      Microsoft::WRL2::ContextSession::EndApiEntry(v9);
    }
  }
  else
  {
    v7 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
  return v7;
}
