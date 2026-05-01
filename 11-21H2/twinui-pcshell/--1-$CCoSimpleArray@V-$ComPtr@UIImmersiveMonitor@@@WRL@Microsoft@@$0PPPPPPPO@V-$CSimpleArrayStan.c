/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1802DF664
 * Callers:
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$6 @ 0x180218CE0 (_CApplicationManager--_HandleActivation2_--_1_--dtor$6.c)
 *     _CClassicWindowManager::GetIntersectingMonitors_::_1_::dtor$2 @ 0x18021ED46 (_CClassicWindowManager--GetIntersectingMonitors_--_1_--dtor$2.c)
 *     _CApplicationManager::_PerformDesktopActivationCallouts_::_1_::dtor$0 @ 0x1802206BB (_CApplicationManager--_PerformDesktopActivationCallouts_--_1_--dtor$0.c)
 *     _ObservableObjectArray::ObservableObjectArray_::_1_::dtor$0 @ 0x1804A6FA3 (_ObservableObjectArray--ObservableObjectArray_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      do
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8 * v3++));
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
