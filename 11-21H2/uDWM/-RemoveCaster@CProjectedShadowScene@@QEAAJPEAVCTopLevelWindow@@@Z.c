/*
 * XREFs of ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800CACBC
 * Callers:
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x1800E41C4 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z @ 0x1800CADB0 (-RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CB06C (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::RemoveCaster(
        CProjectedShadowScene::CProjectedShadowSceneInstance **this,
        struct CTopLevelWindow *a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(this[3], a2);
  v5 = updated;
  if ( updated >= 0 )
  {
    updated = CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(this[4], a2);
    v5 = updated;
    if ( updated >= 0 )
    {
      *((_BYTE *)a2 + 249) &= ~0x20u;
      updated = CProjectedShadowScene::UpdateProjectedShadowReceiverVisual((CProjectedShadowScene *)this);
      v5 = updated;
      if ( updated >= 0 )
      {
        updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 32LL)
                                                    + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 5)
                                                                       + 32LL));
        v5 = updated;
        if ( updated >= 0 )
        {
          v5 = 0;
          goto LABEL_11;
        }
        v6 = 80LL;
      }
      else
      {
        v6 = 79LL;
      }
    }
    else
    {
      v6 = 76LL;
    }
  }
  else
  {
    v6 = 75LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)updated);
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v5;
}
