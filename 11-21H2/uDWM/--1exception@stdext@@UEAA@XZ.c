/*
 * XREFs of ??1exception@stdext@@UEAA@XZ @ 0x180048D84
 * Callers:
 *     _std::_Throw_bad_array_new_length_::_1_::dtor$0 @ 0x18009BCE7 (_std--_Throw_bad_array_new_length_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall stdext::exception::~exception(stdext::exception *this)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
}
