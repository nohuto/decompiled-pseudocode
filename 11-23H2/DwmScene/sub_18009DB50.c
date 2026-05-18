/*
 * XREFs of sub_18009DB50 @ 0x18009DB50
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_18009DB50(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  _QWORD *v5; // rdx
  char result; // al

  v2 = (__int64 *)(a1 + 24);
  v5 = (_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 56) || (result = sub_180011DF0(v2, v5)) != 0 )
  {
    sub_1800124F8(v2, v5);
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, v2);
  }
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
