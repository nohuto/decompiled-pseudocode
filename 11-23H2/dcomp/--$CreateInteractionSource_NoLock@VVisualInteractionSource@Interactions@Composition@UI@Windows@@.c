/*
 * XREFs of ??$CreateInteractionSource_NoLock@VVisualInteractionSource@Interactions@Composition@UI@Windows@@UIVisualInteractionSource@2345@@Interactions@Composition@UI@Windows@@YAJPEAUIVisual@123@_NPEAPEAUIVisualInteractionSource@0123@@Z @ 0x18011C29C
 * Callers:
 *     ?Create@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIVisualInteractionSource@2345@@Z @ 0x1800B6300 (-Create@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAUIVisual@345.c)
 *     ?CreateFromIVisualElement@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UEAAJPEAUIVisualElement@345@PEAPEAUIVisualInteractionSource@2345@@Z @ 0x18011D6E0 (-CreateFromIVisualElement@VisualInteractionSourceFactory@Interactions@Composition@UI@Windows@@UE.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VVisualInteractionSource@Interactions@Composition@UI@Windows@@V12345@PEAVVisual@345@AEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisualInteractionSource@Interactions@Composition@UI@Windows@@$$QEAPEAVVisual@567@AEA_N@Z @ 0x18011C59C (--$MakeAndInitialize2@VVisualInteractionSource@Interactions@Composition@UI@Windows@@V12345@PEAVV.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::CreateInteractionSource_NoLock<Windows::UI::Composition::Interactions::VisualInteractionSource,Windows::UI::Composition::Interactions::IVisualInteractionSource>(
        struct IUnknown *a1,
        char a2,
        unsigned __int64 *a3)
{
  unsigned int v5; // edi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rax
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+60h] [rbp+38h] BYREF
  char v14; // [rsp+68h] [rbp+40h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+70h] [rbp+48h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+78h] [rbp+50h] BYREF

  v14 = a2;
  *a3 = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( !a1 )
  {
    v5 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    goto LABEL_11;
  }
  v5 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a1,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v15);
  if ( v5 )
    goto LABEL_6;
  v6 = v15;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v15 + 3);
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
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)&v16,
    v8);
  Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
    (struct Microsoft::WRL2::ContextSession *)v7,
    a1,
    (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
    &v15);
  v16 = v15;
  v10 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::VisualInteractionSource,Windows::UI::Composition::Interactions::VisualInteractionSource,Windows::UI::Composition::Visual *,bool &>(
          &v13,
          &v15,
          &v14);
  v5 = v10;
  if ( v10 < 0 )
  {
    DoStackCaptureDirect(v10, 0x178u);
  }
  else
  {
    v11 = v13;
    v13 = 0LL;
    *a3 = ((unsigned __int64)v11 + 128) & -(__int64)(v11 != 0LL);
    v5 = 0;
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
LABEL_11:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)&v16,
    v9);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
  return v5;
}
