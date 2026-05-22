/*
 * XREFs of ?CreateElasticEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@HMPEAPEAUIElasticEasingFunction@234@@Z @ 0x18012E9C0
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
 *     ??$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVElasticEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18012E040 (--$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEasingFunctionStatics::CreateElasticEasingFunction(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        Microsoft::WRL2::NestableRuntimeClass *a6)
{
  Microsoft::WRL2::NestableRuntimeClass *v6; // r15
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  int v9; // esi
  Microsoft::WRL2::NestableRuntimeClass *v10; // rdi
  int v11; // eax
  Microsoft::WRL2::NestableRuntimeClass *v13[2]; // [rsp+30h] [rbp-10h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+48h] BYREF

  v16 = a4;
  v15 = a3;
  v6 = a6;
  v7 = 0LL;
  v14 = 0LL;
  v13[0] = 0LL;
  a6 = 0LL;
  *(_QWORD *)v6 = 0LL;
  if ( !a2 )
  {
    v9 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&a6);
    return (unsigned int)v9;
  }
  v9 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         v13);
  if ( v9 )
    goto LABEL_6;
  v10 = v13[0];
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v13[0]);
  if ( (*((_BYTE *)v10 + 32) & 2) == 0 )
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v10);
    goto LABEL_6;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
  v9 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Compositor::s_InterfaceType,
         &v14);
  if ( v9 < 0 )
  {
    DoStackCaptureDirect(v9, 0x15Bu);
  }
  else
  {
    v13[0] = v14;
    v11 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ElasticEasingFunction,Windows::UI::Composition::ElasticEasingFunction,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionEasingFunctionMode &,int &,float &>(
            &a6,
            v13,
            &v15,
            &v16,
            &a5);
    v9 = v11;
    if ( v11 < 0 )
    {
      DoStackCaptureDirect(v11, 0x162u);
      v7 = a6;
    }
    else
    {
      *(_QWORD *)v6 = ((unsigned __int64)a6 + 152) & -(__int64)(a6 != 0LL);
      v9 = 0;
    }
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v10);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
  if ( v7 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
  return (unsigned int)v9;
}
