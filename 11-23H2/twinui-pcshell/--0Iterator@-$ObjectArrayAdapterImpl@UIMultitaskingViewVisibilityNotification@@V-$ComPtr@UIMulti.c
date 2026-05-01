/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V?$ComPtr@UIMultitaskingViewVisibilityNotification@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1800509E0
 * Callers:
 *     _lambda_5dc897b16d2ec62a0cb4f80858627a7d_::operator() @ 0x1800508A0 (_lambda_5dc897b16d2ec62a0cb4f80858627a7d_--operator().c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V?$ComPtr@UIMultitaskingViewVisibilityNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180050A10 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIMultitaskingViewVisibilityNotification@@V-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IMultitaskingViewVisibilityNotification,Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityNotification>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IMultitaskingViewVisibilityNotification,Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityNotification>>::Iterator::GetCurrentObject(a1);
  return a1;
}
