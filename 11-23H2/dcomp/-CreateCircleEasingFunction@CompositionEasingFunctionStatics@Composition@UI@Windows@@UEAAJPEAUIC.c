/*
 * XREFs of ?CreateCircleEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@PEAPEAUICircleEasingFunction@234@@Z @ 0x18012E6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCircleEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@@Z @ 0x18012DF80 (--$MakeAndInitialize2@VCircleEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEasingFunctionStatics::CreateCircleEasingFunction(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rbx
  int v7; // esi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rdi
  int v9; // eax
  Microsoft::WRL2::NestableRuntimeClass *v11[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+68h] [rbp+38h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+40h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+78h] [rbp+48h] BYREF

  v13 = a3;
  *a4 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v11[0] = 0LL;
  v12 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v7 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         v11);
  if ( v7 )
    goto LABEL_6;
  v8 = v11[0];
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v11[0]);
  if ( (*((_BYTE *)v8 + 32) & 2) == 0 )
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v8);
    goto LABEL_6;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
  v7 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Compositor::s_InterfaceType,
         &v14);
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x139u);
  }
  else
  {
    v11[0] = v14;
    v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CircleEasingFunction,Windows::UI::Composition::CircleEasingFunction,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionEasingFunctionMode &>(
           &v12,
           v11,
           &v13);
    v7 = v9;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0x13Eu);
      v4 = v12;
    }
    else
    {
      *a4 = ((unsigned __int64)v12 + 152) & -(__int64)(v12 != 0LL);
      v7 = 0;
    }
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v8);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
  if ( v4 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  return (unsigned int)v7;
}
