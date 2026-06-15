/*
 * XREFs of ??1init_once_completer@details@wil@@QEAA@XZ @ 0x1800E7BB0
 * Callers:
 *     _wil::init_once__lambda_be556cb3b146703253ec008872e87b88____::_1_::dtor$0 @ 0x180073152 (_wil--init_once__lambda_be556cb3b146703253ec008872e87b88____--_1_--dtor$0.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$35 @ 0x180079F78 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$35.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::init_once_completer::~init_once_completer(wil::details::init_once_completer *this)
{
  InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL);
}
