/*
 * XREFs of ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801232BC
 * Callers:
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x180038DF0 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_102eb91890a206a003c0de1a94bbc83e___ @ 0x1800544E4 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEachBackw.c)
 *     ?_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x180054878 (-_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImme.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1801759E4 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x1802E2AB0 (-ForgetAllApplications@CApplicationManager@@UEAAXXZ.c)
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E2B40 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1802E2C10 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E2CF0 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E8FE0 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x1802E94A4 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180055A84 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByHostId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@_KPEA_K@Z @ 0x1800E92E0 (--$GetAppPosition@VCImmersiveAppFinderByHostId@@@-$CActivationBasedCollection@V-$ComPtr@UIImmers.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180124BBC (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x180125330 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1802EC2E4 (WPP_SF_S.c)
 *     WPP_SF_qSdL @ 0x1802EC4D4 (WPP_SF_qSdL.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_ForgetApplicationNoLock(
        CApplicationManager *a1,
        struct IImmersiveApplicationInternal *a2,
        unsigned int a3)
{
  char v3; // di
  int (__fastcall *v6)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  __int64 v7; // r8
  const unsigned __int16 *v8; // rax
  void (__fastcall *v9)(char *, unsigned __int64 *); // rbx
  int (__fastcall *v10)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *); // rbx
  unsigned int i; // r14d
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, _QWORD, GUID *, unsigned __int64 *); // rdi
  char v15; // bl
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  HWND v25; // [rsp+58h] [rbp-8h] BYREF
  char v26; // [rsp+98h] [rbp+38h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a3;
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, char *))(*(_QWORD *)a2 + 152LL))(a2, a3, &v26);
  CApplicationManager::_RemoveApplication(a1, a2);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v15 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 160LL))(a2);
    v16 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
    WPP_SF_qSdL(*((_QWORD *)WPP_GLOBAL_Control + 2), v17, v18, (_DWORD)a2, v16, v15, v3);
  }
  v24 = -1LL;
  v23 = 0LL;
  v6 = **(int (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  if ( v6(a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v23) >= 0
    && (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v24) >= 0 )
  {
    v27 = v24;
    if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHostId>(
                (int)a1 + 624,
                (int)&v27,
                v7,
                (int)&v25) < 0 )
    {
      v8 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
      CApplicationManager::_DeleteApplicationData(a1, v8, &v24);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v19 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v20, v21, v19);
      }
    }
  }
  if ( v26 )
  {
    v9 = *(void (__fastcall **)(char *, unsigned __int64 *))(*((_QWORD *)a1 + 88) + 8LL);
    v27 = (unsigned __int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
    v9((char *)a1 + 704, &v27);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
    v22 = 0LL;
    v10 = *(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 352LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
    if ( v10(a2, 1LL, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, &v22) >= 0 )
    {
      v27 = 0LL;
      for ( i = 0; ; ++i )
      {
        v12 = v22;
        v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, unsigned __int64 *))(*(_QWORD *)v22 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
        if ( v13(v12, i, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v27) < 0 )
          break;
        if ( (*(int (__fastcall **)(unsigned __int64, HWND *))(*(_QWORD *)v27 + 32LL))(v27, &v25) >= 0 )
          CApplicationManager::_UpdatePerApplicationDataIfNeeded(
            (__int64)a1,
            (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
            v25,
            1);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
}
