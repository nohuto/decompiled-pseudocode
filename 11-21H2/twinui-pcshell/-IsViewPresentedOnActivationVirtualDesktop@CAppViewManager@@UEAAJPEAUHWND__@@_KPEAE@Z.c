/*
 * XREFs of ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x1802F6B50
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1800281C8 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EBCDC (--$As@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x1802FC5D4 (-_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z.c)
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
  __int64 *AddressOf; // rax
  struct IImmersiveApplicationInternal *v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktop *v17; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 1;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  GlomForWindow = CAppViewManager::_GetGlomForWindow((CAppViewManager *)((char *)this - 32), a2, &v13, (bool *)&v16);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow >= 0 )
  {
    if ( (_BYTE)v16 )
    {
      v15[0] = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::As<IImmersiveApplication>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v13,
                  v15) >= 0 )
      {
        v14 = 0LL;
        Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
        v10 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
        AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v14);
        GlomForWindow = v10(Ptr, v15[0], AddressOf);
        if ( GlomForWindow >= 0 )
        {
          v17 = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
          if ( (int)CAppViewManager::_GetVirtualDesktopForPendingActivation(
                      (CAppViewManager *)((char *)this - 32),
                      a3,
                      &v17) < 0 )
          {
            GlomForWindow = 0;
          }
          else
          {
            GlomForWindow = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int64, int *))(*(_QWORD *)v17 + 24LL))(
                              v17,
                              v14,
                              &v16);
            if ( GlomForWindow >= 0 )
              *a4 = v16 != 0;
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
    }
    else
    {
      *a4 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  return (unsigned int)GlomForWindow;
}
