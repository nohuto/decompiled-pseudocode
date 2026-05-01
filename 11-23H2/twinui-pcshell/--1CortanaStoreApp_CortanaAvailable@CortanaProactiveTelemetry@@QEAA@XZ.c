/*
 * XREFs of ??1CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180476068
 * Callers:
 *     _CortanaAvailability::CheckCortanaAvailability_::_1_::dtor$0 @ 0x1802BA1D0 (_CortanaAvailability--CheckCortanaAvailability_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C4E78 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::~CortanaStoreApp_CortanaAvailable(
        CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
