/*
 * XREFs of ?OnTitleUpdated@CAppViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18017F570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::OnTitleUpdated(CAppViewManager *this, HWND a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rsi
  int (__fastcall *v6)(__int64, HWND, GUID *, __int64 *); // rdi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK v9; // [rsp+60h] [rbp+18h]

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = 0LL;
  v5 = *((_QWORD *)this + 11);
  v6 = *(int (__fastcall **)(__int64, HWND, GUID *, __int64 *))(*(_QWORD *)v5 + 40LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  if ( v6(v5, a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v8) >= 0 )
    (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v8 + 200LL))(v8, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
