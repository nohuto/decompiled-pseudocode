/*
 * XREFs of ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800CEE78
 * Callers:
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18010A54C (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18003EC28 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005684C (-InternalRelease@-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Composition@34@@Z @ 0x1800C1680 (-GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Com.c)
 *     ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800CE25C (--0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800CEBB4 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800CF0C4 (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectedShadowScene::Initialize(CProjectedShadowScene *this, unsigned __int64 a2)
{
  struct CGlobalLightSet *GlobalLightSetForDesktop; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int ProjectedShadowReceiverVisual; // eax
  CProjectedShadowScene::CProjectedShadowSceneInstance *v9; // rax
  int SharedLightByType; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  CProjectedShadowScene::CProjectedShadowSceneInstance *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+20h] [rbp-10h] BYREF
  CProjectedShadowScene::CProjectedShadowSceneInstance *v18; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v20; // [rsp+60h] [rbp+30h] BYREF
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GlobalLightSetForDesktop = CWindowList::GetGlobalLightSetForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               a2);
  if ( GlobalLightSetForDesktop )
  {
    ProjectedShadowReceiverVisual = CProjectedShadowScene::CreateProjectedShadowReceiverVisual(this, a2);
    v5 = ProjectedShadowReceiverVisual;
    if ( ProjectedShadowReceiverVisual < 0 )
    {
      v6 = (unsigned int)ProjectedShadowReceiverVisual;
      v7 = 38LL;
      goto LABEL_5;
    }
    v9 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                   WPF::g_pProcessHeap,
                                                                   112LL);
    v18 = v9;
    if ( v9 )
      v9 = CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v9);
    *((_QWORD *)this + 3) = v9;
    if ( !v9 )
    {
      v5 = -2147024882;
      v6 = 2147942414LL;
      v7 = 41LL;
      goto LABEL_5;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v20);
    SharedLightByType = CGlobalLightSet::GetSharedLightByType((__int64)GlobalLightSetForDesktop, 3, &v20);
    v5 = SharedLightByType;
    if ( SharedLightByType >= 0 )
    {
      SharedLightByType = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(
                            *((_QWORD *)this + 3),
                            v20,
                            0LL);
      v5 = SharedLightByType;
      if ( SharedLightByType >= 0 )
      {
        v13 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                        WPF::g_pProcessHeap,
                                                                        112LL);
        v18 = v13;
        if ( v13 )
          v13 = CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v13);
        *((_QWORD *)this + 4) = v13;
        if ( v13 )
        {
          v21 = 0LL;
          Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v21);
          v14 = CGlobalLightSet::GetSharedLightByType((__int64)GlobalLightSetForDesktop, 4, &v21);
          v5 = v14;
          if ( v14 >= 0 )
          {
            v14 = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 4), v21, 1LL);
            v5 = v14;
            if ( v14 >= 0 )
            {
              Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v21);
              Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v20);
              v5 = 0;
              goto LABEL_27;
            }
            v15 = 52LL;
          }
          else
          {
            v15 = 51LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
            (const char *)(unsigned int)v14);
          Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v21);
          goto LABEL_14;
        }
        v5 = -2147024882;
        v12 = 2147942414LL;
        v11 = 48LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
          (const char *)v12);
LABEL_14:
        Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v20);
        goto LABEL_27;
      }
      v11 = 45LL;
    }
    else
    {
      v11 = 44LL;
    }
    v12 = (unsigned int)SharedLightByType;
    goto LABEL_13;
  }
  v5 = -2147023728;
  v6 = 2147943568LL;
  v7 = 36LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)v6);
LABEL_27:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v5;
}
