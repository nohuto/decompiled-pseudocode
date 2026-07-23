/*
 * XREFs of sub_140716758 @ 0x140716758
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140923D00 @ 0x140923D00 (sub_140923D00.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140715A2C @ 0x140715A2C (sub_140715A2C.c)
 *     sub_140716D50 @ 0x140716D50 (sub_140716D50.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_140716758(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, char a3)
{
  __int64 v3; // r14
  bool v4; // zf
  char v5; // r13
  unsigned int v6; // r12d
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // edi
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 *v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v22[2]; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+48h]
  char v26; // [rsp+90h] [rbp+50h]

  v26 = a3;
  v25 = a2;
  v3 = 0LL;
  v23[0] = 0xFFFFFFFFLL;
  v4 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v5 = a3;
  v6 = a2;
  v22[0] = -1;
  v22[1] = 0;
  v24 = 0xFFFFFFFFLL;
  v21 = 0xFFFFFFFFLL;
  if ( v4 )
    v8 = sub_1407C9820(BugCheckParameter3);
  else
    v8 = sub_1406BF400(BugCheckParameter3, a2, v23);
  v9 = v8;
  if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
  {
    v10 = 0;
    goto LABEL_38;
  }
  v10 = sub_14071F300(BugCheckParameter3, v6);
  if ( v10 < 0 )
    goto LABEL_38;
  v11 = *(unsigned int *)(v9 + 48);
  if ( (_DWORD)v11 != -1 )
  {
    v10 = sub_14071F300(BugCheckParameter3, v11);
    if ( v10 < 0 )
      goto LABEL_38;
  }
  v12 = *(unsigned int *)(v9 + 44);
  if ( (_DWORD)v12 == -1 )
  {
LABEL_14:
    if ( (*(_BYTE *)(v9 + 2) & 0x40) == 0 && *(_DWORD *)(v9 + 36) )
    {
      v10 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v9 + 40));
      if ( v10 < 0 )
        goto LABEL_38;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v15 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v9 + 40), v22);
      else
        v15 = sub_1407C9820(BugCheckParameter3);
      v16 = 0LL;
      v3 = v15;
      if ( *(_DWORD *)(v9 + 36) )
      {
        while ( 1 )
        {
          v10 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v3 + 4 * v16));
          if ( v10 < 0 )
            break;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v17 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v3 + 4 * v16), &v21);
          else
            v17 = sub_1407C9820(BugCheckParameter3);
          v18 = v17;
          v10 = sub_140716D50(BugCheckParameter3);
          if ( v10 < 0 )
          {
            if ( v18 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                sub_1406BF450(BugCheckParameter3, &v21);
              else
                sub_1407C97C0(BugCheckParameter3, &v21);
            }
            break;
          }
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, &v21);
          else
            sub_1407C97C0(BugCheckParameter3, &v21);
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= *(_DWORD *)(v9 + 36) )
          {
            v5 = v26;
            goto LABEL_28;
          }
        }
LABEL_34:
        if ( v3 )
        {
          v19 = (__int64 *)v22;
          goto LABEL_36;
        }
        goto LABEL_38;
      }
LABEL_28:
      v6 = v25;
    }
    if ( (*(_BYTE *)(v9 + 2) & 4) != 0
      || !v5
      || (v10 = sub_140715A2C(BugCheckParameter3, *(unsigned int *)(v9 + 16), v6), v10 >= 0)
      && (v10 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v9 + 16)), v10 >= 0) )
    {
      v10 = 0;
    }
    goto LABEL_34;
  }
  v10 = sub_14071F300(BugCheckParameter3, v12);
  if ( v10 < 0 )
    goto LABEL_38;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v13 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v9 + 44), &v24);
  else
    v13 = sub_1407C9820(BugCheckParameter3);
  v14 = v13;
  v10 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v13 + 4));
  if ( v10 >= 0 )
  {
    v10 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v14 + 8));
    if ( v10 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v24);
      else
        sub_1407C97C0(BugCheckParameter3, &v24);
      goto LABEL_14;
    }
  }
  if ( v14 )
  {
    v19 = &v24;
LABEL_36:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v19);
    else
      sub_1407C97C0(BugCheckParameter3, v19);
  }
LABEL_38:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, v23);
  else
    sub_1407C97C0(BugCheckParameter3, v23);
  return (unsigned int)v10;
}
