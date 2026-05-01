/*
 * XREFs of ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x18002B740
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetRealmForActivation@CRealmActivationHistory@@AEAA?AUREALM_ACTIVATION@@W4IAM_APPLICATION_REALM@@@Z @ 0x18002B860 (-_GetRealmForActivation@CRealmActivationHistory@@AEAA-AUREALM_ACTIVATION@@W4IAM_APPLICATION_REAL.c)
 *     ?_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ @ 0x18002B8F0 (-_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ @ 0x1802FEF8C (-_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CRealmActivationHistory::SetActiveApp(_QWORD **a1, unsigned int a2)
{
  unsigned int v4; // ebx
  HRESULT Service; // ebx
  void (__fastcall *v8)(_QWORD **, GUID *, IUnknown **); // rbx
  unsigned int v9; // r14d
  int v10; // [rsp+20h] [rbp-30h] BYREF
  IUnknown *punk; // [rsp+28h] [rbp-28h] BYREF
  void *ppvOut[2]; // [rsp+30h] [rbp-20h] BYREF

  v10 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(_DWORD *)CRealmActivationHistory::_GetRealmForActivation(a1 - 9, ppvOut, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( a2 != 16 )
  {
    if ( (a2 & 4) != 0
      && (v4 == 2 || v4 == 1)
      && (int)CRealmActivationHistory::_EnsureLauncher((CRealmActivationHistory *)(a1 - 9)) >= 0
      && (*(int (__fastcall **)(_QWORD *, int *))(*a1[42] + 56LL))(a1[42], &v10) >= 0
      && v10 )
    {
      goto LABEL_26;
    }
    goto LABEL_7;
  }
  if ( v4 )
  {
LABEL_7:
    if ( v4 == 1 || v4 == 2 )
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1[41] + 128LL))(a1[41], v4, 0LL);
    if ( v4 != 4 )
    {
      if ( v4 != 8 )
      {
        if ( v4 != 16 )
          return (unsigned int)-2147319765;
        goto LABEL_13;
      }
      Service = CRealmActivationHistory::_TrySwitchToMarkedWindow((CRealmActivationHistory *)(a1 - 9));
      if ( Service >= 0 )
        return (unsigned int)Service;
      v9 = a2 & 0xFFFFFFF7;
      return ((unsigned int (__fastcall *)(_QWORD **, _QWORD))(*a1)[3])(a1, v9);
    }
LABEL_26:
    Service = CRealmActivationHistory::_EnsureLauncher((CRealmActivationHistory *)(a1 - 9));
    if ( Service < 0 )
      return (unsigned int)Service;
    Service = (*(__int64 (__fastcall **)(_QWORD *, int *))(*a1[42] + 56LL))(a1[42], &v10);
    if ( Service < 0 )
      return (unsigned int)Service;
    if ( v10 )
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD *))(*a1[42] + 72LL))(a1[42]);
    v9 = a2 & 0xFFFFFFFB;
    return ((unsigned int (__fastcall *)(_QWORD **, _QWORD))(*a1)[3])(a1, v9);
  }
LABEL_13:
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppvOut);
  punk = 0LL;
  v10 = 2;
  v8 = (void (__fastcall *)(_QWORD **, GUID *, IUnknown **))(*(a1 - 5))[4];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  v8(a1 - 5, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  Service = IUnknown_QueryService(
              punk,
              &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
              &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
              ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  if ( Service >= 0 )
    Service = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut[0] + 56LL))(ppvOut[0]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppvOut);
  return (unsigned int)Service;
}
