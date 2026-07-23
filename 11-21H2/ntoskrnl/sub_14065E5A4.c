/*
 * XREFs of sub_14065E5A4 @ 0x14065E5A4
 * Callers:
 *     sub_14065E480 @ 0x14065E480 (sub_14065E480.c)
 * Callees:
 *     sub_14065E880 @ 0x14065E880 (sub_14065E880.c)
 *     sub_14065E97C @ 0x14065E97C (sub_14065E97C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065E5A4(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  int v7; // ebp
  _DWORD *v8; // rsi
  __int64 v9; // r14
  unsigned int v10; // r15d
  int v11; // edi
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = BugCheckParameter4;
  sub_1407C97FC(&v13);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v6 = sub_1406BF400(BugCheckParameter3, v5);
  else
    v6 = sub_1407C9820(BugCheckParameter3);
  if ( v6 )
  {
    v7 = 0;
    v8 = (_DWORD *)(v6 + 20);
    v9 = a3 - v6;
    do
    {
      v10 = v8[2];
      if ( v10 != -1 )
      {
        v11 = sub_14065E97C(BugCheckParameter3, v10);
        if ( v11 < 0 )
          goto LABEL_8;
        v11 = sub_14065E880(BugCheckParameter3);
        if ( v11 < 0 )
          goto LABEL_8;
        *(_DWORD *)((char *)v8 + v9 - 16) = *v8;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < 2 );
    v11 = 0;
LABEL_8:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v13);
    else
      sub_1407C97C0(BugCheckParameter3, &v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v11;
}
