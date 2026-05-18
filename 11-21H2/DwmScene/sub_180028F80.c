/*
 * XREFs of sub_180028F80 @ 0x180028F80
 * Callers:
 *     sub_18005A850 @ 0x18005A850 (sub_18005A850.c)
 *     sub_1800DC1B0 @ 0x1800DC1B0 (sub_1800DC1B0.c)
 * Callees:
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180026A88 @ 0x180026A88 (sub_180026A88.c)
 *     sub_180028D88 @ 0x180028D88 (sub_180028D88.c)
 *     sub_18007B62C @ 0x18007B62C (sub_18007B62C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_180028F80(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = sub_180028D88(a1);
  if ( result )
  {
    sub_180026A88(*(_QWORD *)(v3 + 3856), *(_QWORD *)(v3 + 3864));
    *(_QWORD *)(a1 + 3864) = *(_QWORD *)(a1 + 3856);
    sub_18007B62C(a1 + 608);
    sub_18007B62C(a1 + 832);
    sub_18007B62C(a1 + 1056);
    sub_1800126E8(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 256));
    *(_QWORD *)(a1 + 256) = *(_QWORD *)(a1 + 248);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
    *(_BYTE *)(a1 + 3976) = 0;
  }
  return result;
}
