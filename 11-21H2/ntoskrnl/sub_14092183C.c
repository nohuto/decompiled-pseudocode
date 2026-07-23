/*
 * XREFs of sub_14092183C @ 0x14092183C
 * Callers:
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 * Callees:
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14092183C(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  int v3; // r12d
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // r15d
  int v8; // edi
  __int64 v9; // rax
  __int64 v11; // [rsp+60h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp+50h] BYREF
  __int64 v13; // [rsp+78h] [rbp+58h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v13 = 0xFFFFFFFFLL;
  v3 = a2;
  v11 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter3, a2, &v13);
  else
    v4 = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v13);
  v5 = (_DWORD *)v4;
  v6 = 0;
  v7 = *(_DWORD *)(v4 + 20) + *(_DWORD *)(v4 + 24);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = sub_1406BF278(BugCheckParameter3, v5, v6, &BugCheckParameter4);
      if ( v8 < 0 )
        break;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v9 = sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v11);
      else
        v9 = sub_1407C9820(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v11);
      *(_DWORD *)(v9 + 16) = v3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v11);
      else
        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v11);
      if ( ++v6 >= v7 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v8 = 0;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v13);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v13);
  return (unsigned int)v8;
}
