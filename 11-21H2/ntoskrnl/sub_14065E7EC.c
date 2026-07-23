/*
 * XREFs of sub_14065E7EC @ 0x14065E7EC
 * Callers:
 *     sub_14065E380 @ 0x14065E380 (sub_14065E380.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065E7EC(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebp
  bool v3; // zf
  _WORD *v5; // rax
  _WORD *v6; // rdi
  __int64 v8; // rsi
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = BugCheckParameter3;
  v3 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v10 = 0;
  if ( v3 )
    v5 = (_WORD *)sub_1407C9820(BugCheckParameter2);
  else
    v5 = (_WORD *)sub_1406BF400(BugCheckParameter2, BugCheckParameter3);
  v6 = v5;
  if ( *v5 == 26994 )
  {
    v8 = 0LL;
    if ( v5[1] )
    {
      do
      {
        sub_14079BD98(BugCheckParameter2, *(unsigned int *)&v6[2 * v8 + 2]);
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < (unsigned __int16)v6[1] );
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter2, &v9);
  else
    sub_1407C97C0(BugCheckParameter2, &v9);
  return sub_14079BD98(BugCheckParameter2, v2);
}
