/*
 * XREFs of ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18000F300
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18000E474 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180010B9C (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180010D50 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::HandleInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IImmersiveApplicationInternal *a5)
{
  CApplicationManager *v9; // rcx
  HRESULT v10; // ebx
  int (__fastcall *v11)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  int v12; // eax
  void (__fastcall *v13)(char *, GUID *, IUnknown **); // rbx
  IUnknown *v14; // rax
  struct IImmersiveApplicationInternal *v15; // rdi
  void (__fastcall *v17)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v19)(PVOID, __int64, IUnknown **); // rbx
  int v20; // [rsp+20h] [rbp-30h]
  IUnknown *punk; // [rsp+30h] [rbp-20h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  struct IApplicationView *v24; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(v26) = 0;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
  v10 = CApplicationManager::_HandleCreation_EnsureApplicationView(v9, a2, 0LL, &v24);
  if ( v10 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v23 = 0LL;
    v11 = *(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    if ( v11(a2, &v23) >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 224LL))(v23);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xDAB,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v12,
          v20);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
    punk = 0LL;
    LODWORD(v26) = 2;
    v13 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 24) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    v13((char *)this - 192, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v10 = IUnknown_QueryService(
            punk,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1,
            &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    if ( v10 < 0 )
      goto LABEL_10;
    v14 = 0LL;
    punk = 0LL;
    v15 = a5;
    if ( a5 )
    {
      v26 = 0LL;
      v17 = **(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a5;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      v17(v15, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v26);
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v19 = *(__int64 (__fastcall **)(PVOID, __int64, IUnknown **))(*(_QWORD *)Ptr + 56LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&punk);
      v10 = v19(Ptr, v26, &punk);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      if ( v10 < 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&punk);
        if ( v10 >= 0 )
          v10 = CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
                  (CApplicationManager *)((char *)this - 240),
                  a2);
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
        goto LABEL_11;
      }
      v14 = punk;
    }
    v10 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IUnknown *, struct IPresentationRequestedArgs *, IUnknown *))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            v24,
            a3,
            a4,
            v14);
    goto LABEL_8;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
  return (unsigned int)v10;
}
