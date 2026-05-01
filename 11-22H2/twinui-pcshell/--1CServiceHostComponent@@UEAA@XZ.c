/*
 * XREFs of ??1CServiceHostComponent@@UEAA@XZ @ 0x18063DF84
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18063DCD0 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFt.c)
 *     ??1StartupAppMonitor@@UEAA@XZ @ 0x18063E0A8 (--1StartupAppMonitor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18063E7C0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VF.c)
 *     ??_ECServiceHostComponent@@UEAAPEAXI@Z @ 0x18063E8E0 (--_ECServiceHostComponent@@UEAAPEAXI@Z.c)
 *     ??_GCServiceHostComponentWithGITSite@@UEAAPEAXI@Z @ 0x18063E91C (--_GCServiceHostComponentWithGITSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@UISC_SERVICE@CServiceHostComponent@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardCompareHelper@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardMergeHelper@UISC_SERVICE@CServiceHostComponent@@@@@@QEAAXXZ @ 0x180586D58 (-RemoveAll@-$CTSimpleArray@UISC_SERVICE@CServiceHostComponent@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@U.c)
 */

void __fastcall CServiceHostComponent::~CServiceHostComponent(CServiceHostComponent *this)
{
  char *v1; // rbx

  *(_QWORD *)this = &CServiceHostComponent::`vftable'{for `IServiceHostComponent'};
  v1 = (char *)this + 24;
  *((_QWORD *)this + 1) = &CServiceHostComponentWithGITSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  CTSimpleArray<CServiceHostComponent::ISC_SERVICE,4294967294,CTPolicyCoTaskMem<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardCompareHelper<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardMergeHelper<CServiceHostComponent::ISC_SERVICE>>::RemoveAll((__int64)this + 24);
  CTSimpleArray<CServiceHostComponent::ISC_SERVICE,4294967294,CTPolicyCoTaskMem<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardCompareHelper<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardMergeHelper<CServiceHostComponent::ISC_SERVICE>>::RemoveAll((__int64)v1);
}
