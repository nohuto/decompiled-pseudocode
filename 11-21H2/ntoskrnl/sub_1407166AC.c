/*
 * XREFs of sub_1407166AC @ 0x1407166AC
 * Callers:
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

char __fastcall sub_1407166AC(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // esi
  __int64 v4; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter2, BugCheckParameter3, &v8);
  else
    v4 = sub_1407C9820(BugCheckParameter2);
  v5 = v4;
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 2) & 2) == 0 )
    {
      v6 = *(unsigned int *)(v4 + 44);
      if ( (_DWORD)v6 != -1 )
        sub_14079BD98(BugCheckParameter2, v6);
      if ( *(_WORD *)(v5 + 74) )
        sub_14079BD98(BugCheckParameter2, *(unsigned int *)(v5 + 48));
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter2, &v8);
    else
      sub_1407C97C0(BugCheckParameter2, &v8);
    sub_14079BD98(BugCheckParameter2, v2);
    LOBYTE(v4) = 1;
  }
  return v4;
}
