/*
 * XREFs of ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180103540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801043A8 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::SetCloak(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v8; // edi
  int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = 0;
  v12 = 0LL;
  if ( (a4 & 1) == 0 )
    goto LABEL_4;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  v12 = 0LL;
  v14 = a2;
  v13 = 0LL;
  v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
         (int)a1 + 96,
         (unsigned int)&v14,
         (unsigned int)&v13,
         (unsigned int)&v15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  if ( v9 >= 0 )
  {
    v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 96) + 8 * v15);
    v9 = (**v10)(v10, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v12);
    if ( v9 >= 0 )
    {
LABEL_4:
      LOBYTE(v8) = a3 != 0;
      v9 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                             + 24LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             a2,
             v8);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return (unsigned int)v9;
}
