/*
 * XREFs of sub_180091F70 @ 0x180091F70
 * Callers:
 *     sub_18009209C @ 0x18009209C (sub_18009209C.c)
 * Callees:
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_180091F50 @ 0x180091F50 (sub_180091F50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180091F70(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // rcx

  sub_18001DE1C((__int64)(a1 + 13), a2);
  v4 = (__int64 *)a1[12];
  if ( v4 )
  {
    LOBYTE(v3) = v4 != a1 + 5;
    (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 32))(v4, v3);
    a1[12] = 0LL;
  }
  sub_180091F50(a1 + 4);
  return sub_180091F1C(a1);
}
