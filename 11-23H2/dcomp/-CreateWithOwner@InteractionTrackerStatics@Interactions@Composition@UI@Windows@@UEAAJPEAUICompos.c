/*
 * XREFs of ?CreateWithOwner@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAUIInteractionTrackerOwner@2345@PEAPEAUIInteractionTracker@2345@@Z @ 0x180138930
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAUIInteractionTrackerOwner@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTracker@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAUIInteractionTrackerOwner@4567@@Z @ 0x180134BB8 (--$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V123_ea_180134BB8.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerStatics::CreateWithOwner(
        Windows::UI::Composition::Interactions::InteractionTrackerStatics *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner *a3,
        struct Windows::UI::Composition::Interactions::IInteractionTracker **a4)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rdi
  unsigned int v7; // esi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  int v9; // eax
  Microsoft::WRL2::NestableRuntimeClass *v11[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+68h] [rbp+38h] BYREF
  struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner *v13; // [rsp+70h] [rbp+40h] BYREF

  v13 = a3;
  v4 = 0LL;
  v11[0] = 0LL;
  v12 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return v7;
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
  if ( a3 )
  {
    v11[0] = v8;
    v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::InteractionTracker,Windows::UI::Composition::Interactions::InteractionTracker,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Interactions::IInteractionTrackerOwner * &>(
           &v12,
           v11,
           &v13);
    v7 = v9;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0xD99u);
      v4 = v12;
    }
    else
    {
      *a4 = (struct Windows::UI::Composition::Interactions::IInteractionTracker *)(((unsigned __int64)v12 + 136) & -(__int64)(v12 != 0LL));
      v7 = 0;
    }
  }
  else
  {
    v7 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0xD94u);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v8);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  if ( v4 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  return v7;
}
