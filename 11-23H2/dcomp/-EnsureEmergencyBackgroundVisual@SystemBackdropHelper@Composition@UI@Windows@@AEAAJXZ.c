/*
 * XREFs of ?EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015B98
 * Callers:
 *     ?EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x1800159D0 (-EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBrush@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x180015AF4 (-SetBrush@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z.c)
 *     ??$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpriteVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015D30 (--$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details.c)
 *     ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015E88 (--$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@U_D3DCOLORVALUE@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180044B50 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPro.c)
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E7FC (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VV.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::SystemBackdropHelper::EnsureEmergencyBackgroundVisual(
        Windows::UI::Composition::Visual **this)
{
  char *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  Windows::UI::Composition::CompositionObject *v5; // rbx
  int inserted; // edi
  __int128 v7; // xmm0
  int v8; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  int updated; // eax
  int v11; // esi
  __int64 v13; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+28h] [rbp-19h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+30h] [rbp-11h] BYREF
  __int128 v16; // [rsp+38h] [rbp-9h] BYREF
  Windows::UI::Composition::CompositionObject *v17; // [rsp+48h] [rbp+7h] BYREF
  __int128 v18; // [rsp+50h] [rbp+Fh]
  __int128 v19; // [rsp+60h] [rbp+1Fh]
  Microsoft::WRL2::NestableRuntimeClass **v20; // [rsp+70h] [rbp+2Fh]
  __int128 v21; // [rsp+78h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v15 = 0LL;
  v1 = (char *)(this + 1);
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::Compositor * const &>(
         &v15,
         this + 1);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
      (const char *)(unsigned int)v3);
LABEL_18:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    return v4;
  }
  v5 = v15;
  inserted = Windows::UI::Composition::Visual::InsertChild(this[2], v15, 0, 0LL);
  if ( inserted < 0 )
  {
    v13 = 120LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
      (const char *)(unsigned int)inserted);
LABEL_16:
    v4 = inserted;
    goto LABEL_18;
  }
  DWORD2(v16) = 0;
  DWORD2(v21) = 0;
  *(_QWORD *)&v21 = &Windows::UI::Composition::Visual::SetSparse_RelativeSizeAdjustment;
  v14 = (Microsoft::WRL2::NestableRuntimeClass *)0x3F8000003F800000LL;
  *(_QWORD *)&v16 = &Windows::UI::Composition::Visual::GetSparse_RelativeSizeAdjustment;
  v7 = v16;
  v20 = &v14;
  *(_QWORD *)&v16 = &Windows::UI::Composition::Visual::sc_RelativeSizeAdjustment;
  v17 = v5;
  v18 = v7;
  v19 = v21;
  inserted = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>,Windows::UI::Composition::PropertyUpdateInfo>(v5);
  if ( inserted < 0 )
  {
    v13 = 123LL;
    goto LABEL_14;
  }
  v14 = 0LL;
  v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::Compositor * const &>(
         &v14,
         v1);
  inserted = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    goto LABEL_16;
  }
  v9 = v14;
  v21 = _xmm;
  v17 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v14 + 168);
  *(_QWORD *)&v18 = &v21;
  *((_QWORD *)&v18 + 1) = &v21;
  *(_QWORD *)&v16 = &Windows::UI::Composition::CompositionColorBrush::sc_Color;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<_D3DCOLORVALUE>,Windows::UI::Composition::PropertyUpdateInfo>(
              v14,
              &v17,
              &v16);
  v11 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
      (const char *)(unsigned int)updated);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    v4 = v11;
    goto LABEL_18;
  }
  Windows::UI::Composition::SpriteVisual::SetBrush(v5, v9);
  if ( v9 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  if ( v5 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  return 0LL;
}
