/*
 * XREFs of sub_1800F4018 @ 0x1800F4018
 * Callers:
 *     sub_1800F3F7C @ 0x1800F3F7C (sub_1800F3F7C.c)
 *     sub_1800F4018 @ 0x1800F4018 (sub_1800F4018.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800F4018 @ 0x1800F4018 (sub_1800F4018.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F4018(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rbx
  char *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x30uLL) )
  {
    sub_1800F4018(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = *((_QWORD *)v6 + 5);
    if ( v7 )
    {
      *((_QWORD *)v6 + 5) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return result;
}
