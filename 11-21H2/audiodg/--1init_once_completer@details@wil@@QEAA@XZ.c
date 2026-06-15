/*
 * XREFs of ??1init_once_completer@details@wil@@QEAA@XZ @ 0x14006C278
 * Callers:
 *     _wil::init_once__lambda_a2a7c58af5182531a41a85456c7819e1____::_1_::dtor$0 @ 0x140039583 (_wil--init_once__lambda_a2a7c58af5182531a41a85456c7819e1____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::init_once_completer::~init_once_completer(wil::details::init_once_completer *this)
{
  InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL);
}
