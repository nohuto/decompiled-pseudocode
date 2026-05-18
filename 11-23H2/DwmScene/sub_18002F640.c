/*
 * XREFs of sub_18002F640 @ 0x18002F640
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031BFC @ 0x180031BFC (sub_180031BFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002F640(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1 + *(int *)(a1 + 16));
  Cnd_do_broadcast_at_thread_exit();
  sub_180031BFC(&v2);
  return 0LL;
}
