/*
 * XREFs of ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1800EA190
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800E8EF8 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800E9D98 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800EB7F8 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::HandleInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IImmersiveApplicationInternal *a5)
{
  __int64 *AddressOf; // rax
  CApplicationManager *v10; // rcx
  HRESULT v11; // ebx
  int (__fastcall *v12)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  int v13; // eax
  void (__fastcall *v14)(char *, GUID *, IUnknown **); // rbx
  IUnknown *v15; // rax
  struct IImmersiveApplicationInternal *v16; // rdi
  void (__fastcall *v17)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v19)(PVOID, __int64, __int64 *); // rbx
  __int64 *v20; // rax
  IUnknown *punk; // [rsp+30h] [rbp-20h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v27; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(v27) = 0;
  v25 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v25);
  v11 = CApplicationManager::_HandleCreation_EnsureApplicationView(v10, a2, 0LL, (struct IApplicationView **)AddressOf);
  if ( v11 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v24 = 0LL;
    v12 = *(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    if ( v12(a2, &v24) >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 224LL))(v24);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xDDA,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v13);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    punk = 0LL;
    LODWORD(v27) = 2;
    v14 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 24) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v14((char *)this - 192, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v11 = IUnknown_QueryService(
            punk,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
            &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( v11 < 0 )
      goto LABEL_12;
    v15 = 0LL;
    punk = 0LL;
    v16 = a5;
    if ( a5 )
    {
      v27 = 0LL;
      v17 = **(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      v17(v16, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v27);
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v19 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
      v20 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&punk);
      v11 = v19(Ptr, v27, v20);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      if ( v11 < 0 )
        goto LABEL_10;
      v15 = punk;
    }
    v11 = (*(__int64 (__fastcall **)(void *, __int64, struct IUnknown *, struct IPresentationRequestedArgs *, IUnknown *))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            v25,
            a3,
            a4,
            v15);
LABEL_10:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&punk);
    if ( v11 >= 0 )
      v11 = CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
              (CApplicationManager *)((char *)this - 240),
              a2);
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
  return (unsigned int)v11;
}
