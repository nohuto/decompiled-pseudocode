/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowSnappingEvents@@V?$ComPtr@UIWindowSnappingEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180591854
 * Callers:
 *     _lambda_24ec9e02e088ddd9b3320f3956162b55_::operator() @ 0x180591F90 (_lambda_24ec9e02e088ddd9b3320f3956162b55_--operator().c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowSnappingEvents@@V?$ComPtr@UIWindowSnappingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1805933C0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowSnappingEvents@@V-$ComPtr@UIWindowSn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IWindowSnappingEvents,Microsoft::WRL::ComPtr<IWindowSnappingEvents>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IWindowSnappingEvents,Microsoft::WRL::ComPtr<IWindowSnappingEvents>>::Iterator::GetCurrentObject();
  return a1;
}
