/*
 * XREFs of ?AddBehaviorFlags@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0003@@@Z @ 0x180190390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::AddBehaviorFlags(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LOBYTE(v4) = 1;
  LODWORD(a1) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 24) + 240LL))(a1 + 24, v4, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)a1;
}
