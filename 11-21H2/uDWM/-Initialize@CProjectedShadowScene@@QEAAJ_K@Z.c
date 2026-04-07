/*
 * XREFs of ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CA7DC
 * Callers:
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180103CE0 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18004CC30 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C73C (-InternalRelease@-$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Composition@34@@Z @ 0x1800BD568 (-GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Com.c)
 *     ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800C9C7C (--0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800CA554 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800CAA0C (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectedShadowScene::Initialize(CProjectedShadowScene *this, unsigned __int64 a2)
{
  struct CGlobalLightSet *GlobalLightSetForDesktop; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int ProjectedShadowReceiverVisual; // eax
  unsigned __int64 v8; // r9
  CProjectedShadowScene::CProjectedShadowSceneInstance *v9; // rax
  int SharedLightByType; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  CProjectedShadowScene::CProjectedShadowSceneInstance *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+20h] [rbp-10h] BYREF
  CProjectedShadowScene::CProjectedShadowSceneInstance *v19; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GlobalLightSetForDesktop = CWindowList::GetGlobalLightSetForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                               a2);
  if ( !GlobalLightSetForDesktop )
  {
    v5 = -2147023728;
    v6 = 36LL;
LABEL_9:
    v8 = v5;
    goto LABEL_10;
  }
  ProjectedShadowReceiverVisual = CProjectedShadowScene::CreateProjectedShadowReceiverVisual(this, a2);
  v5 = ProjectedShadowReceiverVisual;
  if ( ProjectedShadowReceiverVisual >= 0 )
  {
    v9 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                   WPF::g_pProcessHeap,
                                                                   112LL);
    v19 = v9;
    if ( v9 )
      v9 = CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v9);
    *((_QWORD *)this + 3) = v9;
    if ( !v9 )
    {
      v5 = -2147024882;
      v6 = 41LL;
      goto LABEL_9;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(&v22);
    SharedLightByType = CGlobalLightSet::GetSharedLightByType((__int64)GlobalLightSetForDesktop, 3, &v22);
    v5 = SharedLightByType;
    if ( SharedLightByType < 0 )
    {
      v11 = (unsigned int)SharedLightByType;
      v12 = 44LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)v11);
LABEL_27:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(&v22);
      goto LABEL_28;
    }
    v13 = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 3), v22, 0LL);
    v5 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 45LL;
      goto LABEL_19;
    }
    v14 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                    WPF::g_pProcessHeap,
                                                                    112LL);
    v19 = v14;
    if ( v14 )
      v14 = CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v14);
    *((_QWORD *)this + 4) = v14;
    if ( !v14 )
    {
      v5 = -2147024882;
      v11 = 2147942414LL;
      v12 = 48LL;
      goto LABEL_19;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(&v21);
    v15 = CGlobalLightSet::GetSharedLightByType((__int64)GlobalLightSetForDesktop, 4, &v21);
    v5 = v15;
    if ( v15 >= 0 )
    {
      v15 = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 4), v21, 1LL);
      v5 = v15;
      if ( v15 >= 0 )
      {
        v5 = 0;
        goto LABEL_26;
      }
      v16 = 52LL;
    }
    else
    {
      v16 = 51LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v15);
LABEL_26:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(&v21);
    goto LABEL_27;
  }
  v8 = (unsigned int)ProjectedShadowReceiverVisual;
  v6 = 38LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)v8);
LABEL_28:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v5;
}
