/*
 * XREFs of ?CreateCubicBezierEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@UVector2@Numerics@Foundation@4@1PEAPEAUICubicBezierEasingFunction@234@@Z @ 0x18012E840
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?CreateCubicBezierEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJAEAUVector2@Numerics@Foundation@4@0PEAPEAVCubicBezierEasingFunction@234@@Z @ 0x180079B5C (-CreateCubicBezierEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJAEAUVector2@Numer.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEasingFunctionStatics::CreateCubicBezierEasingFunction(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3,
        __int64 a4,
        struct Windows::UI::Composition::CubicBezierEasingFunction *a5)
{
  struct Windows::UI::Composition::CubicBezierEasingFunction *v5; // r15
  Microsoft::WRL2::NestableRuntimeClass *v6; // rbx
  unsigned int v8; // esi
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  int v10; // eax
  int v11; // eax
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+78h] [rbp+38h] BYREF

  v5 = a5;
  v6 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v14 = a4;
  *(_QWORD *)a5 = 0LL;
  v15 = a3;
  a5 = 0LL;
  if ( !a2 )
  {
    v8 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&a5);
    return v8;
  }
  v8 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         &v13);
  if ( v8 )
    goto LABEL_6;
  v9 = v13;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v13);
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
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
  v10 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
          a2,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Compositor::s_InterfaceType,
          &v16);
  v8 = v10;
  if ( v10 < 0 )
  {
    DoStackCaptureDirect(v10, 0x76u);
  }
  else
  {
    v11 = Windows::UI::Composition::CompositorCommon::CreateCubicBezierEasingFunction(
            v16,
            (struct Windows::Foundation::Numerics::Vector2 *)&v15,
            (struct Windows::Foundation::Numerics::Vector2 *)&v14,
            &a5);
    v8 = v11;
    if ( v11 < 0 )
    {
      DoStackCaptureDirect(v11, 0x7Au);
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
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
  if ( v6 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
  return v8;
}
