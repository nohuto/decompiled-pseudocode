/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::Run @ 0x18004F7A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x18004F828 (_lambda_201adf67891f12ccd8a16b46f471aeff_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_201adf67891f12ccd8a16b46f471aeff_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
