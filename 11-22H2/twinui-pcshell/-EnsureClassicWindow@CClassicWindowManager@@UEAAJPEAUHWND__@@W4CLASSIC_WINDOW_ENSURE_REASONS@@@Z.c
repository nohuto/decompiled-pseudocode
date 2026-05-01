/*
 * XREFs of ?EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1803A8AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180161CAC (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$EnsureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1803A81E8 (--$EnsureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1803A98FC (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::EnsureClassicWindow(
        __int64 a1,
        CApplicationManagerUtility *a2,
        unsigned int a3,
        const char *a4)
{
  RTL_SRWLOCK *v8; // rbx
  HWND v9; // rdx
  int v10; // r12d
  __int64 v11; // rsi
  void (__fastcall *v12)(__int64, CApplicationManagerUtility *, GUID *, GUID *, int *); // rdi
  unsigned int v13; // edi
  int v15[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v17; // [rsp+90h] [rbp+18h] BYREF
  PSRWLOCK v18; // [rsp+98h] [rbp+20h] BYREF

  v17 = a3;
  if ( !a3 || ((a3 - 1LL) & a3) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x89A,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      a4);
  LODWORD(v18) = (_DWORD)a2;
  CAppManagerTelemetry::EnsureClassicWindow<unsigned int,enum CLASSIC_WINDOW_ENSURE_REASONS &>((int *)&v18, (int *)&v17);
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v18 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = -(CApplicationManagerUtility::IsTrayWindowStyleCheck(a2, v9) != 0);
  *(_QWORD *)v15 = 0LL;
  if ( (int)CClassicWindowManager::_EnsureMonitorManager((CClassicWindowManager *)(a1 - 88)) >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 184);
    v12 = *(void (__fastcall **)(__int64, CApplicationManagerUtility *, GUID *, GUID *, int *))(*(_QWORD *)v11 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v15);
    v12(v11, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v15);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, CApplicationManagerUtility *, _QWORD, _QWORD, _QWORD, int, unsigned int))(*(_QWORD *)(a1 - 16) + 24LL))(
         a1 - 16,
         a2,
         0LL,
         (unsigned int)(v10 + 2),
         *(_QWORD *)v15,
         1,
         a3) )
  {
    v13 = 0;
  }
  else
  {
    v13 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8AB,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      (const char *)0x80004005LL);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v15);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return v13;
}
