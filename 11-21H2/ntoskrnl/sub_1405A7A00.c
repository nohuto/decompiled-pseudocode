/*
 * XREFs of sub_1405A7A00 @ 0x1405A7A00
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_1405A7158 @ 0x1405A7158 (sub_1405A7158.c)
 * Callees:
 *     sub_14027A168 @ 0x14027A168 (sub_14027A168.c)
 *     sub_14027DA5C @ 0x14027DA5C (sub_14027DA5C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405A7A00(__int64 a1)
{
  __int64 v2; // xmm1_8
  __int64 result; // rax
  _QWORD v4[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x10) == 0 )
    return sub_14027DA5C(a1 + 56, 17, 0LL);
  memset(v4, 0, 0x80uLL);
  v2 = *(_QWORD *)(a1 + 72);
  *(_OWORD *)&v4[3] = *(_OWORD *)(a1 + 56);
  v4[5] = v2;
  result = sub_14027A168((__int64)v4);
  *(_DWORD *)(a1 + 80) &= ~0x10u;
  return result;
}
