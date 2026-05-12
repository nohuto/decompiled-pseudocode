/*
 * XREFs of sub_1C003F964 @ 0x1C003F964
 * Callers:
 *     sub_1C000B6FC @ 0x1C000B6FC (sub_1C000B6FC.c)
 *     sub_1C0038530 @ 0x1C0038530 (sub_1C0038530.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C003F964(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  if ( a1
    && (v2 = *a1) != 0
    && (v3 = *(_QWORD *)(v2 + 8)) != 0
    && (v4 = *(__int64 (__fastcall **)(__int64, __int64))(v3 + 88)) != 0LL )
  {
    return v4(v2, a2);
  }
  else
  {
    return 3221225485LL;
  }
}
