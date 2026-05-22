/*
 * XREFs of ?EnsureSystemBackdropRoot@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015F88
 * Callers:
 *     ?EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x1800159D0 (-EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$RefPtr@VContainerVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180015B5C (--4-$RefPtr@VContainerVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180016088 (--$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Deta.c)
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E7FC (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VV.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::SystemBackdropHelper::EnsureSystemBackdropRoot(
        Windows::UI::Composition::SystemBackdropHelper *this)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rsi
  int updated; // eax
  unsigned int v4; // ebx
  Windows::UI::Composition::CompositionObject *v5; // rbx
  int inserted; // eax
  int v7; // edi
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+90h] [rbp+20h] BYREF
  int v12; // [rsp+98h] [rbp+28h]
  int v13; // [rsp+9Ch] [rbp+2Ch]
  void *v14; // [rsp+A0h] [rbp+30h]

  v1 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
    return 0LL;
  v11 = 0LL;
  updated = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ContainerVisual,Windows::UI::Composition::ContainerVisual,Windows::UI::Composition::Compositor * const &>(
              &v11,
              (char *)this + 8);
  v4 = updated;
  if ( updated < 0 )
  {
    v9 = 94LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_12;
  }
  v5 = v11;
  inserted = Windows::UI::Composition::Visual::InsertChild(*(Windows::UI::Composition::Visual **)this, v11, 1, 0LL);
  v7 = inserted;
  if ( inserted >= 0 )
  {
    v12 = 1065353216;
    v13 = 1065353216;
    v14 = &Windows::UI::Composition::Visual::sc_RelativeSizeAdjustment;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>,Windows::UI::Composition::PropertyUpdateInfo>(v5);
    v4 = updated;
    if ( updated >= 0 )
    {
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::ContainerVisual>::operator=(v1, (char *)&v11);
      if ( v11 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
      return 0LL;
    }
    v9 = 104LL;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x65,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
    (const char *)(unsigned int)inserted);
  v4 = v7;
LABEL_12:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
  return v4;
}
