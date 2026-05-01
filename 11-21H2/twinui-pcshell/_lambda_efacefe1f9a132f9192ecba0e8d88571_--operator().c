/*
 * XREFs of _lambda_efacefe1f9a132f9192ecba0e8d88571_::operator() @ 0x18030D850
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efacefe1f9a132f9192ecba0e8d88571___::Run @ 0x18030D9D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efacefe1f9a132f9192ecba0e8d88571___--Run.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_efacefe1f9a132f9192ecba0e8d88571_::operator()(__int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 120LL) + 224LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
