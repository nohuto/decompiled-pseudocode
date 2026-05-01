/*
 * XREFs of ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180086710
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x180021DA0 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x180042E04 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18008C708 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800EA0F8 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F3074 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180105A54 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180143C9C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByHwnd@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@_KPEA_K@Z @ 0x180143D34 (--$GetAppPosition@VCImmersiveAppFinderByHwnd@@@-$CActivationBasedCollection@V-$ComPtr@UIImmersiv.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_AnalyzeShellNotification(
        CApplicationManager *this,
        struct CApplicationManager::HSHELL_DATA *a2)
{
  unsigned __int8 v4; // si
  HWND v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  ShellManagedWindowHelper *v12; // r15
  HWND v13; // rdx
  __int64 v14; // rcx
  HWND v15; // rdx
  unsigned __int64 v16; // rcx
  char v17; // al
  int v19; // ecx
  int v20; // ecx
  HWND v21; // rbx
  __int64 v22; // rax
  HWND v23; // rcx
  __int64 v24; // r8
  HWND v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // ecx
  RTL_SRWLOCK *v30; // rbx
  __int64 v31; // r8
  int App; // ecx
  int v33; // eax
  __int64 v34; // rcx
  __int64 (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // rcx
  __int64 VisibleRootOwner; // rax
  bool IsValidWindow; // al
  HWND v38; // rdx
  __int64 pvAttribute; // [rsp+30h] [rbp-40h] BYREF
  int v40; // [rsp+38h] [rbp-38h] BYREF
  PSRWLOCK v41; // [rsp+40h] [rbp-30h] BYREF
  __int64 v42; // [rsp+48h] [rbp-28h] BYREF
  int v43; // [rsp+50h] [rbp-20h]
  __int64 v44; // [rsp+58h] [rbp-18h] BYREF
  int v45; // [rsp+60h] [rbp-10h]
  int v46; // [rsp+64h] [rbp-Ch]

  if ( ((*(_QWORD *)a2 - 18LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    return 1;
  v4 = 0;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( dword_1807B4BE8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1807B4BE8);
    if ( dword_1807B4BE8 == -1 )
    {
      word_1807B3C08 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_1807B4BE8);
    }
  }
  v6 = 0LL;
  if ( (unsigned __int16)GetClassLongW(v5, -32) == word_1807B3C08 )
  {
    if ( ((*(_QWORD *)a2 - 17LL) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      v34 = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 5) = v34;
      *((_QWORD *)a2 + 1) = HungWindowFromGhostWindow(v34);
    }
    else
    {
      *((_QWORD *)a2 + 1) = 0LL;
    }
  }
  if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
  {
    v44 = 0x1300000014LL;
    v45 = 23;
    v46 = 32;
    v26 = 0LL;
    while ( *(_QWORD *)a2 != *((_DWORD *)&v44 + v26) )
    {
      if ( (unsigned __int64)++v26 >= 4 )
      {
        *((_QWORD *)a2 + 1) = 0LL;
        break;
      }
    }
  }
  v7 = *((_QWORD *)a2 + 1);
  if ( !v7 || !(unsigned int)GetWindowBand(v7, (char *)a2 + 24) )
    return v4;
  v8 = *((_QWORD *)a2 + 1);
  if ( (unsigned int)GetWindowBand(v8, &pvAttribute)
    && (((v9 = (unsigned int)pvAttribute, v10 = (unsigned int)(pvAttribute - 1), (_DWORD)pvAttribute == 1)
      || (_DWORD)pvAttribute == 8)
     && (_DWORD)pvAttribute != 1
     || (_DWORD)pvAttribute == 1 && (unsigned int)IsShellManagedWindow(v8, 1LL, v10))
    && !GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
  {
    *((_DWORD *)a2 + 4) = 2;
  }
  else
  {
    v11 = *((_DWORD *)a2 + 6);
    v12 = (ShellManagedWindowHelper *)*((_QWORD *)a2 + 1);
    if ( ((unsigned int)(v11 - 1) <= 1 || v11 == 16 || GetPropW(*((HWND *)a2 + 1), (LPCWSTR)0xA920))
      && (!(unsigned int)IsShellManagedWindow(v12, v9, v10)
       || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(v12, v13))
      || GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
    {
      *((_DWORD *)a2 + 4) = 1;
    }
    else
    {
      v28 = *((_DWORD *)a2 + 6);
      if ( v28 == 13 )
      {
        *((_DWORD *)a2 + 4) = 3;
        LOBYTE(v27) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
          v27);
        v30 = CApplicationManagerUtility::g_pIAMGlobals;
        v41 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        pvAttribute = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&pvAttribute);
        v42 = *((_QWORD *)a2 + 1);
        v43 = 2;
        if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v42, &pvAttribute, &v44) >= 0 )
          *((_DWORD *)a2 + 4) = 2;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&pvAttribute);
      }
      else
      {
        if ( v28 > 0x11 || (v29 = 131344, !_bittest(&v29, v28)) )
        {
          *((_DWORD *)a2 + 4) = 4;
          goto LABEL_15;
        }
        v30 = CApplicationManagerUtility::g_pIAMGlobals;
        v44 = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        pvAttribute = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&pvAttribute);
        v42 = *((_QWORD *)a2 + 1);
        v43 = 2;
        pvAttribute = 0LL;
        App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHwnd>(
                (char *)this + 624,
                &v42,
                v31,
                &v41);
        if ( App >= 0 )
        {
          v35 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8LL * (_QWORD)v41);
          App = (**v35)(v35, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &pvAttribute);
        }
        v33 = 4;
        if ( App >= 0 )
          v33 = 2;
        *((_DWORD *)a2 + 4) = v33;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&pvAttribute);
      }
      if ( v30 )
        ReleaseSRWLockShared(v30);
    }
  }
LABEL_15:
  *((_BYTE *)a2 + 28) = 0;
  v40 = 0;
  v14 = *((_QWORD *)this + 97);
  if ( v14
    && (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v14 + 48LL))(
         v14,
         *((unsigned int *)a2 + 2),
         0LL,
         &v40) >= 0
    && v40 == 1 )
  {
    *((_BYTE *)a2 + 28) = 1;
  }
  v15 = (HWND)*((unsigned int *)a2 + 4);
  if ( (unsigned int)((_DWORD)v15 - 2) <= 1 )
  {
    v22 = *(_QWORD *)a2;
    if ( *((_BYTE *)a2 + 20) )
    {
      if ( v22 != 24 )
      {
        VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((HWND *)a2 + 1), v22 == 21);
        *((_BYTE *)a2 + 20) = 0;
        v6 = VisibleRootOwner;
      }
      *((_QWORD *)a2 + 1) = v6;
    }
    else if ( v22 == 32 && CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v15) )
    {
      *((_QWORD *)a2 + 1) = CApplicationManagerUtility::GetVisibleRootOwner(*((HWND *)a2 + 1), 0);
    }
    v23 = (HWND)*((_QWORD *)a2 + 1);
    if ( v23 )
    {
      *((_BYTE *)a2 + 21) = 1;
      if ( *((_QWORD *)a2 + 4) )
        return 1;
      if ( *((_DWORD *)a2 + 4) != 2 )
        return 1;
      if ( *(_QWORD *)a2 > 0x1DuLL )
        return 1;
      v24 = 604110848LL;
      if ( !_bittest64(&v24, *(_QWORD *)a2)
        || (int)CallerIdentity::GetImmersiveAppIdFromWindow(v23, (HWND)a2 + 8, (unsigned __int16 **)0x24020000) >= 0 )
      {
        return 1;
      }
      IsValidWindow = CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a2 + 1), v25);
      if ( IsValidWindow
        && !CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v38)
        && DwmGetWindowAttribute(*((HWND *)a2 + 1), 0xEu, &pvAttribute, 4u) >= 0
        && !(_DWORD)pvAttribute )
      {
        (*(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                       + 24LL))(
          CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
          *((_QWORD *)a2 + 1),
          1LL);
        return 0;
      }
      return 0;
    }
  }
  else
  {
    v16 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 != 34LL )
    {
      if ( (_DWORD)v15 == 1 )
      {
        if ( v16 > 0x16 )
          goto LABEL_31;
        if ( (_DWORD)v16 != 20 )
        {
          v19 = v16 - 17;
          if ( v19 )
          {
            v20 = v19 - 4;
            if ( !v20 )
            {
LABEL_33:
              v17 = 0;
              goto LABEL_25;
            }
            if ( v20 != 1 )
            {
LABEL_31:
              v21 = (HWND)*((_QWORD *)a2 + 1);
              if ( *((_BYTE *)a2 + 20) )
              {
                if ( (GetWindowLongPtrW(v21, -20) & 0x40000) == 0 )
                  goto LABEL_33;
              }
              else if ( (GetWindowLongPtrW(v21, -20) & 0x40000) == 0 && (GetWindowLongPtrW(v21, -20) & 0x8000080) != 0 )
              {
                goto LABEL_33;
              }
            }
          }
        }
        v17 = 1;
LABEL_25:
        *((_BYTE *)a2 + 21) = v17;
        return 1;
      }
      if ( v16 == 20 )
      {
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
          return 1;
      }
      else if ( v16 > 0x1B )
      {
        return 0;
      }
      return (_DWORD)v16 != 24 && ((_DWORD)v16 == 19 || (_DWORD)v16 == 23 || (unsigned int)v16 > 0x18);
    }
  }
  return v4;
}
