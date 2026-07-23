/*
 * XREFs of sub_14079CF44 @ 0x14079CF44
 * Callers:
 *     sub_14065B108 @ 0x14065B108 (sub_14065B108.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_1407169FC @ 0x1407169FC (sub_1407169FC.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

char __fastcall sub_14079CF44(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  unsigned int v4; // r14d
  bool v6; // zf
  __int64 v7; // rax
  unsigned __int16 v8; // di
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r15
  ULONG_PTR v13; // rdx
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v4 = BugCheckParameter3;
  if ( a3 >= 0x80000000 || (_DWORD)BugCheckParameter3 == -1 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 220) < 4u || a3 - 16345 > 0x7FFFC026 )
  {
LABEL_6:
    sub_14079BD98(BugCheckParameter2, v4);
    return 1;
  }
  v15 = 0xFFFFFFFFLL;
  v6 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v14[0] = 0xFFFFFFFFLL;
  if ( v6 )
    v7 = sub_1407C9820(BugCheckParameter2);
  else
    v7 = sub_1406BF400(BugCheckParameter2, BugCheckParameter3, &v15);
  v8 = 0;
  v9 = v7;
  if ( v7 )
  {
    v10 = *(unsigned int *)(v7 + 4);
    if ( (_DWORD)v10 == -1 )
    {
LABEL_21:
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter2, &v15);
      else
        sub_1407C97C0(BugCheckParameter2, &v15);
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      v11 = sub_1406BF400(BugCheckParameter2, v10, v14);
    else
      v11 = sub_1407C9820(BugCheckParameter2);
    v12 = v11;
    if ( v11 )
    {
      while ( v8 < *(_WORD *)(v9 + 2) )
      {
        v13 = *(unsigned int *)(v12 + 4LL * v8);
        if ( (_DWORD)v13 != -1 )
          sub_14079BD98(BugCheckParameter2, v13);
        ++v8;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter2, v14);
      else
        sub_1407C97C0(BugCheckParameter2, v14);
      sub_14079BD98(BugCheckParameter2, *(unsigned int *)(v9 + 4));
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter2, &v15);
    else
      sub_1407C97C0(BugCheckParameter2, &v15);
  }
  return 0;
}
