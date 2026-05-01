/*
 * XREFs of ?_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ @ 0x1802FEF8C
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x18002B740 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRealmActivationHistory::_TrySwitchToMarkedWindow(CRealmActivationHistory *this)
{
  LPARAM lParam; // [rsp+38h] [rbp+10h] BYREF

  lParam = 0LL;
  EnumWindows((WNDENUMPROC)lambda_898c08e1df1d86c3a23ee6020b72647e_::_lambda_invoker_cdecl_, (LPARAM)&lParam);
  if ( lParam )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 50) + 128LL))(*((_QWORD *)this + 50), 8LL);
  else
    return 2147943568LL;
}
