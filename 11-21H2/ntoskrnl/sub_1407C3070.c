/*
 * XREFs of sub_1407C3070 @ 0x1407C3070
 * Callers:
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_140916E20 @ 0x140916E20 (sub_140916E20.c)
 * Callees:
 *     sub_1406A7690 @ 0x1406A7690 (sub_1406A7690.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071A6D4 @ 0x14071A6D4 (sub_14071A6D4.c)
 *     sub_14071B250 @ 0x14071B250 (sub_14071B250.c)
 *     sub_14071B730 @ 0x14071B730 (sub_14071B730.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_1407C0C50 @ 0x1407C0C50 (sub_1407C0C50.c)
 *     sub_1407C82B0 @ 0x1407C82B0 (sub_1407C82B0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_1407C3070(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  ULONG_PTR v9; // r13
  unsigned int v10; // r14d
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  ULONG_PTR *v16; // r15
  unsigned int v17; // eax
  ULONG_PTR v18; // rdx
  ULONG_PTR v19; // rcx
  __int64 v20; // rax
  __int64 result; // rax
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  int v25; // edx
  unsigned int v26; // ecx
  char v27; // al
  __int64 v28; // rax
  unsigned int v29; // eax
  _DWORD *v30; // rdx
  __int64 v31; // r8
  ULONG_PTR v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // eax
  unsigned int v36; // r9d
  int v37; // eax
  __int64 v38; // rax
  unsigned int i; // [rsp+30h] [rbp-50h]
  __int64 v40; // [rsp+38h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-38h]
  ULONG_PTR v43; // [rsp+50h] [rbp-30h]
  __int64 j; // [rsp+58h] [rbp-28h]
  _DWORD v45[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v46[2]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v47[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v48; // [rsp+B0h] [rbp+30h] BYREF

  v40 = 0xFFFFFFFFLL;
  v9 = 0LL;
  v10 = 0;
  BugCheckParameter2 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v14 = (_DWORD *)sub_1406BF400(BugCheckParameter3, a2, &v40);
  else
    v14 = (_DWORD *)sub_1407C9820(BugCheckParameter3);
  v15 = v14;
  if ( !v14 )
    return 3221225626LL;
  v16 = a9;
  *a4 = -1;
  if ( v16 )
    *v16 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 208) == a5 + 208 )
  {
    v17 = v14[5];
    v48 = 0xFFFFFFFFLL;
    *a4 = -1;
    if ( a3 >= v17 )
    {
      if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u || a3 - v17 >= v15[6] )
        goto LABEL_13;
      v18 = (unsigned int)v15[8];
      v19 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
        goto LABEL_9;
    }
    else
    {
      v18 = (unsigned int)v15[7];
      v19 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
      {
LABEL_9:
        v20 = sub_1407C9820(v19);
        goto LABEL_10;
      }
    }
    v20 = sub_1406BF400(v19, v18, &v48);
LABEL_10:
    if ( v20 )
    {
      *a4 = sub_1407C82B0(BugCheckParameter3);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v48);
      else
        sub_1407C97C0(BugCheckParameter3, &v48);
    }
    else
    {
      v10 = -1073741670;
    }
    goto LABEL_13;
  }
  v22 = v14[5];
  LODWORD(v47[0]) = v22;
  LODWORD(v48) = 0;
  v45[0] = -1;
  v45[1] = 0;
  v46[0] = -1;
  v46[1] = 0;
  if ( v22 )
    LODWORD(BugCheckParameter4) = v14[7];
  else
    LODWORD(BugCheckParameter4) = -1;
  v23 = v14[6];
  if ( v23 )
    LODWORD(v43) = v15[8];
  else
    LODWORD(v43) = -1;
  v24 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  LODWORD(j) = v22 + v23;
  if ( v24 )
    sub_1407C97C0(BugCheckParameter3, &v40);
  else
    sub_1406BF450(BugCheckParameter3, &v40);
  v25 = j;
  v26 = 0;
  v15 = 0LL;
  for ( i = 0; v26 < (unsigned int)j; i = v26 )
  {
    v27 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
    BugCheckParameter2 = 0LL;
    if ( v26 >= LODWORD(v47[0]) )
    {
      if ( v27 )
        v38 = sub_1406BF400(BugCheckParameter3, (unsigned int)v43, v46);
      else
        v38 = sub_1407C9820(BugCheckParameter3);
      if ( !v38 )
        return 3221225626LL;
      v29 = sub_1407C82B0(BugCheckParameter3);
      v30 = v46;
    }
    else
    {
      if ( v27 )
        v28 = sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, v45);
      else
        v28 = sub_1407C9820(BugCheckParameter3);
      if ( !v28 )
        return 3221225626LL;
      v29 = sub_1407C82B0(BugCheckParameter3);
      v30 = v45;
    }
    v24 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    *a4 = v29;
    if ( v24 )
      sub_1407C97C0(BugCheckParameter3, v30);
    else
      sub_1406BF450(BugCheckParameter3, v30);
    if ( *a4 == -1 )
      return 3221225626LL;
    result = sub_14071B730(a5, a6, BugCheckParameter3, *a4, &BugCheckParameter2);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    v9 = BugCheckParameter2;
    if ( !BugCheckParameter2 || sub_1406A7690(BugCheckParameter2, a7, v31) && !sub_14071A6D4(v9, a7) )
      LODWORD(v48) = v48 + 1;
    if ( (_DWORD)v48 == a3 + 1 )
      goto LABEL_13;
    if ( v9 )
      sub_1407C0C50(v9, a8);
    v25 = j;
    v26 = i + 1;
  }
  if ( v26 == v25 )
  {
    v47[0] = 0LL;
    v32 = a5 + 208;
    *a4 = -1;
    v43 = v32;
    v33 = sub_140AB4218(v32, v47, 32LL);
    for ( j = v33; v33; j = v33 )
    {
      if ( sub_140721FD0(*(_QWORD *)(v33 + 56), a7) )
      {
        v35 = *(_DWORD *)(j + 68);
        if ( v35 == 1 )
        {
          v9 = *(_QWORD *)(j + 88);
        }
        else
        {
          if ( v35 != 10 )
            goto LABEL_53;
          v9 = *(_QWORD *)(j + 96);
        }
        BugCheckParameter2 = v9;
        if ( sub_1406A7690(v9, a7, v34) && !sub_14071A6D4(v9, a7) )
        {
          if ( (_DWORD)v48 == a3 )
          {
            *a4 = *(_DWORD *)(v9 + 40);
            sub_14071B250(v9);
            break;
          }
          LODWORD(v48) = v48 + 1;
        }
      }
LABEL_53:
      v9 = 0LL;
      BugCheckParameter2 = 0LL;
      v33 = sub_140AB4218(v43, v47, 32LL);
    }
  }
LABEL_13:
  if ( !v16 || (v36 = *a4, *a4 == -1) )
  {
    if ( v9 )
      sub_1407C0C50(v9, a8);
  }
  else
  {
    if ( !v9 )
    {
      if ( v15 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v40);
        else
          sub_1407C97C0(BugCheckParameter3, &v40);
        v36 = *a4;
        v15 = 0LL;
      }
      v37 = sub_14071B730(a5, a6, BugCheckParameter3, v36, &BugCheckParameter2);
      v9 = BugCheckParameter2;
      v10 = v37;
      if ( v37 < 0 )
        *a4 = -1;
    }
    *v16 = v9;
  }
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v40);
    else
      sub_1407C97C0(BugCheckParameter3, &v40);
  }
  return v10;
}
