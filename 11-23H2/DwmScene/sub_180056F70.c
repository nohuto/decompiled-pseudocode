/*
 * XREFs of sub_180056F70 @ 0x180056F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180057320 @ 0x180057320 (sub_180057320.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180056F70(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  Cnd_do_broadcast_at_thread_exit();
  sub_180057320(&v2);
  return 0LL;
}
