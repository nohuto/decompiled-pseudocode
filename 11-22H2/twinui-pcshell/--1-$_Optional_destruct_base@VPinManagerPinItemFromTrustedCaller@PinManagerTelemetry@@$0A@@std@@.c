/*
 * XREFs of ??1?$_Optional_destruct_base@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@$0A@@std@@QEAA@XZ @ 0x18024F730
 * Callers:
 *     ??1?$optional@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEAA@XZ @ 0x18024F7C4 (--1-$optional@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ @ 0x18024F7D0 (--1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<PinManagerTelemetry::PinManagerPinItemFromTrustedCaller,0>::~_Optional_destruct_base<PinManagerTelemetry::PinManagerPinItemFromTrustedCaller,0>(
        PinManagerTelemetry::PinManagerPinItemFromTrustedCaller *a1)
{
  if ( *((_BYTE *)a1 + 320) )
    PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::~PinManagerPinItemFromTrustedCaller(a1);
}
