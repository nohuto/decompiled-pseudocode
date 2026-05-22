/*
 * XREFs of ?CreateStepEasingFunctionWithStepCount@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@HPEAPEAUIStepEasingFunction@234@@Z @ 0x18012F2F0
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

__int64 __fastcall Windows::UI::Composition::CompositionEasingFunctionStatics::CreateStepEasingFunctionWithStepCount(
        Windows::UI::Composition::CompositionEasingFunctionStatics *this,
        struct IUnknown *a2,
        int a3,
        struct Windows::UI::Composition::IStepEasingFunction **a4)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rbx
  unsigned int v8; // esi
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  int v10; // eax
  int v11; // eax
  Microsoft::WRL2::NestableRuntimeClass *v13[2]; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::UI::Composition::StepEasingFunction *v14; // [rsp+68h] [rbp+38h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v13[0] = 0LL;
  v14 = 0LL;
  if ( !a2 )
  {
    v8 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v15);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return v8;
  }
  v8 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         v13);
  if ( v8 )
    goto LABEL_6;
  v9 = v13[0];
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v13[0]);
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
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v15);
  v10 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
          a2,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Compositor::s_InterfaceType,
          &v15);
  v8 = v10;
  if ( v10 < 0 )
  {
    DoStackCaptureDirect(v10, 0xD7u);
  }
  else
  {
    v11 = Windows::UI::Composition::CompositorCommon::CreateStepEasingFunctionWithStepCount(v15, a3, &v14);
    v8 = v11;
    if ( v11 < 0 )
    {
      DoStackCaptureDirect(v11, 0xD8u);
      v4 = v14;
    }
    else
    {
      *a4 = (struct Windows::UI::Composition::IStepEasingFunction *)(((unsigned __int64)v14 + 152) & -(__int64)(v14 != 0LL));
      v8 = 0;
    }
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v9);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v15);
  if ( v4 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  return v8;
}
