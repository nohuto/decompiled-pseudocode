/*
 * XREFs of ?CreateStepEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@PEAPEAUIStepEasingFunction@234@@Z @ 0x18012F170
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVStepEasingFunction@234@@Z @ 0x1800797D0 (-CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVSte.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEasingFunctionStatics::CreateStepEasingFunction(
        Windows::UI::Composition::CompositionEasingFunctionStatics *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::IStepEasingFunction **a3)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // rbx
  unsigned int v6; // esi
  Microsoft::WRL2::NestableRuntimeClass *v7; // rdi
  int v8; // eax
  int v9; // eax
  struct Windows::UI::Composition::StepEasingFunction *v11; // [rsp+58h] [rbp+38h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+60h] [rbp+40h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+68h] [rbp+48h] BYREF

  *a3 = 0LL;
  v3 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  if ( !a2 )
  {
    v6 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return v6;
  }
  v6 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         &v13);
  if ( v6 )
    goto LABEL_6;
  v7 = v13;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v13);
  if ( (*((_BYTE *)v7 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v7);
    goto LABEL_6;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
  v8 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Compositor::s_InterfaceType,
         &v12);
  v6 = v8;
  if ( v8 < 0 )
  {
    DoStackCaptureDirect(v8, 0xB7u);
  }
  else
  {
    v9 = Windows::UI::Composition::CompositorCommon::CreateStepEasingFunctionWithStepCount(v12, 1, &v11);
    v6 = v9;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0xB8u);
      v3 = v11;
    }
    else
    {
      *a3 = (struct Windows::UI::Composition::IStepEasingFunction *)(((unsigned __int64)v11 + 152) & -(__int64)(v11 != 0LL));
      v6 = 0;
    }
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v7);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
  if ( v3 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  return v6;
}
