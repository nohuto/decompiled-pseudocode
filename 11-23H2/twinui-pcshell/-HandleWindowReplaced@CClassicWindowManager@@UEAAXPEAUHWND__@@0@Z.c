/*
 * XREFs of ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x1803A91F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x1803A8694 (Windows--Internal--ComTaskPool--QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CClassicWindowManager::HandleWindowReplaced(CClassicWindowManager *this, HWND a2, HWND a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // r15d
  void (__fastcall *v8)(char *, GUID *, IUnknown **); // rbx
  PSRWLOCK v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-30h]
  PVOID Ptr; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+38h] [rbp-18h]
  IUnknown *punk; // [rsp+98h] [rbp+48h] BYREF
  void *ppvOut; // [rsp+A0h] [rbp+50h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 48) & -(__int64)(this != (CClassicWindowManager *)88));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  if ( (unsigned int)IsShellFrameWindow(a2) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    punk = 0LL;
    v8 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 7) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v8((char *)this - 56, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    LOBYTE(v8) = IUnknown_QueryService(
                   punk,
                   &IID_IImmersiveApplicationManager,
                   &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
                   &ppvOut) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( (_BYTE)v8 )
      (*(void (__fastcall **)(void *, HWND))(*(_QWORD *)ppvOut + 160LL))(ppvOut, a2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  }
  *(_QWORD *)&v12 = a2;
  *((_QWORD *)&v12 + 1) = a3;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
    v14 = v12;
    Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___(
      v11,
      v10,
      (unsigned int)v9[15].Ptr,
      (char *)&Ptr);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&Ptr);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
}
