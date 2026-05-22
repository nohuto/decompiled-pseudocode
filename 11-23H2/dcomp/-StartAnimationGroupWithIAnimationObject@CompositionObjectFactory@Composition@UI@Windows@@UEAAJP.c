/*
 * XREFs of ?StartAnimationGroupWithIAnimationObject@CompositionObjectFactory@Composition@UI@Windows@@UEAAJPEAUIAnimationObject@234@PEAUICompositionAnimationBase@234@@Z @ 0x180109940
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
 *     ?GetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAPEAUHSTRING__@@@Z @ 0x18008AD4C (-GetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAPEAUHSTRING__@@@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAUIAnimationObject@234@PEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180152110 (-StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObjectFactory::StartAnimationGroupWithIAnimationObject(
        Windows::UI::Composition::CompositionObjectFactory *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  unsigned int v5; // edi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v8; // eax
  HSTRING *v9; // rdi
  int started; // eax
  int v11; // eax
  unsigned int v12; // edx
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+60h] [rbp+40h] BYREF
  HSTRING string; // [rsp+68h] [rbp+48h] BYREF

  v14 = 0LL;
  if ( a3 )
  {
    v5 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
           a3,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
           &v14);
    if ( v5 )
      goto LABEL_6;
    v6 = v14;
    v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v14 + 3);
    Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
    if ( (*((_BYTE *)v6 + 32) & 2) == 0 )
    {
      v5 = -2147483629;
      RoOriginateErrorW(
        2147483667LL,
        0LL,
        L"The given object has already been closed / disposed and may no longer be used.");
      Microsoft::WRL2::ContextSession::EndApiEntry(v7);
      goto LABEL_6;
    }
    if ( !a2 )
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x5DFu);
LABEL_21:
      Microsoft::WRL2::ContextSession::EndApiEntry(v7);
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
      return v5;
    }
    v14 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
    v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v7,
           a3,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
           &v14);
    v9 = (HSTRING *)v14;
    if ( v8 >= 0 )
    {
      WindowsDeleteString(0LL);
      string = 0LL;
      Windows::UI::Composition::CompositionAnimation::GetTarget(v9, &string);
      started = Windows::UI::Composition::CompositionObjectFactory::StartAnimationWithIAnimationObject(
                  a2,
                  (Windows::UI::Composition::AnimationHelper *)string,
                  (struct Microsoft::WRL2::ContextSession **)v9,
                  0LL);
      v5 = started;
      if ( started < 0 )
      {
        DoStackCaptureDirect(started, 0x5E8u);
        WindowsDeleteString(string);
        string = 0LL;
LABEL_20:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
        goto LABEL_21;
      }
      WindowsDeleteString(string);
LABEL_16:
      v5 = 0;
      goto LABEL_20;
    }
    string = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&string);
    v11 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            (struct Microsoft::WRL2::ContextSession *)v7,
            a3,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimationGroup::s_InterfaceType,
            (struct Microsoft::WRL2::ContextRuntimeClass **)&string);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 1520;
    }
    else
    {
      v11 = Windows::UI::Composition::CompositionAnimationGroup::StartAnimationGroupWithIAnimationObject(
              (Windows::UI::Composition::CompositionAnimationGroup *)string,
              a2);
      v5 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&string);
        goto LABEL_16;
      }
      v12 = 1522;
    }
    DoStackCaptureDirect(v11, v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&string);
    goto LABEL_20;
  }
  v5 = -2147024809;
  RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
  return v5;
}
