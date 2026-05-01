/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d59b2ed99ba916e2db13f1aaa48dcee4___::Run @ 0x18015DB10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5dab257c522e08d01cbef6f530503167_::operator() @ 0x18015DB98 (_lambda_5dab257c522e08d01cbef6f530503167_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d59b2ed99ba916e2db13f1aaa48dcee4___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_5dab257c522e08d01cbef6f530503167_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
