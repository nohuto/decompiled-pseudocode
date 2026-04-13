/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18003F414
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180043F20 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180031A58 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180048AAC (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        struct wil_details_FeatureReportingCache *a3)
{
  struct _TP_TIMER *Ptr; // rsi
  struct _TP_TIMER *v7; // r14
  DWORD LastError; // ebx
  int Source; // [rsp+20h] [rbp-28h] BYREF
  struct wil_details_FeatureReportingCache *v10; // [rsp+28h] [rbp-20h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr)
    && !wil::details::g_processShutdownInProgress
    && (!wil::details::g_pfnDllShutdownInProgress || !(unsigned __int8)wil::details::g_pfnDllShutdownInProgress()) )
  {
    AcquireSRWLockExclusive(pv + 1);
    Source = a2;
    v10 = a3;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[6], 0x10uLL) )
    {
      memcpy_s(pv[7].Ptr, ((char *)pv[8].Ptr - (char *)pv[7].Ptr) & -(__int64)(pv[7].Ptr < pv[8].Ptr), &Source, 0x10uLL);
      pv[7].Ptr = (char *)pv[7].Ptr + 16;
    }
    if ( !LOBYTE(pv[3].Ptr) )
    {
      Ptr = (struct _TP_TIMER *)pv[2].Ptr;
      if ( Ptr )
        goto LABEL_12;
      Ptr = CreateThreadpoolTimer(
              (PTP_TIMER_CALLBACK)_lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
              pv,
              0LL);
      v7 = (struct _TP_TIMER *)pv[2].Ptr;
      if ( v7 )
      {
        LastError = GetLastError();
        wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v7);
        SetLastError(LastError);
      }
      pv[2].Ptr = Ptr;
      if ( Ptr )
      {
LABEL_12:
        pftDueTime = (struct _FILETIME)-3000000000LL;
        SetThreadpoolTimer(Ptr, &pftDueTime, 0, 0x124F8u);
        LOBYTE(pv[3].Ptr) = 1;
      }
    }
    if ( pv != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(pv + 1);
  }
}
