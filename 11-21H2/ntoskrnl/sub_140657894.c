/*
 * XREFs of sub_140657894 @ 0x140657894
 * Callers:
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_140417378 @ 0x140417378 (sub_140417378.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_140657894(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v3 = BugCheckParameter4;
  sub_140AB4534((char *)&v8 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter3, v3);
  else
    v4 = sub_1407C9820(BugCheckParameter3);
  v5 = v4;
  v6 = sub_140417378(v4, BugCheckParameter3, v3);
  if ( v6 < 0 )
  {
    if ( v5 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v8);
      else
        sub_1407C97C0(BugCheckParameter3, &v8);
    }
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v8);
    else
      sub_1407C97C0(BugCheckParameter3, &v8);
    return 0;
  }
  return (unsigned int)v6;
}
