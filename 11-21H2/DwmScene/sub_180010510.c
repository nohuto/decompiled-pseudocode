/*
 * XREFs of sub_180010510 @ 0x180010510
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E014 @ 0x18000E014 (sub_18000E014.c)
 *     sub_18000FDDC @ 0x18000FDDC (sub_18000FDDC.c)
 *     sub_1800103F0 @ 0x1800103F0 (sub_1800103F0.c)
 *     _alloca_probe @ 0x1800FEE40 (_alloca_probe.c)
 */

__int64 __fastcall sub_180010510(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  _BYTE v5[1024]; // [rsp+20h] [rbp-1418h] BYREF
  _WORD v6[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v1 = (__int64 *)(a1 + 184);
  v2 = *(_QWORD *)(a1 + 184);
  if ( !v2 )
  {
    sub_18000E014(v6, 2048LL, a1 + 16);
    sub_18000FDDC(v5, 1024LL);
    v3 = -1LL;
    do
      ++v3;
    while ( v5[v3] );
    sub_1800103F0((__int64)v1, (__int64)v5, v3 + 1);
    v2 = *v1;
  }
  return (v2 + 4) & -(__int64)(v2 != 0);
}
