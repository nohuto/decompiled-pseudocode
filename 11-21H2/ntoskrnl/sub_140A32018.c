/*
 * XREFs of sub_140A32018 @ 0x140A32018
 * Callers:
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 * Callees:
 *     sub_140A32B9C @ 0x140A32B9C (sub_140A32B9C.c)
 */

__int64 __fastcall sub_140A32018(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v4 = 0LL;
  result = sub_140A32B9C(a1, a2, &v5, &v4);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(a2 + 10) = v5;
    *(_QWORD *)a2 = *((_QWORD *)&v4 + 1);
    *(_WORD *)(a2 + 8) = v4;
  }
  return result;
}
