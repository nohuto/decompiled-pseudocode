/*
 * XREFs of sub_140578398 @ 0x140578398
 * Callers:
 *     sub_1402FF310 @ 0x1402FF310 (sub_1402FF310.c)
 *     sub_140578174 @ 0x140578174 (sub_140578174.c)
 * Callees:
 *     sub_14024D7B8 @ 0x14024D7B8 (sub_14024D7B8.c)
 *     sub_14057303C @ 0x14057303C (sub_14057303C.c)
 */

__int64 __fastcall sub_140578398(__int64 a1)
{
  int v1; // r8d
  unsigned __int64 v2; // r9
  int v4; // eax
  __int64 v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 144);
  v2 = *(_QWORD *)(a1 + 136);
  v7 = 0LL;
  *(_QWORD *)&v7 = sub_14057303C(0LL, (__int64 *)(a1 + 152), v1, v2);
  v4 = sub_14024D7B8(a1, (__int64)&v7);
  if ( v4 >= 0 )
  {
    *(_WORD *)(a1 + 184) = WORD4(v7);
    result = 0LL;
    *(_QWORD *)(a1 + 176) = v5;
  }
  else
  {
    *(_QWORD *)(a1 + 176) = 0LL;
    return (v4 >> 31) & 0xC0000001;
  }
  return result;
}
