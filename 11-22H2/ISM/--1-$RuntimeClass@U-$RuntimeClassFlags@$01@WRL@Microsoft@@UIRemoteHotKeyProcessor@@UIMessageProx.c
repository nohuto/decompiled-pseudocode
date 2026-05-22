/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRemoteHotKeyProcessor@@UIMessageProxyListener@@@WRL@Microsoft@@UEAA@XZ @ 0x180077244
 * Callers:
 *     _ShellGesturesProcessor::ShellGesturesProcessor_::_1_::dtor$0 @ 0x180082213 (_ShellGesturesProcessor--ShellGesturesProcessor_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$0 @ 0x18008231E (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$0.c)
 *     _KeyboardOverriderDispatcher::KeyboardOverriderDispatcher_::_1_::dtor$0 @ 0x18010667F (_KeyboardOverriderDispatcher--KeyboardOverriderDispatcher_--_1_--dtor$0.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$0 @ 0x1801FD78B (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
