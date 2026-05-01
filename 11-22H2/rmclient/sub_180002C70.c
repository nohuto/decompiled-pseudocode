/*
 * XREFs of sub_180002C70 @ 0x180002C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800091EC @ 0x1800091EC (sub_1800091EC.c)
 *     sub_180009CB0 @ 0x180009CB0 (sub_180009CB0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001B25C @ 0x18001B25C (sub_18001B25C.c)
 */

__int64 __fastcall sub_180002C70(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = sub_180009CB0(a1 + 64, &unk_180026190, &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
  sub_1800091EC(&v7);
  if ( v5 < 0 )
    sub_18001B25C((unsigned int)v5);
  return (unsigned int)v5;
}
