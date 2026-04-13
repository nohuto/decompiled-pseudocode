/*
 * XREFs of _dynamic_atexit_destructor_for__init_atexit___0 @ 0x1800DDA90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 dynamic_atexit_destructor_for__init_atexit___0()
{
  void *v0; // rcx
  void (__fastcall *v1)(__int64); // rax
  __int64 v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    result = qword_180195268;
    if ( (unsigned __int64)qword_180195268 >= 0xA )
      break;
    v0 = (void *)qword_180195530[qword_180195268++];
    v1 = (void (__fastcall *)(__int64))DecodePointer(v0);
    if ( v1 )
      v1(v2);
  }
  return result;
}
