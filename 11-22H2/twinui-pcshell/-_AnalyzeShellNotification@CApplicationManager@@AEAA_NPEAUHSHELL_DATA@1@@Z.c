/*
 * XREFs of ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800C71E0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x18001D478 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003FFA0 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x180071E64 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180161C84 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018BFE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x18018CFE8 (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ?ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1801D64D4 (-ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PSSBG8dTest@@@details@wil@@QEAA_NXZ @ 0x1801D67B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PSSBG8dTest@@@details@wil@@QEAA_N.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SOLFSTest@@@details@wil@@QEAA_NXZ @ 0x1801D68AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SOLFSTest@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_AnalyzeShellNotification(
        CApplicationManager *this,
        struct CApplicationManager::HSHELL_DATA *a2)
{
  unsigned __int8 v4; // r14
  HWND v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  HWND v11; // rdx
  int *v12; // rsi
  int v13; // ecx
  ShellManagedWindowHelper *v14; // rbx
  unsigned int v15; // eax
  RTL_SRWLOCK *v16; // rbx
  int v17; // ecx
  int First; // eax
  int v19; // ecx
  __int64 v20; // rcx
  CApplicationManager *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  HWND v26; // rbx
  bool v27; // al
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // edx
  __int64 VisibleRootOwner; // rax
  __int64 v34; // [rsp+30h] [rbp-40h] BYREF
  int v35; // [rsp+38h] [rbp-38h] BYREF
  __int64 v36; // [rsp+40h] [rbp-30h] BYREF
  int v37; // [rsp+48h] [rbp-28h]
  PSRWLOCK v38; // [rsp+50h] [rbp-20h] BYREF
  __int64 v39; // [rsp+58h] [rbp-18h] BYREF
  int v40; // [rsp+60h] [rbp-10h]
  int v41; // [rsp+64h] [rbp-Ch]

  if ( ((*(_QWORD *)a2 - 18LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    return 1;
  v4 = 0;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( dword_18098F328 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18098F328);
    if ( dword_18098F328 == -1 )
    {
      word_18098D8D8 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_18098F328);
    }
  }
  v6 = 0LL;
  if ( (unsigned __int16)GetClassLongW(v5, -32) == word_18098D8D8 )
  {
    if ( ((*(_QWORD *)a2 - 17LL) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      v7 = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 5) = v7;
      *((_QWORD *)a2 + 1) = HungWindowFromGhostWindow(v7);
    }
    else
    {
      *((_QWORD *)a2 + 1) = 0LL;
    }
  }
  if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
  {
    v39 = 0x1300000014LL;
    v40 = 23;
    v41 = 32;
    v8 = 0LL;
    while ( *(_QWORD *)a2 != *((_DWORD *)&v39 + v8) )
    {
      if ( (unsigned __int64)++v8 >= 4 )
      {
        *((_QWORD *)a2 + 1) = 0LL;
        break;
      }
    }
  }
  v9 = *((_QWORD *)a2 + 1);
  if ( !v9 || !(unsigned int)GetWindowBand(v9, (char *)a2 + 24) )
    return v4;
  v10 = *((_QWORD *)a2 + 1);
  if ( (unsigned int)GetWindowBand(v10, &v34)
    && (((_DWORD)v34 == 1 || (_DWORD)v34 == 8) && (_DWORD)v34 != 1
     || (_DWORD)v34 == 1 && (unsigned int)IsShellManagedWindow(v10))
    && !GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SOLFSTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SOLFSTest>::GetImpl'::`2'::impl)
      || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PSSBG8dTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PSSBG8dTest>::GetImpl'::`2'::impl) )
    {
      v12 = (int *)((char *)a2 + 16);
      if ( ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsCharm(*((HWND *)a2 + 1), v11) )
      {
        *v12 = 3;
        goto LABEL_46;
      }
    }
    else
    {
      v12 = (int *)((char *)a2 + 16);
    }
    *v12 = 2;
  }
  else
  {
    v13 = *((_DWORD *)a2 + 6);
    v14 = (ShellManagedWindowHelper *)*((_QWORD *)a2 + 1);
    if ( ((unsigned int)(v13 - 1) <= 1 || v13 == 16 || GetPropW(*((HWND *)a2 + 1), (LPCWSTR)0xA920))
      && (!(unsigned int)IsShellManagedWindow(v14)
       || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(v14, v11))
      || GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
    {
      v12 = (int *)((char *)a2 + 16);
      *((_DWORD *)a2 + 4) = 1;
      goto LABEL_46;
    }
    v15 = *((_DWORD *)a2 + 6);
    if ( v15 == 13 )
    {
      v12 = (int *)((char *)a2 + 16);
      *((_DWORD *)a2 + 4) = 3;
      LOBYTE(v11) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        v11);
      v16 = CApplicationManagerUtility::g_pIAMGlobals;
      v38 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v34 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
      v36 = *((_QWORD *)a2 + 1);
      v37 = 2;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                  (__int64)this,
                  (__int64)&v36,
                  &v34,
                  &v39) >= 0 )
        *v12 = 2;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
    }
    else
    {
      if ( v15 > 0x11 || (v17 = 131344, !_bittest(&v17, v15)) )
      {
        v12 = (int *)((char *)a2 + 16);
        *((_DWORD *)a2 + 4) = 4;
        goto LABEL_46;
      }
      v16 = CApplicationManagerUtility::g_pIAMGlobals;
      v39 = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v34 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
      v36 = *((_QWORD *)a2 + 1);
      v37 = 2;
      v12 = (int *)((char *)a2 + 16);
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                (__int64)this,
                (__int64)&v36,
                &v34,
                &v38);
      v19 = 4;
      if ( First >= 0 )
        v19 = 2;
      *v12 = v19;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
    }
    if ( v16 )
      ReleaseSRWLockShared(v16);
  }
LABEL_46:
  *((_BYTE *)a2 + 28) = 0;
  v35 = 0;
  v20 = *((_QWORD *)this + 97);
  if ( v20
    && (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v20 + 48LL))(
         v20,
         *((unsigned int *)a2 + 2),
         0LL,
         &v35) >= 0
    && v35 == 1 )
  {
    *((_BYTE *)a2 + 28) = 1;
  }
  v21 = (CApplicationManager *)(unsigned int)*v12;
  v22 = *(_QWORD *)a2;
  if ( (unsigned int)((_DWORD)v21 - 2) <= 1 )
  {
    if ( !*((_BYTE *)a2 + 20) )
    {
      if ( v22 == 32 && CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v11) )
        *((_QWORD *)a2 + 1) = CApplicationManagerUtility::GetVisibleRootOwner(*((HWND *)a2 + 1), 0);
      goto LABEL_84;
    }
    if ( v22 == 21 )
    {
      v32 = 1;
    }
    else
    {
      if ( v22 == 24 )
      {
LABEL_80:
        *((_QWORD *)a2 + 1) = v6;
LABEL_84:
        if ( *((_QWORD *)a2 + 1) )
        {
          *((_BYTE *)a2 + 21) = 1;
          return (int)CApplicationManager::_ComputeApplicationId(v21, a2) >= 0;
        }
        return v4;
      }
      v32 = 0;
    }
    VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((HWND *)a2 + 1), v32);
    *((_BYTE *)a2 + 20) = 0;
    v6 = VisibleRootOwner;
    goto LABEL_80;
  }
  if ( v22 != 34 )
  {
    if ( (_DWORD)v21 != 1 )
    {
      if ( v22 == 20 )
      {
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
          return 1;
      }
      else
      {
        v29 = v22 - 19;
        if ( !v29 )
          return 1;
        v30 = v29 - 4;
        if ( !v30 )
          return 1;
        v31 = v30 - 2;
        if ( !v31 || (unsigned __int64)(v31 - 1) < 2 )
          return 1;
      }
      return 0;
    }
    v23 = v22 - 17;
    if ( v23 )
    {
      v24 = v23 - 3;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( !v25 )
          goto LABEL_61;
        if ( v25 != 1 )
        {
          v26 = (HWND)*((_QWORD *)a2 + 1);
          if ( *((_BYTE *)a2 + 20) )
          {
            v27 = (GetWindowLongPtrW(v26, -20) & 0x40000) != 0;
LABEL_63:
            *((_BYTE *)a2 + 21) = v27;
            return 1;
          }
          if ( (GetWindowLongPtrW(v26, -20) & 0x40000) == 0 && (GetWindowLongPtrW(v26, -20) & 0x8000080) != 0 )
          {
LABEL_61:
            v27 = 0;
            goto LABEL_63;
          }
        }
      }
    }
    v27 = 1;
    goto LABEL_63;
  }
  return v4;
}
