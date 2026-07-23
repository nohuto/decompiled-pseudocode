/*
 * XREFs of sub_1405CEB94 @ 0x1405CEB94
 * Callers:
 *     sub_14098DAB8 @ 0x14098DAB8 (sub_14098DAB8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_1405CEB94(__int64 a1, int a2, int a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = a2;
  v8 = a3;
  v9 = a4;
  result = sub_14042A5E0(31LL, &v6);
  if ( !(_BYTE)result )
    sub_1405CAE6C(0x605uLL, 0x1FuLL, v4, 0LL);
  return result;
}
