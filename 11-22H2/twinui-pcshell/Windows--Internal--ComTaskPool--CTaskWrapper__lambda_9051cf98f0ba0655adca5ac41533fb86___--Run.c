/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::Run @ 0x1800557D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator() @ 0x180055858 (_lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9051cf98f0ba0655adca5ac41533fb86___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
