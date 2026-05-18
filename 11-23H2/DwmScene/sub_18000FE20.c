/*
 * XREFs of sub_18000FE20 @ 0x18000FE20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000DD04 @ 0x18000DD04 (sub_18000DD04.c)
 *     sub_18000F650 @ 0x18000F650 (sub_18000F650.c)
 *     sub_18000FCBC @ 0x18000FCBC (sub_18000FCBC.c)
 *     __alloca_probe @ 0x1800E3900 (__alloca_probe.c)
 */

__int64 __fastcall sub_18000FE20(__int64 a1)
{
  volatile signed __int32 **v1; // rbx
  __int64 v2; // r8
  _BYTE v4[1024]; // [rsp+20h] [rbp-1418h] BYREF
  _WORD v5[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v1 = (volatile signed __int32 **)(a1 + 184);
  if ( !*(_QWORD *)(a1 + 184) )
  {
    sub_18000DD04(v5, 2048LL, a1 + 16);
    sub_18000F650(v4, 1024LL);
    v2 = -1LL;
    do
      ++v2;
    while ( v4[v2] );
    sub_18000FCBC(v1, (__int64)v4, (volatile signed __int32 *)(v2 + 1));
  }
  return (unsigned __int64)(*v1 + 1) & -(__int64)(*v1 != 0LL);
}
