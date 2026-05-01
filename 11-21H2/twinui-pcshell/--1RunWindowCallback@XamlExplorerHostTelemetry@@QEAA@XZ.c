/*
 * XREFs of ??1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x180428918
 * Callers:
 *     _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator() @ 0x180428B00 (_lambda_64960682c46b5a18a905cfbd0aa4a0cd_--operator().c)
 *     __lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator()_::_1_::dtor$0 @ 0x180428B93 (__lambda_64960682c46b5a18a905cfbd0aa4a0cd_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041D9A8 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlExplorerHostTelemetry::RunWindowCallback::~RunWindowCallback(
        XamlExplorerHostTelemetry::RunWindowCallback *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::RunWindowCallback::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
