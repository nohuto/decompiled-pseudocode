/*
 * XREFs of sub_1406EF9E0 @ 0x1406EF9E0
 * Callers:
 *     sub_14079885C @ 0x14079885C (sub_14079885C.c)
 * Callees:
 *     sub_1402619C4 @ 0x1402619C4 (sub_1402619C4.c)
 *     sub_1402E1C2C @ 0x1402E1C2C (sub_1402E1C2C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406ED114 @ 0x1406ED114 (sub_1406ED114.c)
 *     sub_140798E18 @ 0x140798E18 (sub_140798E18.c)
 */

__int64 __fastcall sub_1406EF9E0(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax
  _DWORD v4[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(v4, 0, 0x48uLL);
  sub_1402619C4((__int16 *)a1, v4);
  LOWORD(v4[13]) &= ~0x100u;
  sub_1402E1C2C((__int64)v4, 6);
  v2 = *(_DWORD *)(a1 + 344) == 0;
  result = 1LL;
  LOWORD(v4[13]) = 1;
  v4[11] = 3;
  v4[12] = 72;
  if ( v2 || (result = sub_140798E18(a1, v4), (int)result < 0) )
  {
    if ( !_bittest((const signed __int32 *)(a1 + 12), 0x1Cu) )
    {
      result = *(unsigned int *)(a1 + 816);
      if ( (result & 0x10000000) == 0 )
        return sub_1406ED114(a1, (__int64)v4);
    }
  }
  return result;
}
