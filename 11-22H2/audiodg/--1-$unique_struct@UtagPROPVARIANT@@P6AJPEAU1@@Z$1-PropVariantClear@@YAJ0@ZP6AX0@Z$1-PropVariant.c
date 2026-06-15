/*
 * XREFs of ??1?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x14005D1A8
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$44 @ 0x14002D26F (_PublishApoTelemetry_--_1_--dtor$44.c)
 *     _PublishApoTelemetry_::_1_::dtor$45 @ 0x14002D27B (_PublishApoTelemetry_--_1_--dtor$45.c)
 *     _PublishApoTelemetry_::_1_::dtor$46 @ 0x14002D287 (_PublishApoTelemetry_--_1_--dtor$46.c)
 *     _PublishApoTelemetry_::_1_::dtor$47 @ 0x14002D293 (_PublishApoTelemetry_--_1_--dtor$47.c)
 *     _PublishApoTelemetry_::_1_::dtor$48 @ 0x14002D29F (_PublishApoTelemetry_--_1_--dtor$48.c)
 *     _PublishApoTelemetry_::_1_::dtor$49 @ 0x14002D2AB (_PublishApoTelemetry_--_1_--dtor$49.c)
 *     _PublishApoTelemetry_::_1_::dtor$50 @ 0x14002D2B7 (_PublishApoTelemetry_--_1_--dtor$50.c)
 *     _PublishApoTelemetry_::_1_::dtor$51 @ 0x14002D2C3 (_PublishApoTelemetry_--_1_--dtor$51.c)
 *     _PublishApoTelemetry_::_1_::dtor$52 @ 0x14002D2CF (_PublishApoTelemetry_--_1_--dtor$52.c)
 *     _PublishApoTelemetry_::_1_::dtor$53 @ 0x14002D2DB (_PublishApoTelemetry_--_1_--dtor$53.c)
 *     _PublishApoTelemetry_::_1_::dtor$54 @ 0x14002D2E7 (_PublishApoTelemetry_--_1_--dtor$54.c)
 *     _PublishApoTelemetry_::_1_::dtor$55 @ 0x14002D2F3 (_PublishApoTelemetry_--_1_--dtor$55.c)
 *     _PublishApoTelemetry_::_1_::dtor$56 @ 0x14002D2FF (_PublishApoTelemetry_--_1_--dtor$56.c)
 *     _GetEffectPackDevNodeId_::_1_::dtor$1 @ 0x14002E749 (_GetEffectPackDevNodeId_--_1_--dtor$1.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$0 @ 0x1400357C3 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$0.c)
 *     _TryGetApoDeviceIdPKey_::_1_::dtor$1 @ 0x140035BAC (_TryGetApoDeviceIdPKey_--_1_--dtor$1.c)
 *     _GetModuleName_::_1_::dtor$1 @ 0x140065A85 (_GetModuleName_--_1_--dtor$1.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::RegisterPropertyChangeNotification_::_1_::dtor$0 @ 0x1400733F5 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--RegisterPropertyChangeNotification_--_1_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>(
        PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
