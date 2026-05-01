/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800F71E0
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18018FF78 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800F75AC (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x18017C7D8 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     _invalid_parameter_noinfo @ 0x180188E82 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1802D9A88 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall wil::details::RecordFeatureUsageCallback(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        _DWORD *a5)
{
  _OWORD *v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  size_t v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v17; // r8d
  char *v18[2]; // [rsp+20h] [rbp-18h]

  if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1u);
  if ( *a5
    && wil::details::g_enabledStateManager
    && !wil::details::g_processShutdownInProgress
    && (!wil::details::g_pfnDllShutdownInProgress || !(unsigned __int8)wil::details::g_pfnDllShutdownInProgress()) )
  {
    AcquireSRWLockExclusive(&SRWLock);
    LODWORD(v18[0]) = a1;
    v18[1] = a4;
    v7 = (_OWORD *)*(&xmmword_1807B3BC8 + 1);
    v8 = *(&xmmword_1807B3BC8 + 1) - xmmword_1807B3BC8 + 16LL;
    v9 = xmmword_1807B3BD8;
    v10 = xmmword_1807B3BD8 - xmmword_1807B3BC8;
    if ( v8 >= (_QWORD)xmmword_1807B3BD8 - xmmword_1807B3BC8 )
    {
      v11 = 16LL;
      if ( (unsigned __int64)(2 * v10) > 0x10 )
        v11 = 2 * v10;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_1807B3BC8, v11) )
        goto LABEL_24;
      v9 = xmmword_1807B3BD8;
      v7 = (_OWORD *)*(&xmmword_1807B3BC8 + 1);
    }
    v12 = 0LL;
    if ( (unsigned __int64)v7 < v9 )
      v12 = v9 - (_QWORD)v7;
    if ( v7 )
    {
      if ( v12 >= 0x10 )
      {
        *v7 = *(_OWORD *)v18;
LABEL_23:
        *(&xmmword_1807B3BC8 + 1) += 16LL;
LABEL_24:
        if ( !byte_1807B3BB0 )
        {
          if ( !qword_1807B3BA8 )
          {
            ThreadpoolTimer = CreateThreadpoolTimer(
                                _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                &wil::details::g_enabledStateManager,
                                0LL);
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              (struct _TP_TIMER **)&qword_1807B3BA8,
              ThreadpoolTimer);
          }
          wil::details::EnsureCoalescedTimer_SetTimer(&qword_1807B3BA8, &byte_1807B3BB0, 300000LL);
        }
        ReleaseSRWLockExclusive(&SRWLock);
        goto LABEL_29;
      }
      memset_0(v7, 0, v12);
      *(_DWORD *)_o__errno(v14, v13, v15) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v8, v9, v12) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_23;
  }
LABEL_29:
  v17 = a5[1];
  if ( v17 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a1, a5[2], v17, 0, v18[0]);
  if ( !a5[4] && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_1807B3BC0 )
    {
      qword_1807B3BC0 = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification )
      {
        g_wil_details_internalSubscribeFeatureStateChangeNotification(
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&qword_1807B3BC0,
          (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
          (void *)0xFFFFFFFFFFFFFFFFLL);
      }
      else if ( g_wil_details_apiSubscribeFeatureStateChangeNotification )
      {
        g_wil_details_apiSubscribeFeatureStateChangeNotification(
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&qword_1807B3BC0,
          (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
          (void *)0xFFFFFFFFFFFFFFFFLL);
      }
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
}
