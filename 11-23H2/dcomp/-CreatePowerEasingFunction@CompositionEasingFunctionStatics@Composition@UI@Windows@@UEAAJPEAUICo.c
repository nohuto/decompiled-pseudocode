/*
 * XREFs of ?CreatePowerEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@MPEAPEAUIPowerEasingFunction@234@@Z @ 0x18012EE60
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
 *     ??$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVPowerEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012E1F8 (--$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEasingFunctionStatics::CreatePowerEasingFunction(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        float a4,
        Microsoft::WRL2::NestableRuntimeClass *a5)
{
  Microsoft::WRL2::NestableRuntimeClass *v5; // r15
  Microsoft::WRL2::NestableRuntimeClass *v6; // rbx
  int v8; // esi
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  int v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v12[2]; // [rsp+20h] [rbp-10h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+68h] [rbp+38h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+40h] BYREF
  float v15; // [rsp+78h] [rbp+48h] BYREF

  v15 = a4;
  v14 = a3;
  v5 = a5;
  v6 = 0LL;
  v13 = 0LL;
  v12[0] = 0LL;
  a5 = 0LL;
  *(_QWORD *)v5 = 0LL;
  if ( !a2 )
  {
    v8 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&a5);
    return (unsigned int)v8;
  }
  v8 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         v12);
  if ( v8 )
    goto LABEL_6;
  v9 = v12[0];
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v12[0]);
  if ( (*((_BYTE *)v9 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v9);
    goto LABEL_6;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
  v8 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Compositor::s_InterfaceType,
         &v13);
  if ( v8 < 0 )
  {
    DoStackCaptureDirect(v8, 0x19Fu);
  }
  else
  {
    v12[0] = v13;
    v10 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::PowerEasingFunction,Windows::UI::Composition::PowerEasingFunction,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionEasingFunctionMode &,float &>(
            &a5,
            (__int64 *)v12,
            &v14,
            &v15);
    v8 = v10;
    if ( v10 < 0 )
    {
      DoStackCaptureDirect(v10, 0x1A5u);
      v6 = a5;
    }
    else
    {
      *(_QWORD *)v5 = ((unsigned __int64)a5 + 152) & -(__int64)(a5 != 0LL);
      v8 = 0;
    }
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v9);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
  if ( v6 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
  return (unsigned int)v8;
}
