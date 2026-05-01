/*
 * XREFs of _lambda_ac4863598604ec72e89080dc7a8a9967_::operator() @ 0x18004C460
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___::Run @ 0x18004C450 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___--Run.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_ac4863598604ec72e89080dc7a8a9967_::operator()(__int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
