/*
 * XREFs of ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800CE480
 * Callers:
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x1800E53A8 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18003EC28 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartExpressionAnimationHelper@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIExpressionAnimation@Composition@34@@Z @ 0x1800C186C (-StartExpressionAnimationHelper@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIExpressionAni.c)
 *     ?AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVisual@@@Z @ 0x1800CE62C (-AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVi.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF788 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::AddCasterFromSharedHandle(
        CProjectedShadowScene *this,
        void *a2,
        void *a3,
        struct CTopLevelWindow *a4)
{
  int updated; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  struct CGlobalLightSet *GlobalLightSetForDesktop; // rax
  __int64 v13; // rdi
  int started; // eax
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+30h] [rbp+8h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle(
              *((CProjectedShadowScene::CProjectedShadowSceneInstance **)this + 3),
              a2,
              a4);
  v9 = updated;
  if ( updated >= 0 )
  {
    updated = CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle(
                *((CProjectedShadowScene::CProjectedShadowSceneInstance **)this + 4),
                a3,
                a4);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 62LL;
      goto LABEL_5;
    }
    *((_BYTE *)a4 + 249) |= 0x10u;
    GlobalLightSetForDesktop = CWindowList::GetGlobalLightSetForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                 *((_QWORD *)this + 2));
    v13 = (__int64)GlobalLightSetForDesktop;
    if ( !GlobalLightSetForDesktop )
    {
      v9 = -2147023728;
      v11 = 2147943568LL;
      v10 = 66LL;
      goto LABEL_6;
    }
    if ( !*((_BYTE *)GlobalLightSetForDesktop + 129) )
    {
      started = CGlobalLightSet::StartExpressionAnimationHelper(
                  (__int64)GlobalLightSetForDesktop,
                  1,
                  *((__int64 (__fastcall ****)(struct Windows::UI::Composition::IExpressionAnimation *, GUID *, __int64 *))GlobalLightSetForDesktop
                  + 14));
      v9 = started;
      if ( started < 0 )
      {
        v15 = 409LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
          (const char *)(unsigned int)started);
        v11 = v9;
        v10 = 68LL;
        goto LABEL_6;
      }
      started = CGlobalLightSet::StartExpressionAnimationHelper(
                  v13,
                  2,
                  *(__int64 (__fastcall ****)(struct Windows::UI::Composition::IExpressionAnimation *, GUID *, __int64 *))(v13 + 120));
      v9 = started;
      if ( started < 0 )
      {
        v15 = 413LL;
        goto LABEL_14;
      }
      *(_BYTE *)(v13 + 129) = 1;
    }
    updated = CProjectedShadowScene::UpdateProjectedShadowReceiverVisual(this);
    v9 = updated;
    if ( updated >= 0 )
    {
      updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 6)
                                                                + 32LL)
                                                  + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 6)
                                                                     + 32LL));
      v9 = updated;
      if ( updated >= 0 )
      {
        v9 = 0;
        goto LABEL_21;
      }
      v10 = 71LL;
    }
    else
    {
      v10 = 70LL;
    }
    goto LABEL_5;
  }
  v10 = 61LL;
LABEL_5:
  v11 = (unsigned int)updated;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)v11);
LABEL_21:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v9;
}
