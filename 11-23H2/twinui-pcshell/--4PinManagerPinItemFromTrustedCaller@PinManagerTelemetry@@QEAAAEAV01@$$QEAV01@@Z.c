/*
 * XREFs of ??4PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18024F908
 * Callers:
 *     ??$?4VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@$0A@@?$optional@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEAAAEAV01@$$QEAVPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@Z @ 0x18024C184 (--$-4VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@$0A@@-$optional@VPinManagerPinItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ @ 0x18024F7D0 (--1PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18024F854 (--4-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18069DE0C (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

_QWORD *__fastcall PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::operator=(_QWORD *a1, __int64 a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  memset_0(v5, 0, sizeof(v5));
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    v5,
    a1);
  v5[0] = &PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::~PinManagerPinItemFromTrustedCaller((PinManagerTelemetry::PinManagerPinItemFromTrustedCaller *)v5);
  return a1;
}
