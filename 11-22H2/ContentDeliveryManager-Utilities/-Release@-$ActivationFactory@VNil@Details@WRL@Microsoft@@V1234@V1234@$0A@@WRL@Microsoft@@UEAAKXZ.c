/*
 * XREFs of ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004B0E0
 * Callers:
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180046980 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentMan.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180046A30 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentManagementBrokerServer@Conte.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180046AE0 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentManagementService@ContentMan.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180046B90 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180046C40 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransiti.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@12@@Z @ 0x180047360 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagemen.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@12@@Z @ 0x1800473E8 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentMana.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@12@@Z @ 0x180047470 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentManagementService@ContentManagemen.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@12@@Z @ 0x1800474F8 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@Targe.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@12@@Z @ 0x180047580 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800C2490 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvid.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@12@@Z @ 0x1800C253C (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@App.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F9F8 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // edi
  _DWORD *v3; // r11
  int v4; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  v4 = v3[8] & 4;
  if ( v2 )
  {
    if ( !v4 && v2 == 1 && Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  else
  {
    if ( v3 )
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, v2 + 1);
    if ( v4 && Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  return v2;
}
