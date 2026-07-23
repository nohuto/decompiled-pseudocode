/*
 * XREFs of sub_1409A37AC @ 0x1409A37AC
 * Callers:
 *     sub_1409A5F60 @ 0x1409A5F60 (sub_1409A5F60.c)
 *     sub_1409A6D68 @ 0x1409A6D68 (sub_1409A6D68.c)
 * Callees:
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409AA694 @ 0x1409AA694 (sub_1409AA694.c)
 */

__int64 __fastcall sub_1409A37AC(_DWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r10
  __int64 v8; // rax

  v5 = 10000000LL * a4;
  v7 = 10000000LL * a3;
  *(_QWORD *)(a2 + 72) = v5;
  *(_QWORD *)(a2 + 64) = v7;
  v8 = v7;
  if ( v7 && v5 && v7 >= v5 )
  {
    *(_QWORD *)(a2 + 64) = 0LL;
    v8 = 0LL;
  }
  sub_1409AA694(*a1, *(_DWORD *)(a2 + 28), a3, a4, v8, 10000000LL * a4);
  *(_DWORD *)(a2 + 36) |= 4u;
  return sub_1409A4D70(a1, 2LL);
}
