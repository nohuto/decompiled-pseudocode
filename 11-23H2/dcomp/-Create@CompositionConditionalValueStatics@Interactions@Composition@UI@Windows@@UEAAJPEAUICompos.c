/*
 * XREFs of ?Create@CompositionConditionalValueStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUICompositionConditionalValue@2345@@Z @ 0x18012D130
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
 *     ??$MakeAndInitialize2@VCompositionConditionalValue@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18012CF8C (--$MakeAndInitialize2@VCompositionConditionalValue@Interactions@Composition@UI@Windows@@V12345@P.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::CompositionConditionalValueStatics::Create(
        Windows::UI::Composition::Interactions::CompositionConditionalValueStatics *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::Interactions::ICompositionConditionalValue **a3)
{
  unsigned int v4; // edi
  Microsoft::WRL2::NestableRuntimeClass *v5; // rbx
  int v6; // eax
  Windows::UI::Composition::CompositionObject *v7; // rax
  Windows::UI::Composition::CompositionObject *v9; // [rsp+38h] [rbp+10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  if ( !a2 )
  {
    v4 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    goto LABEL_11;
  }
  v4 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         &v10);
  if ( v4 )
    goto LABEL_6;
  v5 = v10;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v10);
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
  v10 = v5;
  v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::CompositionConditionalValue,Windows::UI::Composition::Interactions::CompositionConditionalValue,Windows::UI::Composition::Compositor *>(
         &v9,
         &v10);
  v4 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x103u);
  }
  else
  {
    v7 = v9;
    v9 = 0LL;
    *a3 = (struct Windows::UI::Composition::Interactions::ICompositionConditionalValue *)(((unsigned __int64)v7 + 128) & -(__int64)(v7 != 0LL));
    v4 = 0;
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v5);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
LABEL_11:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
  return v4;
}
