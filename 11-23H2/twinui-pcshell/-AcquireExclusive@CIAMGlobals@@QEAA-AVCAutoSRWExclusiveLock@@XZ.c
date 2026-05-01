/*
 * XREFs of ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801991B4
 * Callers:
 *     ?GetAppUserModelId@CClassicWindowExternal@@UEAAJPEAPEAG@Z @ 0x180170B10 (-GetAppUserModelId@CClassicWindowExternal@@UEAAJPEAPEAG@Z.c)
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x1801D7AC0 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CIAMGlobals::AcquireExclusive(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(v2);
  return a2;
}
