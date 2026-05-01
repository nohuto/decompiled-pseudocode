/*
 * XREFs of sub_18000B47B @ 0x18000B47B
 * Callers:
 *     sub_18000B46F @ 0x18000B46F (sub_18000B46F.c)
 *     sub_18000B4FA @ 0x18000B4FA (sub_18000B4FA.c)
 *     sub_18000B50C @ 0x18000B50C (sub_18000B50C.c)
 *     sub_18000BC77 @ 0x18000BC77 (sub_18000BC77.c)
 *     sub_18000BCE3 @ 0x18000BCE3 (sub_18000BCE3.c)
 *     sub_18000BCF5 @ 0x18000BCF5 (sub_18000BCF5.c)
 *     sub_18000BD07 @ 0x18000BD07 (sub_18000BD07.c)
 * Callees:
 *     sub_1800092B0 @ 0x1800092B0 (sub_1800092B0.c)
 */

__int64 __fastcall sub_18000B47B(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1800092B0((__int64)&RPCRT4_dll_import_table, v4);
  return v5(a1, a2, a3, a4);
}
