/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18000B698
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000D680 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ??$EnsureCoalescedTimerSRUM@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVFeatureStateManager@01@@Z @ 0x1800097C0 (--$EnsureCoalescedTimerSRUM@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x1800099B0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000DA7C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s @ 0x18000DED4 (memcpy_s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E180 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        wil::details::FeatureStateManager *this,
        int a2,
        unsigned __int16 a3,
        int a4)
{
  void (__stdcall *Source)(PSRWLOCK); // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  char *v10; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)this
    && !wil::details::g_processShutdownInProgress
    && (!wil::details::g_pfnDllShutdownInProgress || !(unsigned __int8)wil::details::g_pfnDllShutdownInProgress()) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 5);
    HIDWORD(Source) = a3;
    v9 = a4;
    LODWORD(Source) = a2;
    if ( wil::details_abi::heap_buffer::ensure((wil::details::FeatureStateManager *)((char *)this + 232), 0xCuLL) )
    {
      memcpy_s(
        *((void *const *)this + 30),
        (*((_QWORD *)this + 31) - *((_QWORD *)this + 30)) & -(__int64)(*((_QWORD *)this + 30) < *((_QWORD *)this + 31)),
        &Source,
        0xCuLL);
      *((_QWORD *)this + 30) += 12LL;
    }
    wil::details::EnsureCoalescedTimerSRUM<wil::details::FeatureStateManager>(
      (struct _FILETIME *)this + 7,
      (_BYTE *)this + 64,
      this);
    if ( this != (wil::details::FeatureStateManager *)-40LL )
    {
      Source = ReleaseSRWLockExclusive;
      v10 = (char *)this + 40;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>((__int64 (__fastcall **)(_QWORD))&Source, &v10);
    }
  }
}
