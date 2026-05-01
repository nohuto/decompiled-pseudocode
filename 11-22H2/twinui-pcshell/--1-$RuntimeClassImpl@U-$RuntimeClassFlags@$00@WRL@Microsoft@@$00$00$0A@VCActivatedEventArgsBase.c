/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsBase@@UIStartupTaskActivatedEventArgs@Activation@ApplicationModel@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18062F2EC
 * Callers:
 *     ??1StartupTaskActivatedEventArgsImpl@@EEAA@XZ @ 0x18062F4B8 (--1StartupTaskActivatedEventArgsImpl@@EEAA@XZ.c)
 *     ??_E?$RuntimeClass@VCActivatedEventArgsBase@@UIStartupTaskActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18062F5F0 (--_E-$RuntimeClass@VCActivatedEventArgsBase@@UIStartupTaskActivatedEventArgs@Activation@Applicat.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012D4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>(
        CActivatedEventArgsBase *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 22);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release((volatile signed __int32 *)(2 * v2));
  CActivatedEventArgsBase::~CActivatedEventArgsBase(this);
}
