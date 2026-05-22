/*
 * XREFs of ?Create@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIVisual@456@PEAPEAUIEdgyExperienceSource@23456@@Z @ 0x180131000
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@V123456@AEAPEAUHSTRING__@@PEAVVisual@456@@Details@WRL2@Microsoft@@YAJPEAPEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@AEAPEAUHSTRING__@@$$QEAPEAVVisual@678@@Z @ 0x180130ACC (--$MakeAndInitialize2@VEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@V12345.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory::Create(
        Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory *this,
        HSTRING a2,
        struct IUnknown *a3,
        struct Windows::UI::Composition::Interactions::Internal::IEdgyExperienceSource **a4)
{
  unsigned int v6; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v12; // eax
  unsigned int v13; // r14d
  Microsoft::WRL2::NestableRuntimeClass *v14; // rbx
  __int64 v15; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v16[2]; // [rsp+20h] [rbp-10h] BYREF
  HSTRING v17; // [rsp+68h] [rbp+38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+70h] [rbp+40h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v19; // [rsp+78h] [rbp+48h] BYREF

  v17 = a2;
  *a4 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v16[0] = 0LL;
  if ( !a3 )
  {
    v6 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v19,
      v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
    return v6;
  }
  v6 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a3,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         v16);
  if ( v6 )
    goto LABEL_6;
  v7 = v16[0];
  v8 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v16[0] + 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v8);
  if ( (*((_BYTE *)v7 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v8);
    goto LABEL_6;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)&v19,
    v9);
  Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
    (struct Microsoft::WRL2::ContextSession *)v8,
    a3,
    (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
    &v19);
  v16[0] = v19;
  v12 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource,Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource,HSTRING__ * &,Windows::UI::Composition::Visual *>(
          &v18,
          &v17,
          v16);
  v13 = v12;
  if ( v12 < 0 )
  {
    DoStackCaptureDirect(v12, 0x1A2u);
    v14 = v18;
  }
  else
  {
    v14 = 0LL;
    *a4 = (struct Windows::UI::Composition::Interactions::Internal::IEdgyExperienceSource *)(((unsigned __int64)v18 + 296) & -(__int64)(v18 != 0LL));
    v13 = 0;
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v8);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)&v19,
    v15);
  if ( v14 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
  return v13;
}
