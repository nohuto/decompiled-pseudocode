/*
 * XREFs of ?EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x1800159D0
 * Callers:
 *     ?SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18001597C (-SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$RefPtr@VContainerVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180015B5C (--4-$RefPtr@VContainerVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015B98 (-EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ??$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpriteVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015D30 (--$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details.c)
 *     ?EnsureSystemBackdropRoot@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015F88 (-EnsureSystemBackdropRoot@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E7FC (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VV.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::SystemBackdropHelper::EnsureSystemBackdropVisual(
        Windows::UI::Composition::SystemBackdropHelper *this)
{
  char *v1; // rsi
  int v4; // ebx
  int updated; // eax
  Windows::UI::Composition::CompositionObject *v6; // rbx
  int inserted; // eax
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+90h] [rbp+20h] BYREF
  int v13; // [rsp+98h] [rbp+28h]
  int v14; // [rsp+9Ch] [rbp+2Ch]
  void *v15; // [rsp+A0h] [rbp+30h]

  v1 = (char *)this + 24;
  if ( *((_QWORD *)this + 3) )
    return 0LL;
  v4 = Windows::UI::Composition::SystemBackdropHelper::EnsureSystemBackdropRoot(this);
  if ( v4 < 0 )
  {
    v9 = 63LL;
  }
  else
  {
    v4 = Windows::UI::Composition::SystemBackdropHelper::EnsureEmergencyBackgroundVisual(this);
    if ( v4 >= 0 )
    {
      v12 = 0LL;
      updated = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::Compositor * const &>(
                  &v12,
                  (char *)this + 8);
      v4 = updated;
      if ( updated < 0 )
      {
        v10 = 70LL;
      }
      else
      {
        v6 = v12;
        inserted = Windows::UI::Composition::Visual::InsertChild(
                     *((Windows::UI::Composition::Visual **)this + 2),
                     v12,
                     0,
                     0LL);
        v8 = inserted;
        if ( inserted < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
            (const char *)(unsigned int)inserted);
          v4 = v8;
          goto LABEL_15;
        }
        v13 = 1065353216;
        v14 = 1065353216;
        v15 = &Windows::UI::Composition::Visual::sc_RelativeSizeAdjustment;
        updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>,Windows::UI::Composition::PropertyUpdateInfo>(v6);
        v4 = updated;
        if ( updated >= 0 )
        {
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::ContainerVisual>::operator=(v1, &v12);
          if ( v12 )
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
          return 0LL;
        }
        v10 = 76LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
        (const char *)(unsigned int)updated);
LABEL_15:
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
      return (unsigned int)v4;
    }
    v9 = 64LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
