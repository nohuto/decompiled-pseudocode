/*
 * XREFs of ?QueryInterface@StartupTaskActivatedEventArgsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180573AA0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsBase@@UIStartupTaskActivatedEventArgs@Activation@ApplicationModel@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020DF90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivated.c)
 *     ?QueryInterface@StartupTaskActivatedEventArgsImpl@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020DFB0 (-QueryInterface@StartupTaskActivatedEventArgsImpl@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@StartupTaskActivatedEventArgsImpl@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020DFD0 (-QueryInterface@StartupTaskActivatedEventArgsImpl@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@StartupTaskActivatedEventArgsImpl@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020DFF0 (-QueryInterface@StartupTaskActivatedEventArgsImpl@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@StartupTaskActivatedEventArgsImpl@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020E010 (-QueryInterface@StartupTaskActivatedEventArgsImpl@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsBase@@UIStartupTaskActivatedEventArgs@Activation@ApplicationModel@Windows@@@Details@WRL@Microsoft@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020E030 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_18020E030.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall StartupTaskActivatedEventArgsImpl::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>>(
           this,
           a2,
           a3);
}
