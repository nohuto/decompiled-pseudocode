/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1803963B4
 * Callers:
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$6 @ 0x1802BA680 (_CApplicationManager--_HandleActivation2_--_1_--dtor$6.c)
 *     _CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor$0 @ 0x1802C02AA (_CApplicationManager--_PerformDesktopActivationCallouts_--_1_--dtor$0.c)
 *     _NotificationDispatcher::DispatchNotifications_::_1_::dtor$0 @ 0x1802C40F0 (_NotificationDispatcher--DispatchNotifications_--_1_--dtor$0.c)
 *     _CClassicWindowManager::GetIntersectingMonitors_::_1_::dtor$2 @ 0x1802C41AD (_CClassicWindowManager--GetIntersectingMonitors_--_1_--dtor$2.c)
 *     _ObservableObjectArray::ObservableObjectArray_::_1_::dtor$0 @ 0x1805646D7 (_ObservableObjectArray--ObservableObjectArray_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8 * i));
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
