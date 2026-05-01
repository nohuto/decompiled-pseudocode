/*
 * XREFs of ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800232F0
 * Callers:
 *     ?SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x180023260 (-SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@.c)
 *     ?SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x1802E7820 (-SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DAT.c)
 *     ?SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x1802E78C0 (-SetApplicationPosSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x180058438 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FindEx@VCImmersiveAppFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800EC5A4 (--$FindEx@VCImmersiveAppFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicat.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800EDC98 (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_SetApplicationPos(
        __int64 a1,
        void *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  signed int Site; // ebx
  CIAMGlobals *v11; // rcx
  int v12; // edx
  char v14; // al
  int v15; // eax
  int v16; // [rsp+20h] [rbp-50h]
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  IUnknown *punk; // [rsp+A0h] [rbp+30h] BYREF
  void *ppv; // [rsp+A8h] [rbp+38h] BYREF

  punk = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&punk);
  ppv = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&ppv);
  punk = 0LL;
  v17 = 0LL;
  Site = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByApplication>(
           (int)a1 + 632,
           (unsigned int)&ppv,
           (unsigned int)&v17,
           (unsigned int)&v18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  if ( Site >= 0 )
    Site = (***(__int64 (__fastcall ****)(_QWORD, GUID *, IUnknown **))(*(_QWORD *)(a1 + 632) + 8 * v18))(
             *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8 * v18),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &punk);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
  if ( Site >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&ppv);
    Site = IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    if ( Site >= 0 )
    {
      v12 = 0;
      if ( (a4 & 0x30) != 0 )
      {
        v14 = -CIAMGlobals::IsCalledOnIAMThread(v11);
        Site = v14 == 0 ? 0x8001010E : 0;
        if ( !v14 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1057,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)Site,
            v16);
          goto LABEL_7;
        }
        if ( (((a4 & 0x30) - 1LL) & a4 & 0x30) != 0 )
        {
          Site = -2147024809;
          goto LABEL_7;
        }
        v15 = a4 & 0x10;
        a4 &= 0xFFFFFFCF;
        v12 = v15 != 0 ? 1 : 8;
      }
      Site = CApplicationManager::_SetViewPositionHelper(
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
LABEL_7:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&ppv);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&punk);
  return (unsigned int)Site;
}
