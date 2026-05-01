/*
 * XREFs of sub_180003834 @ 0x180003834
 * Callers:
 *     sub_1800037A0 @ 0x1800037A0 (sub_1800037A0.c)
 * Callees:
 *     sub_180004410 @ 0x180004410 (sub_180004410.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180003834(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v7; // rcx

  v3 = a1 + 2;
  sub_180004410(a1 + 2);
  v7 = qword_1800328E0;
  *a1 = off_1800200B0;
  a1[1] = off_180020070;
  *v3 = off_1800200F8;
  a1[7] = 1LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  a1[8] = a2;
  *a1 = off_180020140;
  a1[1] = off_180020090;
  a1[9] = a3;
  *v3 = off_180020188;
  return a1;
}
