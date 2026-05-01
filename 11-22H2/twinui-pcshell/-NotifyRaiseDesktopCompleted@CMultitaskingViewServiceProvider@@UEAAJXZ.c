/*
 * XREFs of ?NotifyRaiseDesktopCompleted@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x18005EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewServiceProvider::NotifyRaiseDesktopCompleted(
        CMultitaskingViewServiceProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewServiceProvider *)88));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v2, 1LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 80LL))(*((_QWORD *)this + 11));
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}
