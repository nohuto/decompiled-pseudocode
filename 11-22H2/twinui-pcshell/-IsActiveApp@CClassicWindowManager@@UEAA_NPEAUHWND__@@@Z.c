/*
 * XREFs of ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1802D0130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18004D928 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall CClassicWindowManager::IsActiveApp(struct IUnknown ***this, HWND a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r15d
  bool v6; // si
  struct IUnknown *v7; // rbx
  struct IClassicWindow *v9; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp+40h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)(this + 8) & -(__int64)(this != (struct IUnknown ***)72));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = 0;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  if ( (int)CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)(this - 9), a2, &v9, &v10) >= 0 )
  {
    if ( v10 )
    {
      v6 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 160LL))(v9) )
      {
        v7 = *(struct IUnknown **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 96LL))(v9);
        v10 = (unsigned __int64)v7;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
        if ( v7 )
          v6 = (unsigned int)SHIsSameObject(v7, *this[15]) != 0;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
      }
    }
    else
    {
      v6 = 1;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v6;
}
