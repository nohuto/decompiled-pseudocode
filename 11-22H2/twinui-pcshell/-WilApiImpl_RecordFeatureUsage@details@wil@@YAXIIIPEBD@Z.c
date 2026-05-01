/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800D2A70
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     memcpy_s @ 0x1800B56CC (memcpy_s.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800BBFF0 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x180181D3C (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1802CE6FC (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1802CE996 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18038CDFC (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18038D30C (--1last_error_context@wil@@QEAA@XZ.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x180390A3C (wil_RtlStagingConfig_RecordFeatureUsage.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, unsigned int a3)
{
  int v4; // esi
  unsigned int v5; // ebx
  __int16 v6; // bx
  __int128 v7; // kr00_16
  char *v8; // r8
  unsigned __int64 v9; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int Source; // [rsp+20h] [rbp-18h] BYREF
  __int16 v12; // [rsp+24h] [rbp-14h]
  __int16 v13; // [rsp+26h] [rbp-12h]
  unsigned int v14; // [rsp+28h] [rbp-10h]

  v4 = (int)this;
  v5 = a2 & 0x7FFFFFFF;
  if ( !(_DWORD)this && !a3 && !v5 )
  {
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
    return;
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    if ( a3 || v5 == 254 )
      wil::details::FeatureStateManager::RecordFeatureUsage(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        v5,
        a3);
    else
      wil_RtlStagingConfig_RecordFeatureUsage(this, v5, a2 >> 31);
    return;
  }
  v6 = a2;
  if ( !wil::details::g_featureStateManager
    || wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress(this) )
  {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&xmmword_18098D780 + 1);
  v13 = 0;
  Source = v4;
  v12 = v6;
  v14 = a3;
  v7 = *(_OWORD *)&Destination;
  v8 = (char *)*(&Destination + 1) - qword_18098D848;
  if ( (char *)Destination - qword_18098D848 + 12 >= (char *)*(&Destination + 1) - qword_18098D848 )
  {
    v9 = 12LL;
    if ( (unsigned __int64)(2LL * (_QWORD)v8) > 0xC )
      v9 = 2LL * (_QWORD)v8;
    if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&qword_18098D848, v9) )
      goto LABEL_16;
    v7 = *(_OWORD *)&Destination;
  }
  memcpy_s(
    (void *const)v7,
    (*((_QWORD *)&v7 + 1) - v7) & -(__int64)((unsigned __int64)v7 < *((_QWORD *)&v7 + 1)),
    &Source,
    0xCuLL);
  Destination = (char *)Destination + 12;
LABEL_16:
  if ( !(_BYTE)word_18098D7A0 )
  {
    if ( !qword_18098D798 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&Source);
      ThreadpoolTimer = CreateThreadpoolTimer(
                          _lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_,
                          &wil::details::g_featureStateManager,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)&qword_18098D798,
        ThreadpoolTimer);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&Source);
    }
    wil::details::EnsureCoalescedTimer_SetTimer(&qword_18098D798, &word_18098D7A0, 5000LL);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&xmmword_18098D780 + 1);
}
