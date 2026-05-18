/*
 * XREFs of sub_18001E060 @ 0x18001E060
 * Callers:
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 *     sub_18001E7E8 @ 0x18001E7E8 (sub_18001E7E8.c)
 *     sub_18001E824 @ 0x18001E824 (sub_18001E824.c)
 *     sub_18001ED90 @ 0x18001ED90 (sub_18001ED90.c)
 *     sub_180027830 @ 0x180027830 (sub_180027830.c)
 *     sub_180027BC8 @ 0x180027BC8 (sub_180027BC8.c)
 *     sub_1800F875C @ 0x1800F875C (sub_1800F875C.c)
 *     sub_1800FA180 @ 0x1800FA180 (sub_1800FA180.c)
 *     sub_1800FB050 @ 0x1800FB050 (sub_1800FB050.c)
 *     sub_1800FB190 @ 0x1800FB190 (sub_1800FB190.c)
 *     sub_1800FB3B0 @ 0x1800FB3B0 (sub_1800FB3B0.c)
 *     sub_18010DA40 @ 0x18010DA40 (sub_18010DA40.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_18001E060(__int64 a1, __int64 a2, char *a3)
{
  _UNKNOWN **result; // rax
  char *i; // rbx
  __int64 v7; // rdx
  char *v8; // rdi
  __int64 *v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a3; !i[25]; result = (_UNKNOWN **)sub_180010884(v8, 0x68uLL) )
  {
    sub_18001E060(a1, a2, *((_QWORD *)i + 2));
    v8 = i;
    i = *(char **)i;
    v9 = (__int64 *)*((_QWORD *)v8 + 12);
    if ( v9 )
    {
      LOBYTE(v7) = v9 != (__int64 *)(v8 + 40);
      (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 32))(v9, v7);
      *((_QWORD *)v8 + 12) = 0LL;
    }
  }
  return result;
}
