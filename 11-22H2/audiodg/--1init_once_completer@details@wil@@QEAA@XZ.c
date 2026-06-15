/*
 * XREFs of ??1init_once_completer@details@wil@@QEAA@XZ @ 0x140074974
 * Callers:
 *     _CRTThreadManager::GetRTThreadManagerInstance_::_1_::dtor$0 @ 0x1400368B0 (_CRTThreadManager--GetRTThreadManagerInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::init_once_completer::~init_once_completer(wil::details::init_once_completer *this)
{
  InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL);
}
