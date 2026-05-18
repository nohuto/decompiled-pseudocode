/*
 * XREFs of ??$EnsureCoalescedTimerSRUM@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVFeatureStateManager@01@@Z @ 0x1800097C0
 * Callers:
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18000B698 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@Z @ 0x1800099D0 (--$invoke@P6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_TP_TIMER@@@ZAEAPEAU1@@Z.c)
 */

void __fastcall wil::details::EnsureCoalescedTimerSRUM<wil::details::FeatureStateManager>(
        struct _FILETIME *a1,
        _BYTE *a2,
        void *a3)
{
  struct _TP_TIMER *ThreadpoolTimer; // rdi
  DWORD LastError; // ebx
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall *v8)(PTP_TIMER); // [rsp+58h] [rbp+20h] BYREF

  if ( !*a2 )
  {
    ThreadpoolTimer = (struct _TP_TIMER *)*a1;
    if ( *a1 )
      goto LABEL_6;
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)_lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_,
                        a3,
                        0LL);
    if ( *a1 )
    {
      pftDueTime = *a1;
      LastError = GetLastError();
      v8 = wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy;
      wistd::invoke<void (*)(_TP_TIMER *),_TP_TIMER * &>(&v8, &pftDueTime);
      SetLastError(LastError);
    }
    *a1 = (struct _FILETIME)ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
LABEL_6:
      pftDueTime = (struct _FILETIME)-50000000LL;
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x4E2u);
      *a2 = 1;
    }
  }
}
