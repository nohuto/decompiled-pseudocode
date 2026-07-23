/*
 * XREFs of sub_14079C014 @ 0x14079C014
 * Callers:
 *     sub_14079BF50 @ 0x14079BF50 (sub_14079BF50.c)
 *     sub_14079C920 @ 0x14079C920 (sub_14079C920.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079C290 @ 0x14079C290 (sub_14079C290.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14079C014(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter2, BugCheckParameter3, &v7);
  else
    v4 = sub_1407C9820(BugCheckParameter2);
  v5 = v4;
  result = v4 - 4;
  if ( (result & -(__int64)(v5 != 0)) != 0 )
  {
    sub_14079C290(BugCheckParameter2, v2, 0);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      return sub_1406BF450(BugCheckParameter2, &v7);
    else
      return sub_1407C97C0(BugCheckParameter2, &v7);
  }
  return result;
}
