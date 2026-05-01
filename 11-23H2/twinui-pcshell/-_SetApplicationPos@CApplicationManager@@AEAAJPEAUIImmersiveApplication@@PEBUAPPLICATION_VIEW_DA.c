/*
 * XREFs of ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18000D2D0
 * Callers:
 *     ?SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18000D240 (-SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@.c)
 *     ?SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x18039FE30 (-SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DAT.c)
 *     ?SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x18039FED0 (-SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW.c)
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000D3F4 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000D61C (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18004DFE8 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_SetApplicationPos(
        __int64 a1,
        void *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  HRESULT First; // ebx
  CIAMGlobals *v11; // rcx
  int v12; // edx
  char v14; // al
  int v15; // eax
  int v16; // [rsp+20h] [rbp-50h]
  void *ppv[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  IUnknown *punk; // [rsp+A8h] [rbp+38h] BYREF

  punk = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&punk);
  ppv[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(ppv);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1, ppv, &punk, 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(ppv);
  if ( First >= 0 )
  {
    ppv[0] = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(ppv);
    First = IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, ppv);
    if ( First >= 0 )
    {
      v12 = 0;
      if ( (a4 & 0x30) != 0 )
      {
        v14 = -CIAMGlobals::IsCalledOnIAMThread(v11);
        First = v14 == 0 ? 0x8001010E : 0;
        if ( !v14 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1041,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)First,
            v16);
          goto LABEL_5;
        }
        if ( (((a4 & 0x30) - 1LL) & a4 & 0x30) != 0 )
        {
          First = -2147024809;
          goto LABEL_5;
        }
        v15 = a4 & 0x10;
        a4 &= 0xFFFFFFCF;
        v12 = v15 != 0 ? 1 : 8;
      }
      First = CApplicationManager::_SetViewPositionHelper(
                a1,
                0LL,
                a3,
                0LL,
                a4,
                *(_DWORD *)(a1 + 960),
                a5,
                0LL,
                a6,
                v12,
                a2,
                punk);
    }
LABEL_5:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(ppv);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&punk);
  return (unsigned int)First;
}
