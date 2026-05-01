/*
 * XREFs of ??1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18065F380
 * Callers:
 *     ?GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z @ 0x180660A40 (-GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E2C64 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall CSnapComponentTelemetry::GetAndDeleteSnapId::~GetAndDeleteSnapId(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&CSnapComponentTelemetry::GetAndDeleteSnapId::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
