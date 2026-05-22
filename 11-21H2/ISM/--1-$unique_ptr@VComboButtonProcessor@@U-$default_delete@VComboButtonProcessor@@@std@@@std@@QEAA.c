/*
 * XREFs of ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1801A6244
 * Callers:
 *     _ComboButtonProcessor::Create_::_1_::dtor$0 @ 0x1801A6423 (_ComboButtonProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VComboButtonProcessor@@@std@@QEBAXPEAVComboButtonProcessor@@@Z @ 0x1801A62A4 (--R-$default_delete@VComboButtonProcessor@@@std@@QEBAXPEAVComboButtonProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<ComboButtonProcessor>::operator()();
  return result;
}
