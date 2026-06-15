/*
 * XREFs of ??1?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x14005D158
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$44 @ 0x14002D22F (_PublishApoTelemetry_--_1_--dtor$44.c)
 *     _PublishApoTelemetry_::_1_::dtor$45 @ 0x14002D23B (_PublishApoTelemetry_--_1_--dtor$45.c)
 *     _PublishApoTelemetry_::_1_::dtor$46 @ 0x14002D247 (_PublishApoTelemetry_--_1_--dtor$46.c)
 *     _PublishApoTelemetry_::_1_::dtor$47 @ 0x14002D253 (_PublishApoTelemetry_--_1_--dtor$47.c)
 *     _PublishApoTelemetry_::_1_::dtor$48 @ 0x14002D25F (_PublishApoTelemetry_--_1_--dtor$48.c)
 *     _PublishApoTelemetry_::_1_::dtor$49 @ 0x14002D26B (_PublishApoTelemetry_--_1_--dtor$49.c)
 *     _PublishApoTelemetry_::_1_::dtor$50 @ 0x14002D277 (_PublishApoTelemetry_--_1_--dtor$50.c)
 *     _PublishApoTelemetry_::_1_::dtor$51 @ 0x14002D283 (_PublishApoTelemetry_--_1_--dtor$51.c)
 *     _PublishApoTelemetry_::_1_::dtor$52 @ 0x14002D28F (_PublishApoTelemetry_--_1_--dtor$52.c)
 *     _PublishApoTelemetry_::_1_::dtor$53 @ 0x14002D29B (_PublishApoTelemetry_--_1_--dtor$53.c)
 *     _PublishApoTelemetry_::_1_::dtor$54 @ 0x14002D2A7 (_PublishApoTelemetry_--_1_--dtor$54.c)
 *     _PublishApoTelemetry_::_1_::dtor$55 @ 0x14002D2B3 (_PublishApoTelemetry_--_1_--dtor$55.c)
 *     _PublishApoTelemetry_::_1_::dtor$56 @ 0x14002D2BF (_PublishApoTelemetry_--_1_--dtor$56.c)
 *     _GetEffectPackDevNodeId_::_1_::dtor$1 @ 0x14002E709 (_GetEffectPackDevNodeId_--_1_--dtor$1.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$0 @ 0x140035783 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$0.c)
 *     _TryGetApoDeviceIdPKey_::_1_::dtor$1 @ 0x140035B6C (_TryGetApoDeviceIdPKey_--_1_--dtor$1.c)
 *     _GetModuleName_::_1_::dtor$1 @ 0x140065A35 (_GetModuleName_--_1_--dtor$1.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::RegisterPropertyChangeNotification_::_1_::dtor$0 @ 0x1400733A5 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--RegisterPropertyChangeNotification_--_1_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>(
        PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
