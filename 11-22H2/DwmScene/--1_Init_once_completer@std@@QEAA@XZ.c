/*
 * XREFs of ??1_Init_once_completer@std@@QEAA@XZ @ 0x18001D2FC
 * Callers:
 *     std::call_once__lambda_c15493341c6340c7048e00ce76563f22___ @ 0x18001CDE0 (std--call_once__lambda_c15493341c6340c7048e00ce76563f22___.c)
 *     _std::call_once__lambda_c15493341c6340c7048e00ce76563f22____::_1_::dtor$0 @ 0x1800E4773 (_std--call_once__lambda_c15493341c6340c7048e00ce76563f22____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Init_once_completer::~_Init_once_completer(std::_Init_once_completer *this)
{
  if ( !InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL) )
    abort();
}
