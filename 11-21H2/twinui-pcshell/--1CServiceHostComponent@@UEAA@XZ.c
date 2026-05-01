/*
 * XREFs of ??1CServiceHostComponent@@UEAA@XZ @ 0x18057EF74
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18057ECD4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFt.c)
 *     ??1StartupAppMonitor@@UEAA@XZ @ 0x18057F030 (--1StartupAppMonitor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18057F7C0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCServiceHostComponentWithGITSite@@VF.c)
 *     ??_ECServiceHostComponent@@UEAAPEAXI@Z @ 0x18057F8E0 (--_ECServiceHostComponent@@UEAAPEAXI@Z.c)
 *     ??_GCServiceHostComponentWithGITSite@@UEAAPEAXI@Z @ 0x18057F91C (--_GCServiceHostComponentWithGITSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x180152E4C (-RemoveAll@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-$CSim.c)
 */

void __fastcall CServiceHostComponent::~CServiceHostComponent(CServiceHostComponent *this)
{
  char *v1; // rbx

  *(_QWORD *)this = &CServiceHostComponent::`vftable'{for `IServiceHostComponent'};
  v1 = (char *)this + 24;
  *((_QWORD *)this + 1) = &CServiceHostComponentWithGITSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::RemoveAll((__int64)this + 24);
  CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::RemoveAll((__int64)v1);
}
