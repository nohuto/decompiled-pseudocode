/*
 * XREFs of sub_1800E77D4 @ 0x1800E77D4
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E77D4(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 8LL))(*(_QWORD *)(a2 + 32));
  sub_18001DB68(&stru_1801C8368, 3, "Exception in Display Destructor, message=%s", v2);
  return 0LL;
}
