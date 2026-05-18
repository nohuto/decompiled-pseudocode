/*
 * XREFs of sub_180026F00 @ 0x180026F00
 * Callers:
 *     sub_1800535E0 @ 0x1800535E0 (sub_1800535E0.c)
 *     sub_1800C6AD0 @ 0x1800C6AD0 (sub_1800C6AD0.c)
 * Callees:
 *     sub_180026D64 @ 0x180026D64 (sub_180026D64.c)
 *     sub_180027938 @ 0x180027938 (sub_180027938.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 *     sub_180070408 @ 0x180070408 (sub_180070408.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180026F00(_BYTE *a1)
{
  char result; // al
  __int64 v3; // rcx

  result = sub_180026D64((__int64)a1);
  if ( result )
  {
    sub_180027938(v3 + 3856);
    sub_180070408(a1 + 608);
    sub_180070408(a1 + 832);
    sub_180070408(a1 + 1056);
    sub_180027964(a1 + 248);
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 256LL))(a1);
    a1[3976] = 0;
  }
  return result;
}
