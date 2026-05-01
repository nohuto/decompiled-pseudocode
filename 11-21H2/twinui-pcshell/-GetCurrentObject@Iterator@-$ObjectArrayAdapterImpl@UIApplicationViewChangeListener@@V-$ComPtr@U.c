/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18007D460
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007C630 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800E97CC (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18031100C (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     _lambda_f3af541e54fed362ec31214e5f0f3de2_::operator() @ 0x1805B5C4C (_lambda_f3af541e54fed362ec31214e5f0f3de2_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 i; // rdx
  _DWORD *result; // rax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64, GUID *, __int64 *); // rbp
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)(a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  for ( i = *a1; ; *a1 = i )
  {
    result = (_DWORD *)*((_QWORD *)a1 + 2);
    if ( (unsigned int)i >= result[2] )
      break;
    v6 = *(_QWORD *)result;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(**(_QWORD **)result + 32LL);
    v8 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      i = *a1;
    }
    result = (_DWORD *)v7(v6, i, &GUID_727f9e97_76ee_497b_a942_b6371328485c, v2);
    if ( (int)result >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)result,
      v9);
    i = *a1 + 1;
  }
  return result;
}
