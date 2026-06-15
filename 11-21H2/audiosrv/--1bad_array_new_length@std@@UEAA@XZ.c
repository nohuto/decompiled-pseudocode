/*
 * XREFs of ??1bad_array_new_length@std@@UEAA@XZ @ 0x1800C6AD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  o___std_exception_destroy_0();
}
