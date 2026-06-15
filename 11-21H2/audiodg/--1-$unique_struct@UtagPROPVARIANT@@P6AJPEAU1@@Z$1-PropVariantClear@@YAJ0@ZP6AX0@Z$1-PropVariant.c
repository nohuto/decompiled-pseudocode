/*
 * XREFs of ??1?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x14005A490
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$33 @ 0x140036CA8 (_PublishApoTelemetry_--_1_--dtor$33.c)
 *     _PublishApoTelemetry_::_1_::dtor$34 @ 0x140036CBA (_PublishApoTelemetry_--_1_--dtor$34.c)
 *     _PublishApoTelemetry_::_1_::dtor$35 @ 0x140036CCC (_PublishApoTelemetry_--_1_--dtor$35.c)
 *     _PublishApoTelemetry_::_1_::dtor$36 @ 0x140036CDE (_PublishApoTelemetry_--_1_--dtor$36.c)
 *     _PublishApoTelemetry_::_1_::dtor$37 @ 0x140036CF0 (_PublishApoTelemetry_--_1_--dtor$37.c)
 *     _PublishApoTelemetry_::_1_::dtor$38 @ 0x140036D02 (_PublishApoTelemetry_--_1_--dtor$38.c)
 *     _PublishApoTelemetry_::_1_::dtor$39 @ 0x140036D14 (_PublishApoTelemetry_--_1_--dtor$39.c)
 *     _PublishApoTelemetry_::_1_::dtor$40 @ 0x140036D26 (_PublishApoTelemetry_--_1_--dtor$40.c)
 *     _PublishApoTelemetry_::_1_::dtor$41 @ 0x140036D38 (_PublishApoTelemetry_--_1_--dtor$41.c)
 *     _PublishApoTelemetry_::_1_::dtor$42 @ 0x140036D4A (_PublishApoTelemetry_--_1_--dtor$42.c)
 *     _PublishApoTelemetry_::_1_::dtor$43 @ 0x140036D5C (_PublishApoTelemetry_--_1_--dtor$43.c)
 *     _PublishApoTelemetry_::_1_::dtor$44 @ 0x140036D6E (_PublishApoTelemetry_--_1_--dtor$44.c)
 *     _PublishApoTelemetry_::_1_::dtor$45 @ 0x140036D80 (_PublishApoTelemetry_--_1_--dtor$45.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$0 @ 0x140038670 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$0.c)
 *     _TryGetApoDeviceIdPKey_::_1_::dtor$1 @ 0x140038A9E (_TryGetApoDeviceIdPKey_--_1_--dtor$1.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::RegisterPropertyChangeNotification_::_1_::dtor$0 @ 0x14006ADDE (_CAudioSystemEffectsPropertyChangeNotificationsHandler--RegisterPropertyChangeNotification_--_1_.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>(
        PROPVARIANT *a1)
{
  return PropVariantClear(a1);
}
