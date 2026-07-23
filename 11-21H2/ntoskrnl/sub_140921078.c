/*
 * XREFs of sub_140921078 @ 0x140921078
 * Callers:
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_140921078(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // edi
  ULONG_PTR BugCheckParameter4a; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(BugCheckParameter4a) = 0;
  v11 = 0LL;
  v3 = BugCheckParameter4;
  sub_1407C97FC(&v11);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter3, v3, &v11);
  else
    v4 = sub_1407C9820(BugCheckParameter3, v3, (unsigned int *)&v11);
  v5 = (_DWORD *)v4;
  v6 = 0;
  v7 = *(_DWORD *)(v4 + 20) + *(_DWORD *)(v4 + 24);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = sub_1406BF278(BugCheckParameter3, v5, v6, &BugCheckParameter4a);
      if ( v8 < 0 )
        break;
      v8 = sub_14071F300(BugCheckParameter3, (unsigned int)BugCheckParameter4a, 0);
      if ( v8 < 0 )
        break;
      if ( ++v6 >= v7 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v8 = 0;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v11);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v11);
  return (unsigned int)v8;
}
