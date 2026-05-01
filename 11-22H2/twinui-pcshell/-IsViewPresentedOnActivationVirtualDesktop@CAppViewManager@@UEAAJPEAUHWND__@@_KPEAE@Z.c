/*
 * XREFs of ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x1803AFDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000D5C0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1803B6158 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x1803B713C (-_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::IsViewPresentedOnActivationVirtualDesktop(
        CAppViewManager *this,
        HWND a2,
        unsigned __int64 a3,
        bool *a4)
{
  int GlomForWindow; // ebx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v10)(PVOID, __int64, __int64 *); // rbx
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  struct IImmersiveApplicationInternal *v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktop *v16; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 1;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  GlomForWindow = CAppViewManager::_GetGlomForWindow((CAppViewManager *)((char *)this - 32), a2, &v13, (bool *)&v15);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow >= 0 )
  {
    if ( (_BYTE)v15 )
    {
      v14[0] = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v13,
                  (__int64)v14) >= 0 )
      {
        v12 = 0LL;
        Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
        v10 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
        GlomForWindow = v10(Ptr, v14[0], &v12);
        if ( GlomForWindow >= 0 )
        {
          v16 = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
          if ( (int)CAppViewManager::_GetVirtualDesktopForPendingActivation(
                      (CAppViewManager *)((char *)this - 32),
                      a3,
                      &v16) < 0 )
          {
            GlomForWindow = 0;
          }
          else
          {
            GlomForWindow = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int64, int *))(*(_QWORD *)v16 + 24LL))(
                              v16,
                              v12,
                              &v15);
            if ( GlomForWindow >= 0 )
              *a4 = v15 != 0;
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v14);
    }
    else
    {
      *a4 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  return (unsigned int)GlomForWindow;
}
