/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800259C0
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180062840 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180025920 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s @ 0x180025BEC (memcpy_s.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180025C48 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180025C8C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180025E90 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180050954 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18005DAEC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall wil::details::RecordFeatureUsageCallback(
        wil *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct _FILETIME pftDueTime)
{
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  void *v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  struct _TP_TIMER *v12; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  unsigned int v14; // r8d
  void *v15; // r9
  char *v16; // [rsp+20h] [rbp-28h] BYREF
  unsigned int Source; // [rsp+28h] [rbp-20h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v6 = (unsigned int)a1;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage((unsigned int)a1, a2, 1u);
  v7 = (_DWORD *)pftDueTime;
  if ( *(_DWORD *)pftDueTime.dwLowDateTime && wil::details::g_enabledStateManager && !wil::ProcessShutdownInProgress(a1) )
  {
    AcquireSRWLockExclusive(&stru_1801C2490);
    v16 = (char *)&stru_1801C2490;
    Source = v6;
    v18 = a4;
    v8 = (void *)*(&xmmword_1801C24B8 + 1);
    v9 = xmmword_1801C24C8;
    v10 = xmmword_1801C24C8 - xmmword_1801C24B8;
    if ( (unsigned __int64)(*(&xmmword_1801C24B8 + 1) - xmmword_1801C24B8 + 16LL) >= (_QWORD)xmmword_1801C24C8
                                                                                   - xmmword_1801C24B8 )
    {
      v11 = 16LL;
      if ( 2 * v10 > 0x10 )
        v11 = 2 * v10;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_1801C24B8, v11, v10) )
        goto LABEL_14;
      v9 = xmmword_1801C24C8;
      v8 = (void *)*(&xmmword_1801C24B8 + 1);
    }
    memcpy_s(v8, (v9 - (_QWORD)v8) & -(__int64)((unsigned __int64)v8 < v9), &Source, 0x10uLL);
    *(&xmmword_1801C24B8 + 1) += 16LL;
LABEL_14:
    if ( !byte_1801C24A0 )
    {
      v12 = pti;
      if ( pti
        || (ThreadpoolTimer = CreateThreadpoolTimer(
                                (PTP_TIMER_CALLBACK)_lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                &wil::details::g_enabledStateManager,
                                0LL),
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              &pti,
              ThreadpoolTimer),
            (v12 = pti) != 0LL) )
      {
        pftDueTime = (struct _FILETIME)-3000000000LL;
        SetThreadpoolTimer(v12, &pftDueTime, 0, 0x124F8u);
        byte_1801C24A0 = 1;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
  }
  v14 = v7[1];
  if ( v14 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, v7[2], v14, 0, v16);
  if ( !v7[4] && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_1801C2490);
    if ( !qword_1801C24B0 )
    {
      qword_1801C24B0 = 0LL;
      wil::details::WilApi_SubscribeFeatureStateChangeNotification(
        (wil::details *)&qword_1801C24B0,
        (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_,
        (void (*)(void *))0xFFFFFFFFFFFFFFFFLL,
        v15);
    }
    ReleaseSRWLockExclusive(&stru_1801C2490);
  }
}
