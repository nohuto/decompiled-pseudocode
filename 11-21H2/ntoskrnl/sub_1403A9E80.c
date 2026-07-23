/*
 * XREFs of sub_1403A9E80 @ 0x1403A9E80
 * Callers:
 *     sub_1403A8E50 @ 0x1403A8E50 (sub_1403A8E50.c)
 * Callees:
 *     sub_1403A8BCC @ 0x1403A8BCC (sub_1403A8BCC.c)
 *     sub_1403AA1D0 @ 0x1403AA1D0 (sub_1403AA1D0.c)
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403A9E80(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, unsigned int *a5, __int64 a6)
{
  unsigned __int16 *v8; // r13
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  int v11; // edx
  unsigned int v12; // r12d
  int v13; // r9d
  _BYTE *v14; // r10
  unsigned int v15; // r11d
  unsigned int v16; // r8d
  char *v17; // rax
  char *v18; // r14
  int v19; // ebp
  char *v20; // rdi
  unsigned int v21; // esi
  unsigned int v22; // r10d
  unsigned int v23; // r15d
  unsigned int v24; // r9d
  unsigned int v25; // edx
  int v26; // r8d
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 result; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  char v37; // al
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // [rsp+20h] [rbp-48h]
  __int64 v43; // [rsp+28h] [rbp-40h]

  if ( a3 < 2 )
    return 3221225485LL;
  v8 = *(unsigned __int16 **)(a1 + 26);
  v9 = a3 - 2;
  v10 = 0;
  v42 = a3 - 2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( a3 == 2 )
    goto LABEL_53;
  v14 = (_BYTE *)(a2 + 16);
  do
  {
    v15 = v13 + 1;
    v16 = v13 + 1;
    if ( v13 == v8[v11] )
    {
      if ( v11 )
        v16 = v8[v11 - 1] + 1;
      else
        v16 = 0;
      ++v11;
    }
    if ( (*v14 & 1) != 0 || (*(_BYTE *)(17LL * v16 + a2 + 16) & 1) == 0 )
      ++v12;
    v14 += 17;
    ++v13;
  }
  while ( v15 < v9 );
  if ( !v12 )
  {
LABEL_53:
    *a4 = 0LL;
    result = 0LL;
LABEL_54:
    *a5 = 0;
    return result;
  }
  v17 = (char *)sub_1403AA258(25LL * v12);
  v43 = (__int64)v17;
  v18 = v17;
  if ( !v17 )
  {
    result = 3221225626LL;
    goto LABEL_54;
  }
  memset(v17, 0, 25LL * v12);
  v19 = 0;
  v20 = v18 + 16;
  v21 = 0;
  while ( 1 )
  {
    v22 = v21 + 1;
    v23 = v21 + 1;
    v24 = v21 - 1;
    v25 = v21 + 2;
    if ( v21 )
    {
      if ( v19 && v21 == v8[v19 - 1] + 1 )
        v24 = v8[v19];
    }
    else
    {
      v24 = *v8;
    }
    v26 = v8[v19];
    if ( v21 == v26 - 1 )
    {
      if ( v19 )
        v25 = v8[v19 - 1] + 1;
      else
        v25 = 0;
    }
    if ( v21 == v26 )
    {
      if ( v19 )
      {
        v41 = v8[v19 - 1];
        v23 = v41 + 1;
        v25 = v41 + 2;
      }
      else
      {
        v23 = 0;
        v25 = 1;
      }
      ++v19;
    }
    v27 = a2 + 17LL * v21;
    if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
    {
      v35 = a2 + 17LL * v23;
      if ( (*(_BYTE *)(v35 + 16) & 1) != 0 )
      {
        *((_QWORD *)v20 - 2) = v27;
        *((_QWORD *)v20 - 1) = v35;
        *(_QWORD *)v20 = v35;
        v20[8] = 1;
      }
      else
      {
        v36 = a2 + 17LL * v25;
        v37 = *(_BYTE *)(v36 + 16);
        *((_QWORD *)v20 - 2) = v27;
        *((_QWORD *)v20 - 1) = v35;
        if ( (v37 & 1) != 0 )
        {
          *(_QWORD *)v20 = v36;
          v39 = 2;
        }
        else
        {
          v38 = sub_1403AA1D0(v35, v36, a6);
          *(_QWORD *)v20 = v38;
          if ( !v38 )
            break;
          v22 = v21 + 1;
          v39 = 4;
        }
        v20[8] = v39;
        if ( v23 > v21 )
        {
          v21 = v22;
          if ( v22 == v8[v19] )
            ++v19;
        }
      }
      goto LABEL_24;
    }
    if ( !v21 && (*(_BYTE *)(17LL * v24 + a2 + 16) & 1) != 0
      || v19 && v21 == v8[v19 - 1] + 1 && (*(_BYTE *)(17LL * v24 + a2 + 16) & 1) != 0 )
    {
      goto LABEL_25;
    }
    v28 = a2 + 17LL * v21;
    v29 = a2 + 17LL * v24;
    v30 = a2 + 17LL * v23;
    if ( (*(_BYTE *)(v30 + 16) & 1) != 0 )
    {
      v40 = sub_1403AA1D0(v29, v28, a6);
      *((_QWORD *)v20 - 2) = v40;
      if ( !v40 )
        break;
      *((_QWORD *)v20 - 1) = v27;
      *(_QWORD *)v20 = v30;
      v20[8] = 3;
      goto LABEL_24;
    }
    v31 = sub_1403AA1D0(v29, v28, a6);
    *((_QWORD *)v20 - 2) = v31;
    if ( !v31 )
      break;
    *((_QWORD *)v20 - 1) = v27;
    v32 = sub_1403AA1D0(v27, v30, a6);
    *(_QWORD *)v20 = v32;
    if ( !v32 )
      break;
    v20[8] = 5;
LABEL_24:
    v20 += 25;
LABEL_25:
    if ( ++v21 >= v42 )
    {
      v33 = v43;
      goto LABEL_27;
    }
  }
  sub_1403A8BCC(v43, v12, a6);
  v33 = 0LL;
  v12 = 0;
  v10 = -1073741670;
LABEL_27:
  *a5 = v12;
  *a4 = v33;
  return v10;
}
