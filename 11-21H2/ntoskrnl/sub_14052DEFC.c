/*
 * XREFs of sub_14052DEFC @ 0x14052DEFC
 * Callers:
 *     sub_14052DF88 @ 0x14052DF88 (sub_14052DF88.c)
 *     sub_140A64544 @ 0x140A64544 (sub_140A64544.c)
 *     sub_140A650A8 @ 0x140A650A8 (sub_140A650A8.c)
 * Callees:
 *     sub_14052D9E0 @ 0x14052D9E0 (sub_14052D9E0.c)
 *     sub_14052DC38 @ 0x14052DC38 (sub_14052DC38.c)
 */

__int64 __fastcall sub_14052DEFC(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  if ( *(_BYTE *)(a1 + 320) )
  {
    result = sub_14052DC38(a1, a2, a3, 0, &v9);
    if ( (int)result < 0 )
      return result;
    v5 = v9;
  }
  result = sub_14052D9E0(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( a5 )
      *a5 = v5;
  }
  return result;
}
