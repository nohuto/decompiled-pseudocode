/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_298607fb54b79f08d3da2d7394d86fe3___::Run @ 0x1800F3100
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_150041feadb12d29b74b347f051d22fe_::operator() @ 0x1800F3188 (_lambda_150041feadb12d29b74b347f051d22fe_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_298607fb54b79f08d3da2d7394d86fe3___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_150041feadb12d29b74b347f051d22fe_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
