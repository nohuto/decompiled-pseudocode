/*
 * XREFs of ??1?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAA@XZ @ 0x1800A1064
 * Callers:
 *     _InputStateManager::InputStateManager_::_1_::dtor$4 @ 0x18006F1C5 (_InputStateManager--InputStateManager_--_1_--dtor$4.c)
 *     _CursorNotificationProcessor::Initialize_::_1_::dtor$1 @ 0x18006F22B (_CursorNotificationProcessor--Initialize_--_1_--dtor$1.c)
 *     _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::dtor$1 @ 0x18006F9B6 (_CursorNotificationProcessor--CheckAndEnsureCursorManagerClient_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>(
        wil::details **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    a1,
    0LL,
    a3);
}
