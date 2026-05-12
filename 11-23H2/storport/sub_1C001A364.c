/*
 * XREFs of sub_1C001A364 @ 0x1C001A364
 * Callers:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0011950 @ 0x1C0011950 (sub_1C0011950.c)
 *     sub_1C0011B58 @ 0x1C0011B58 (sub_1C0011B58.c)
 *     sub_1C0011DBC @ 0x1C0011DBC (sub_1C0011DBC.c)
 *     sub_1C00166D4 @ 0x1C00166D4 (sub_1C00166D4.c)
 *     sub_1C0020508 @ 0x1C0020508 (sub_1C0020508.c)
 *     sub_1C003576C @ 0x1C003576C (sub_1C003576C.c)
 *     sub_1C00389F4 @ 0x1C00389F4 (sub_1C00389F4.c)
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     Callback @ 0x1C003D660 (Callback.c)
 *     sub_1C004C030 @ 0x1C004C030 (sub_1C004C030.c)
 *     sub_1C004C30C @ 0x1C004C30C (sub_1C004C30C.c)
 *     sub_1C004C390 @ 0x1C004C390 (sub_1C004C390.c)
 *     sub_1C004C4E8 @ 0x1C004C4E8 (sub_1C004C4E8.c)
 *     sub_1C004E850 @ 0x1C004E850 (sub_1C004E850.c)
 *     sub_1C0067B7C @ 0x1C0067B7C (sub_1C0067B7C.c)
 *     sub_1C0067C80 @ 0x1C0067C80 (sub_1C0067C80.c)
 *     sub_1C0067D10 @ 0x1C0067D10 (sub_1C0067D10.c)
 *     sub_1C00A0EE4 @ 0x1C00A0EE4 (sub_1C00A0EE4.c)
 *     sub_1C00A73E4 @ 0x1C00A73E4 (sub_1C00A73E4.c)
 *     sub_1C00A84AC @ 0x1C00A84AC (sub_1C00A84AC.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 *     sub_1C00A87D8 @ 0x1C00A87D8 (sub_1C00A87D8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C001A364(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // eax

  v1 = 0;
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( !v2 )
    return 3221225659LL;
  v3 = v2(*(_QWORD *)(a1 + 240) + 16LL);
  if ( v3 )
  {
    v1 = -1073741823;
    if ( v3 == 2 )
      return (unsigned int)-2147483631;
  }
  return v1;
}
