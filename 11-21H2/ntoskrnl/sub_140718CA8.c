/*
 * XREFs of sub_140718CA8 @ 0x140718CA8
 * Callers:
 *     sub_14071A4E8 @ 0x14071A4E8 (sub_14071A4E8.c)
 *     sub_140917708 @ 0x140917708 (sub_140917708.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140717624 @ 0x140717624 (sub_140717624.c)
 *     sub_14071A784 @ 0x14071A784 (sub_14071A784.c)
 *     sub_14071B284 @ 0x14071B284 (sub_14071B284.c)
 *     sub_14071F2D8 @ 0x14071F2D8 (sub_14071F2D8.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

bool __fastcall sub_140718CA8(__int64 a1, _WORD *a2, char *a3)
{
  int v4; // esi
  int v5; // edi
  void *v6; // r15
  PVOID v7; // r14
  char v8; // al
  ULONG_PTR v9; // rdi
  char v10; // si
  __int64 v11; // rax
  bool v12; // cf
  char v13; // al
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // dx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-20h] BYREF
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v22; // [rsp+A8h] [rbp+58h] BYREF

  v21 = 0xFFFFFFFFLL;
  LODWORD(BugCheckParameter4) = 0;
  BugCheckParameter3 = 0LL;
  v22 = 0LL;
  v4 = (int)a2;
  *a3 = 0;
  v5 = a1;
  v6 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    if ( !*a2 )
      return byte_140C097BD && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0;
    v7 = *(PVOID *)(a1 + 32);
  }
  else
  {
    if ( (int)sub_140717624((__int64)a2, (__int64)&v22) < 0 )
      return 0;
    v6 = (void *)qword_140D3CA28;
    v7 = v22;
  }
  if ( (int)sub_14071B284(v6) < 0 )
    return 0;
  v8 = sub_14071F2D8(v5, v4, (unsigned int)&v19, (unsigned int)&BugCheckParameter4, (__int64)&BugCheckParameter3);
  v9 = BugCheckParameter3;
  v10 = v8;
  if ( BugCheckParameter3
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? (v11 = sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v21))
      : (v11 = sub_1407C9820(BugCheckParameter3)),
        v11) )
  {
    if ( v10 )
    {
      if ( !byte_140C097BD || (*(_WORD *)(v11 + 2) & 0x100) == 0 )
        v10 = 0;
    }
    else
    {
      if ( !byte_140C097BD || (v12 = (*(_WORD *)(v11 + 2) & 0x100) != 0, v13 = 1, !v12) )
        v13 = 0;
      v14 = 0;
      v15 = (unsigned __int16)v19 >> 1;
      *a3 = v13;
      if ( v15 )
      {
        while ( *(_WORD *)(*((_QWORD *)&v19 + 1) + 2LL * v14) != 92 )
        {
          if ( ++v14 >= v15 )
            goto LABEL_18;
        }
        *a3 = 0;
      }
    }
LABEL_18:
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      sub_1406BF450(v9, &v21);
    else
      sub_1407C97C0(v9, &v21);
  }
  else
  {
    v10 = 0;
  }
  sub_14071A784(v6, v7);
  return v10;
}
