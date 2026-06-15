/*
 * XREFs of ??0bad_array_new_length@std@@QEAA@XZ @ 0x1800087C8
 * Callers:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18000E460 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 * Callees:
 *     <none>
 */

std::bad_array_new_length *__fastcall std::bad_array_new_length::bad_array_new_length(std::bad_array_new_length *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "bad array new length";
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
