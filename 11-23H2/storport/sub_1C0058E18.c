/*
 * XREFs of sub_1C0058E18 @ 0x1C0058E18
 * Callers:
 *     sub_1C0040410 @ 0x1C0040410 (sub_1C0040410.c)
 * Callees:
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0032504 @ 0x1C0032504 (sub_1C0032504.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 */

char __fastcall sub_1C0058E18(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, _QWORD, __int64))
{
  char result; // al
  __int64 *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8

  result = *(_BYTE *)(a4 - 32) & 0x1C;
  if ( result == 12 )
  {
    v10 = (__int64 *)(a4 + 168);
    if ( (qword_1C0093468 & 0x40) != 0 )
    {
      v11 = sub_1C0032504(a4 - 48);
      sub_1C0019E4C(*v10, 13, *(_QWORD *)(a4 + 112), v11, *(_QWORD *)(a4 + 120), v12, 0LL);
    }
    if ( (*(_BYTE *)(a4 - 31) & 1) != 0 )
    {
      sub_1C0037008(*v10, *(unsigned int *)(a4 + 700));
      *(_BYTE *)(a4 - 31) &= ~1u;
    }
    a5(a1, a3, a4);
    *(_BYTE *)(*(_QWORD *)(a4 + 120) + 3LL) = a2;
    return (*(__int64 (__fastcall **)(__int64))(a4 + 608))(a4 - 48);
  }
  return result;
}
