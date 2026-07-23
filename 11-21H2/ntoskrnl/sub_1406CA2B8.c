/*
 * XREFs of sub_1406CA2B8 @ 0x1406CA2B8
 * Callers:
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407172C8 @ 0x1407172C8 (sub_1407172C8.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406CA2B8(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, int a3, char a4)
{
  unsigned int v5; // r14d
  bool v6; // zf
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r14d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+28h] [rbp-28h] BYREF
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+90h] [rbp+40h]
  char v28; // [rsp+A0h] [rbp+50h]

  v5 = BugCheckParameter4;
  v22 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v27 = 0LL;
  v8 = 0LL;
  v26[0] = 0xFFFFFFFFLL;
  v9 = 0LL;
  v25 = 0xFFFFFFFFLL;
  v10 = 0LL;
  v24 = 0xFFFFFFFFLL;
  v28 = 0;
  if ( v6 )
    v11 = sub_1407C9820(BugCheckParameter3);
  else
    v11 = sub_1406BF400(BugCheckParameter3, (unsigned int)a3, v26);
  v12 = v11;
  if ( a3 < 0 )
    goto LABEL_38;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v13 = sub_1406BF400(BugCheckParameter3, v5, &v25);
  else
    v13 = sub_1407C9820(BugCheckParameter3);
  v9 = v13;
  v14 = *(_WORD *)(v13 + 2) & 4;
  if ( !a4 )
  {
    if ( !v14 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v15 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v9 + 16), &v24);
      else
        v15 = sub_1407C9820(BugCheckParameter3);
      v10 = v15;
      goto LABEL_11;
    }
LABEL_38:
    *(_DWORD *)(v12 + 8) = a3;
    *(_DWORD *)(v12 + 4) = a3;
    goto LABEL_18;
  }
  v10 = v9;
LABEL_11:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v16 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v10 + 44), &v23);
  else
    v16 = sub_1407C9820(BugCheckParameter3);
  v8 = v16;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v17 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v16 + 4), &v22);
  else
    v17 = sub_1407C9820(BugCheckParameter3);
  v27 = v17;
  v18 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v10 + 44));
  if ( v18 < 0 )
    goto LABEL_20;
  v19 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v8 + 4));
  v20 = v27;
  v18 = v19;
  if ( v19 < 0 )
    goto LABEL_21;
  *(_DWORD *)(v12 + 4) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(v27 + 8);
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v27 + 8) = a3;
  v28 = 1;
LABEL_18:
  v18 = sub_1407172C8(BugCheckParameter3, (unsigned int)a3);
  if ( v18 >= 0 )
  {
    v18 = 0;
LABEL_20:
    v20 = v27;
    goto LABEL_21;
  }
  v20 = v27;
  if ( v28 )
  {
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(v27 + 8) = *(_DWORD *)(v12 + 8);
  }
LABEL_21:
  if ( v20 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v22);
    else
      sub_1407C97C0(BugCheckParameter3, &v22);
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v23);
    else
      sub_1407C97C0(BugCheckParameter3, &v23);
  }
  if ( v10 && v10 != v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v24);
    else
      sub_1407C97C0(BugCheckParameter3, &v24);
  }
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v25);
    else
      sub_1407C97C0(BugCheckParameter3, &v25);
  }
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v26);
    else
      sub_1407C97C0(BugCheckParameter3, v26);
  }
  return (unsigned int)v18;
}
