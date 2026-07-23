/*
 * XREFs of sub_1409222C0 @ 0x1409222C0
 * Callers:
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140920AB4 @ 0x140920AB4 (sub_140920AB4.c)
 * Callees:
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

char __fastcall sub_1409222C0(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  int v2; // r15d
  unsigned int v4; // esi
  _DWORD *v5; // rax
  unsigned int v6; // edi
  int v7; // edi
  __int64 v8; // rax
  int v9; // r14d
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+58h] [rbp+38h] BYREF

  LODWORD(BugCheckParameter4a) = 0;
  v2 = BugCheckParameter4;
  v11 = 0xFFFFFFFFLL;
  v4 = BugCheckParameter4;
  while ( 1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v5 = (_DWORD *)sub_1406BF400(BugCheckParameter3, v4, &v11);
    else
      v5 = (_DWORD *)sub_1407C9820(BugCheckParameter3, v4, (unsigned int *)&v11);
    if ( !v5 )
      return 0;
    v6 = v5[4];
    if ( !(v5[5] + v5[6]) )
      break;
    v7 = sub_1406BF278(BugCheckParameter3, v5, 0, &BugCheckParameter4a);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v11);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v11);
    if ( v7 < 0 )
      return 0;
    v6 = BugCheckParameter4a;
    if ( (_DWORD)BugCheckParameter4a == -1 )
      return 0;
    v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4a, &v11)
       : sub_1407C9820(BugCheckParameter3, BugCheckParameter4a, (unsigned int *)&v11);
    if ( !v8 )
      return 0;
    v9 = *(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v11);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v11);
    if ( v9 )
    {
LABEL_20:
      v4 = v6;
    }
    else if ( (int)sub_1407164DC(BugCheckParameter3, v6, 1) < 0 )
    {
      return 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v11);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v11);
  if ( v4 != v2 )
    goto LABEL_20;
  return 1;
}
