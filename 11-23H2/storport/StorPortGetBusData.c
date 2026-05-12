/*
 * XREFs of StorPortGetBusData @ 0x1C0046430
 * Callers:
 *     sub_1C00B2210 @ 0x1C00B2210 (sub_1C00B2210.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorPortGetBusData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r11d

  v5 = sub_1C000E2EC(a1);
  if ( v5 )
    return (*((unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))v5 + 90))(*((_QWORD *)v5 + 84), v7, a5);
  return v6;
}
