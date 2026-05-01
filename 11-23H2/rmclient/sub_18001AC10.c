/*
 * XREFs of sub_18001AC10 @ 0x18001AC10
 * Callers:
 *     sub_18001AA68 @ 0x18001AA68 (sub_18001AA68.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18001AC10(_QWORD *a1)
{
  a1[4] = 1LL;
  *a1 = &off_180024FD8;
  a1[1] = &off_180025078;
  a1[2] = off_180024F38;
  if ( qword_1800328E0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 8LL))(qword_1800328E0);
  a1[5] = 0LL;
  a1[6] = 0LL;
  *a1 = &off_180024F88;
  a1[1] = off_180024F68;
  a1[2] = &off_180025020;
  return a1;
}
