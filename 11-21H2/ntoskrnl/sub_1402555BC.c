/*
 * XREFs of sub_1402555BC @ 0x1402555BC
 * Callers:
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406DD0AC @ 0x1406DD0AC (sub_1406DD0AC.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1402555BC(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 v3; // r14
  unsigned int v4; // r15d
  bool v5; // zf
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // [rsp+50h] [rbp+30h] BYREF
  int v12; // [rsp+54h] [rbp+34h]
  int v13; // [rsp+60h] [rbp+40h] BYREF
  int v14; // [rsp+64h] [rbp+44h]
  int v15; // [rsp+68h] [rbp+48h] BYREF
  int v16; // [rsp+6Ch] [rbp+4Ch]

  v14 = 0;
  v16 = 0;
  v3 = 0LL;
  v13 = -1;
  v15 = -1;
  v4 = a2;
  v5 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v11 = -1;
  v12 = 0;
  if ( v5 )
    result = sub_1407C9820(BugCheckParameter3);
  else
    result = sub_1406BF400(BugCheckParameter3, a2);
  v7 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v8 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(result + 4));
    else
      v8 = sub_1407C9820(BugCheckParameter3);
    v9 = v8;
    if ( v8
      && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? (v10 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v7 + 8)))
        : (v10 = sub_1407C9820(BugCheckParameter3)),
          (v3 = v10) != 0) )
    {
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(v10 + 4) = *(_DWORD *)(v7 + 4);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v13);
      else
        sub_1407C97C0(BugCheckParameter3, &v13);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v15);
      else
        sub_1407C97C0(BugCheckParameter3, &v15);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v11);
      else
        sub_1407C97C0(BugCheckParameter3, &v11);
      return sub_1406DD0AC(BugCheckParameter3, v4);
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        result = sub_1406BF450(BugCheckParameter3, &v11);
      else
        result = sub_1407C97C0(BugCheckParameter3, &v11);
      if ( v9 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          result = sub_1406BF450(BugCheckParameter3, &v13);
        else
          result = sub_1407C97C0(BugCheckParameter3, &v13);
      }
      if ( v3 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          return sub_1406BF450(BugCheckParameter3, &v15);
        else
          return sub_1407C97C0(BugCheckParameter3, &v15);
      }
    }
  }
  return result;
}
