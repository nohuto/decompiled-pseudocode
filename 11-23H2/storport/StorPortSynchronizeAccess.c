/*
 * XREFs of StorPortSynchronizeAccess @ 0x1C0047590
 * Callers:
 *     sub_1C00B2790 @ 0x1C00B2790 (sub_1C00B2790.c)
 * Callees:
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall StorPortSynchronizeAccess(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  KIRQL v6; // di
  _DWORD *v7; // rax
  __int64 v8; // rbx
  char v9; // si

  v6 = 0;
  v7 = sub_1C000E2EC(a1);
  v8 = (__int64)v7;
  if ( v7 )
  {
    if ( v7[188] == 1 )
      v6 = sub_1C000889C((__int64)v7);
    v9 = a2(a1, a3);
    if ( *(_DWORD *)(v8 + 752) == 1 )
      sub_1C0008914(v8, v6);
    LOBYTE(v7) = v9;
  }
  return (char)v7;
}
