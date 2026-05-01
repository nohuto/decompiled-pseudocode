/*
 * XREFs of _lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator() @ 0x1802F4494
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x1802F5750 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()(_QWORD **a1)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*a1)[15] + 176LL))((*a1)[15], *a1[1]);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
