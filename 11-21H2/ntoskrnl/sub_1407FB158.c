/*
 * XREFs of sub_1407FB158 @ 0x1407FB158
 * Callers:
 *     sub_1407185B4 @ 0x1407185B4 (sub_1407185B4.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C4460 @ 0x1407C4460 (sub_1407C4460.c)
 *     sub_1407C5F80 @ 0x1407C5F80 (sub_1407C5F80.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140921510 @ 0x140921510 (sub_140921510.c)
 */

__int64 __fastcall sub_1407FB158(
        ULONG_PTR BugCheckParameter3,
        _DWORD *a2,
        const UNICODE_STRING *a3,
        int a4,
        unsigned int **a5,
        unsigned int *a6)
{
  const UNICODE_STRING *v6; // r14
  ULONG_PTR v8; // rdx
  int v10; // edi
  ULONG_PTR v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // r13d
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int *v18; // r14
  ULONG_PTR v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  char v23; // cl
  char v24; // cl
  __int64 v25; // r14
  bool v26; // zf
  ULONG_PTR v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  ULONG_PTR v31; // rdx
  __int64 v32; // rax
  ULONG_PTR v33; // [rsp+30h] [rbp-20h] BYREF
  __int64 v34; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v35[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp+48h] BYREF
  const UNICODE_STRING *v37; // [rsp+A0h] [rbp+50h]
  int v38; // [rsp+A8h] [rbp+58h]

  v38 = a4;
  v37 = a3;
  LODWORD(BugCheckParameter4) = 0;
  LODWORD(v33) = 0;
  v6 = a3;
  v35[0] = 0xFFFFFFFFLL;
  v8 = (unsigned int)*a2;
  v34 = 0xFFFFFFFFLL;
  v10 = sub_14071F300(BugCheckParameter3, v8, 0);
  if ( v10 < 0 )
    return (unsigned int)v10;
  v11 = (unsigned int)*a2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v12 = sub_1406BF400(BugCheckParameter3, v11, v35);
  else
    v12 = sub_1407C9820(BugCheckParameter3, v11, (unsigned int *)v35);
  v13 = v12;
  while ( 1 )
  {
    v14 = sub_1407C5F80(BugCheckParameter3, v13, v6, 0LL, (int *)&BugCheckParameter4);
    if ( (v14 & 0x80000000) != 0 )
    {
      v10 = -1073741670;
      goto LABEL_15;
    }
    v15 = BugCheckParameter4;
    if ( (_DWORD)BugCheckParameter4 == -1 )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v16 = sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v34);
    else
      v16 = sub_1407C9820(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v34);
    v17 = v16;
    if ( *(_WORD *)(v16 + 2) < 0x3F5u )
    {
      v18 = (unsigned int *)(v13 + 4 * (v14 + 1LL));
LABEL_11:
      *a5 = v18;
      *a6 = v15;
      v10 = 0;
      goto LABEL_12;
    }
LABEL_39:
    v10 = sub_140921510(BugCheckParameter3, (__int64)&v33);
    if ( v10 < 0 )
      goto LABEL_12;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v35);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)v35);
    v31 = (unsigned int)v33;
    *a2 = v33;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v32 = sub_1406BF400(BugCheckParameter3, v31, v35);
    else
      v32 = sub_1407C9820(BugCheckParameter3, v31, (unsigned int *)v35);
    v13 = v32;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v34);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v34);
  }
  v18 = (unsigned int *)(v13 + 4 * (v14 + 1LL));
  v20 = *v18;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v21 = sub_1406BF400(BugCheckParameter3, v20, &v34);
  else
    v21 = sub_1407C9820(BugCheckParameter3, v20, (unsigned int *)&v34);
  LODWORD(v33) = *(_DWORD *)(v21 + 4);
  v17 = v21;
  v22 = sub_1407C4460(BugCheckParameter3, v37, 0LL, (unsigned int)v33);
  if ( v22 != 2 )
  {
    v23 = *(_BYTE *)(BugCheckParameter3 + 140);
    if ( v22 >= 0 )
    {
      if ( (v23 & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v34);
      else
        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v34);
      v26 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v15 = *v18;
      LODWORD(BugCheckParameter4) = *v18;
      if ( v26 )
        v30 = sub_1407C9820(BugCheckParameter3, v15, (unsigned int *)&v34);
      else
        v30 = sub_1406BF400(BugCheckParameter3, v15, &v34);
      v17 = v30;
      if ( *(_WORD *)(v30 + 2) < 0x3F5u )
        goto LABEL_11;
      if ( v14 >= (unsigned int)*(unsigned __int16 *)(v13 + 2) - 1 )
        goto LABEL_38;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v34);
      else
        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v34);
      v25 = v14 + 1;
    }
    else
    {
      v24 = v23 & 1;
      if ( !v14 )
      {
        if ( v24 )
          sub_1406BF450(BugCheckParameter3, &v34);
        else
          sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v34);
        v26 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
        v15 = *(_DWORD *)(v13 + 4);
        LODWORD(BugCheckParameter4) = v15;
        if ( v26 )
          v29 = sub_1407C9820(BugCheckParameter3, v15, (unsigned int *)&v34);
        else
          v29 = sub_1406BF400(BugCheckParameter3, v15, &v34);
        v17 = v29;
        if ( *(_WORD *)(v29 + 2) < 0x3F5u )
        {
          v18 = (unsigned int *)(v13 + 4);
          goto LABEL_11;
        }
        goto LABEL_38;
      }
      if ( v24 )
        sub_1406BF450(BugCheckParameter3, &v34);
      else
        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v34);
      v25 = v14 - 1;
    }
    v26 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v18 = (unsigned int *)(v13 + 4 * (v25 + 1));
    v15 = *v18;
    v27 = *v18;
    LODWORD(BugCheckParameter4) = *v18;
    if ( v26 )
      v28 = sub_1407C9820(BugCheckParameter3, v27, (unsigned int *)&v34);
    else
      v28 = sub_1406BF400(BugCheckParameter3, v27, &v34);
    v17 = v28;
    if ( *(_WORD *)(v28 + 2) < 0x3F5u )
      goto LABEL_11;
LABEL_38:
    v6 = v37;
    goto LABEL_39;
  }
  v10 = -1073741670;
LABEL_12:
  if ( v17 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v34);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v34);
  }
LABEL_15:
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v35);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)v35);
  }
  return (unsigned int)v10;
}
