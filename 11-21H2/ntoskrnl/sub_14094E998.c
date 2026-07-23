/*
 * XREFs of sub_14094E998 @ 0x14094E998
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407448BC @ 0x1407448BC (sub_1407448BC.c)
 *     sub_1407476FC @ 0x1407476FC (sub_1407476FC.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 */

__int64 __fastcall sub_14094E998(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v6; // ebx
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, 0x48uLL);
  v6 = sub_1407448BC(a1, a2, v8);
  if ( v6 >= 0 )
    v6 = sub_14094AA64((__int64)v8, a3);
  sub_1407476FC((__int64)v8);
  return (unsigned int)v6;
}
