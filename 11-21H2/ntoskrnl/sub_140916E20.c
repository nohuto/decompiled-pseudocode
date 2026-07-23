/*
 * XREFs of sub_140916E20 @ 0x140916E20
 * Callers:
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 * Callees:
 *     sub_14065C51C @ 0x14065C51C (sub_14065C51C.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C0C50 @ 0x1407C0C50 (sub_1407C0C50.c)
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_140916E20(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        ULONG_PTR *a8,
        _DWORD *a9)
{
  unsigned int v9; // r9d
  unsigned int v10; // edi
  char v11; // r14
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  ULONG_PTR v15; // rsi
  ULONG_PTR v16; // r15
  __int64 v17; // r13
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // r12
  int v22; // eax
  int v23; // r14d
  ULONG_PTR v24; // rcx
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30; // r12
  int v31; // r14d
  unsigned int v32; // eax
  int v33; // eax
  bool v34; // sf
  bool v35; // cc
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  char v40; // [rsp+58h] [rbp-51h]
  unsigned int v41; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v42; // [rsp+60h] [rbp-49h]
  BOOL v43; // [rsp+64h] [rbp-45h]
  unsigned int BugCheckParameter4; // [rsp+68h] [rbp-41h] BYREF
  unsigned int BugCheckParameter4_4; // [rsp+6Ch] [rbp-3Dh]
  unsigned int v46; // [rsp+70h] [rbp-39h]
  __int64 v47; // [rsp+78h] [rbp-31h] BYREF
  __int64 v48; // [rsp+80h] [rbp-29h]
  __int64 v49; // [rsp+88h] [rbp-21h] BYREF
  __int64 v50; // [rsp+90h] [rbp-19h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-11h] BYREF
  ULONG_PTR v52; // [rsp+A0h] [rbp-9h] BYREF

  HIDWORD(v49) = 0;
  v9 = a3;
  HIDWORD(v47) = 0;
  BugCheckParameter4_4 = 0;
  v10 = -1073741670;
  v46 = 0;
  v11 = 0;
  v40 = 0;
  *a6 = 0LL;
  v12 = 0;
  v13 = -1;
  v48 = 0LL;
  v14 = -1;
  LODWORD(v49) = -1;
  v15 = 0LL;
  LODWORD(v47) = -1;
  v16 = 0LL;
  *a7 = -1;
  BugCheckParameter4 = -1;
  v43 = a2 == 0;
  v41 = -1;
  LOBYTE(v42) = 0;
  BugCheckParameter2 = 0LL;
  v52 = 0LL;
LABEL_2:
  v50 = 0LL;
  while ( 1 )
  {
    if ( v11 && v12 >= v9 )
    {
LABEL_85:
      v10 = -2147483622;
      goto LABEL_36;
    }
    if ( v15 )
    {
      sub_1407C0C50(v15, a5);
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    if ( v16 )
    {
      sub_1407C0C50(v16, a5);
      v16 = 0LL;
      v52 = 0LL;
    }
    if ( !(_BYTE)v42 && v13 == -1 )
    {
      v17 = a1;
      v18 = sub_1407C3070(
              *(_QWORD *)(a1 + 32),
              *(unsigned int *)(a1 + 40),
              BugCheckParameter4_4,
              &BugCheckParameter4,
              a1 & -(__int64)(a4 != 0),
              a2 & -(__int64)(a4 != 0),
              a4,
              a5,
              (ULONG_PTR *)((unsigned __int64)&BugCheckParameter2 & -(__int64)(a4 != 0)));
      v15 = BugCheckParameter2;
      v10 = v18;
      if ( v18 < 0 )
        goto LABEL_37;
      v13 = BugCheckParameter4;
      v19 = (unsigned __int8)v42;
      if ( BugCheckParameter4 == -1 )
        v19 = 1;
      v42 = v19;
    }
    LOBYTE(v20) = v43;
    if ( !v43 && v14 == -1 )
    {
      v21 = a2;
      v22 = sub_1407C3070(
              *(_QWORD *)(a2 + 32),
              *(unsigned int *)(a2 + 40),
              v46,
              &v41,
              a2 & -(__int64)(a4 != 0),
              a1 & -(__int64)(a4 != 0),
              a4,
              a5,
              (ULONG_PTR *)((unsigned __int64)&v52 & -(__int64)(a4 != 0)));
      v16 = v52;
      v10 = v22;
      if ( v22 < 0 )
        goto LABEL_56;
      v14 = v41;
      v20 = v43;
      if ( v41 == -1 )
        v20 = 1;
      v43 = v20;
    }
    if ( (_BYTE)v42 )
    {
      if ( (_BYTE)v20 )
        goto LABEL_85;
      v23 = 2;
    }
    else
    {
      v23 = (_BYTE)v20 != 0;
    }
    if ( v14 != -1 )
    {
      v24 = *(_QWORD *)(a2 + 32);
      v25 = (*(_BYTE *)(v24 + 140) & 1) != 0
          ? sub_1406BF400(v24, v14, &v47)
          : sub_1407C9820(v24, v14, (unsigned int *)&v47);
      v50 = v25;
      if ( !v25 )
      {
LABEL_35:
        v11 = v40;
LABEL_36:
        v17 = a1;
LABEL_37:
        v21 = a2;
        goto LABEL_38;
      }
    }
    if ( v13 == -1 )
    {
      v28 = v48;
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
        v27 = sub_1406BF400(v26, v13, &v49);
      else
        v27 = sub_1407C9820(v26, v13, (unsigned int *)&v49);
      v48 = v27;
      v28 = v27;
      if ( !v27 )
        goto LABEL_35;
    }
    v30 = 0;
    if ( !v23 )
      break;
    v31 = v23 - 1;
    if ( !v31 )
    {
      v32 = v12 + 1;
      v11 = 1;
LABEL_58:
      if ( !v40 )
        v32 = v12;
      v12 = v32;
      if ( v32 == a3 )
        goto LABEL_61;
LABEL_70:
      ++BugCheckParameter4_4;
      v13 = -1;
      BugCheckParameter4 = -1;
      v11 = 1;
      v40 = 1;
      if ( v30 )
        goto LABEL_71;
      v14 = v41;
LABEL_74:
      v28 = v48;
      goto LABEL_75;
    }
    if ( v31 == 1 )
    {
      v32 = v12 + 1;
      v11 = 1;
      goto LABEL_50;
    }
    v14 = v41;
    v11 = v40;
LABEL_75:
    if ( v28 )
    {
      v36 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
        sub_1406BF450(v36, &v49);
      else
        sub_1407C97C0(v36, (unsigned int *)&v49);
      v48 = 0LL;
    }
    v9 = a3;
    if ( v50 )
    {
      v37 = *(_QWORD *)(a2 + 32);
      if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
        sub_1406BF450(v37, &v47);
      else
        sub_1407C97C0(v37, (unsigned int *)&v47);
      v9 = a3;
      goto LABEL_2;
    }
  }
  v33 = sub_14065C51C(v28, v50);
  v34 = v33 < 0;
  v35 = v33 <= 0;
  v32 = v12 + 1;
  v11 = 1;
  if ( v34 )
    goto LABEL_58;
  if ( v35 )
  {
    if ( !v40 )
      v32 = v12;
    v12 = v32;
    if ( v32 == a3 )
    {
LABEL_61:
      *a6 = *(_QWORD *)(a1 + 32);
      *a7 = v13;
      if ( a8 )
      {
        *a8 = v15;
        v15 = 0LL;
      }
      v10 = 0;
      goto LABEL_36;
    }
    v30 = 1;
    goto LABEL_70;
  }
LABEL_50:
  if ( !v40 )
    v32 = v12;
  v12 = v32;
  if ( v32 != a3 )
  {
LABEL_71:
    v14 = -1;
    v40 = 1;
    ++v46;
    v11 = 1;
    v41 = -1;
    goto LABEL_74;
  }
  v21 = a2;
  *a6 = *(_QWORD *)(a2 + 32);
  *a7 = v41;
  if ( a8 )
  {
    *a8 = v16;
    v16 = 0LL;
  }
  v10 = 0;
LABEL_56:
  v17 = a1;
LABEL_38:
  if ( v15 )
    sub_1407C0C50(v15, a5);
  if ( v16 )
    sub_1407C0C50(v16, a5);
  if ( v50 )
  {
    v29 = *(_QWORD *)(v21 + 32);
    if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
      sub_1406BF450(v29, &v47);
    else
      sub_1407C97C0(v29, (unsigned int *)&v47);
  }
  if ( v48 )
  {
    v38 = *(_QWORD *)(v17 + 32);
    if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
      sub_1406BF450(v38, &v49);
    else
      sub_1407C97C0(v38, (unsigned int *)&v49);
  }
  *a9 = v11 != 0 ? v12 + 1 : 0;
  return v10;
}
