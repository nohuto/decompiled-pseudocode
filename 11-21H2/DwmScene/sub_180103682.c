/*
 * XREFs of sub_180103682 @ 0x180103682
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180103682(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 8LL))(*(_QWORD *)(a2 + 32));
  sub_18001F2B4(&stru_1801EA368, 3, "Exception in Display Destructor, message=%s", v2);
  return 0LL;
}
