/*
 * XREFs of StorPortSetBusDataByOffset @ 0x1C0047530
 * Callers:
 *     sub_1C00B2710 @ 0x1C00B2710 (sub_1C00B2710.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorPortSetBusDataByOffset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  _DWORD *v7; // rax
  unsigned int v8; // r9d
  unsigned int v9; // r11d

  v7 = sub_1C000E2EC(a1);
  if ( v7 )
    return (*((unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))v7 + 89))(
             *((_QWORD *)v7 + 84),
             v9,
             a5,
             a6,
             a7);
  return v8;
}
