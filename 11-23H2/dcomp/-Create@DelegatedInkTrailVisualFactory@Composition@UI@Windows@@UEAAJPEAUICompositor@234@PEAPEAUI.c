/*
 * XREFs of ?Create@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJPEAUICompositor@234@PEAPEAUIDelegatedInkTrailVisual@234@@Z @ 0x18011B330
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@$$T@Details@WRL2@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA$$T@Z @ 0x18011AF94 (--$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::DelegatedInkTrailVisualFactory::Create(
        Windows::UI::Composition::DelegatedInkTrailVisualFactory *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::IDelegatedInkTrailVisual **a3)
{
  unsigned int v4; // edi
  Microsoft::WRL2::NestableRuntimeClass *v5; // rbx
  int v7; // eax
  unsigned int v8; // esi
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+58h] [rbp+38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+60h] [rbp+40h] BYREF
  struct Windows::UI::Composition::Compositor *v12; // [rsp+68h] [rbp+48h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !a2 )
  {
    v4 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return v4;
  }
  v4 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         &v11);
  if ( v4 )
    goto LABEL_6;
  v5 = v11;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v11);
  if ( (*((_BYTE *)v5 + 32) & 2) == 0 )
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v5);
    goto LABEL_6;
  }
  v11 = 0LL;
  v12 = v5;
  v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::DelegatedInkTrailVisual,Windows::UI::Composition::DelegatedInkTrailVisual,Windows::UI::Composition::Compositor *,std::nullptr_t>(
         &v10,
         &v12,
         &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    DoStackCaptureDirect(v7, 0x93u);
    v9 = v10;
  }
  else
  {
    v9 = 0LL;
    *a3 = (struct Windows::UI::Composition::IDelegatedInkTrailVisual *)(((unsigned __int64)v10 + 296) & -(__int64)(v10 != 0LL));
    v8 = 0;
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v5);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  if ( v9 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  return v8;
}
