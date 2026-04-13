/*
 * XREFs of ?AddRef@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180048B70
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@12@@Z @ 0x180047360 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VAppInstallInfoRecordImpl@ContentManagemen.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@12@@Z @ 0x1800473E8 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentManagementBrokerServer@ContentMana.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@12@@Z @ 0x180047470 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentManagementService@ContentManagemen.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@12@@Z @ 0x1800474F8 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@Targe.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@12@@Z @ 0x180047580 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@12@@Z @ 0x1800C253C (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@App.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003FA24 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  v4 = v2;
  if ( (*(_BYTE *)(v3 + 32) & 4) == 0 && v2 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v4;
}
