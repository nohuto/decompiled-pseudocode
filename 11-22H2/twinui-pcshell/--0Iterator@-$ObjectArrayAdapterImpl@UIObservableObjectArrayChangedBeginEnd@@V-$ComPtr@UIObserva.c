/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V?$ComPtr@UIObservableObjectArrayChangedBeginEnd@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802E22F0
 * Callers:
 *     ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x1802E2522 (-_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObserva.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V?$ComPtr@UIObservableObjectArrayChangedBeginEnd@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802E2330 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::GetCurrentObject();
  return a1;
}
