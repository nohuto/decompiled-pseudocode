/*
 * XREFs of sub_14091F9DC @ 0x14091F9DC
 * Callers:
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140715A2C @ 0x140715A2C (sub_140715A2C.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14091F9DC(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  int v5; // edi
  unsigned int v6; // ebp
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = a2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter3, a2, &v8);
  else
    v4 = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v8);
  if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v6 = *(_DWORD *)(v4 + 16);
    v5 = sub_140715A2C(BugCheckParameter3, v6, v2);
    if ( v5 >= 0 )
    {
      v5 = sub_14071F300(BugCheckParameter3, v6, 0);
      if ( v5 >= 0 )
        v5 = 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v8);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v8);
  return (unsigned int)v5;
}
