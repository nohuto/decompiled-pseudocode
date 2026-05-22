/*
 * XREFs of ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1801D1E54
 * Callers:
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801D1F3C (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     _ComboButtonProcessor::Create_::_1_::dtor$0 @ 0x1801D2032 (_ComboButtonProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VComboButtonProcessor@@@std@@QEBAXPEAVComboButtonProcessor@@@Z @ 0x1801D1EB4 (--R-$default_delete@VComboButtonProcessor@@@std@@QEBAXPEAVComboButtonProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<ComboButtonProcessor>::operator()();
  return result;
}
