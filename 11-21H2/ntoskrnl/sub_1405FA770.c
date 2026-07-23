/*
 * XREFs of sub_1405FA770 @ 0x1405FA770
 * Callers:
 *     <none>
 * Callees:
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 *     sub_140381130 @ 0x140381130 (sub_140381130.c)
 */

__int64 __fastcall sub_1405FA770(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdi
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+34h] [rbp-24h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD **)a1;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 1) == 0 )
  {
    sub_140237F80(*(__int64 **)(*(_QWORD *)a1 + 128LL), v4 + 24);
    v5 = *(_DWORD *)(v4 + 56);
  }
  *(_DWORD *)(v4 + 56) = v5 | 1;
  do
  {
    v6 = v2[13];
    if ( v6 == v2[15] )
      v7 = v2[14];
    else
      v7 = v6 + 1;
    v2[13] = v7;
  }
  while ( (unsigned int)sub_140381130(v4, 4 * (int)v6, v4 + 24) != -1073741275 );
  v8 = *(_DWORD *)(v4 + 820);
  v9 = 0LL;
  v11[1] = a2;
  v11[0] = 0LL;
  v13 = 0;
  v12 = 4 * v6;
  v14 = v8;
  if ( (int)sub_14037FDA0(v4, (__int64)v11, 0LL, &v14) >= 0 )
    return 4 * v6;
  return v9;
}
