/*
 * XREFs of ??1_Init_once_completer@std@@QEAA@XZ @ 0x14006BDC0
 * Callers:
 *     std::call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___ @ 0x14006AB60 (std--call_once__lambda_c3c562c1cb4a987d14005078cd1fca93___.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Init_once_completer::~_Init_once_completer(std::_Init_once_completer *this)
{
  if ( !InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL) )
    abort();
}
