/*
 * XREFs of sub_1403803F8 @ 0x1403803F8
 * Callers:
 *     sub_1403800F0 @ 0x1403800F0 (sub_1403800F0.c)
 *     sub_1403831B8 @ 0x1403831B8 (sub_1403831B8.c)
 * Callees:
 *     sub_140382BC0 @ 0x140382BC0 (sub_140382BC0.c)
 *     sub_1403830D4 @ 0x1403830D4 (sub_1403830D4.c)
 *     sub_1403831B8 @ 0x1403831B8 (sub_1403831B8.c)
 *     sub_140383620 @ 0x140383620 (sub_140383620.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F6710 @ 0x1405F6710 (sub_1405F6710.c)
 */

__int64 __fastcall sub_1403803F8(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 *v10; // r14
  _DWORD *v11; // rsi
  char v12; // cl
  int v13; // r9d
  unsigned int v14; // r12d
  _DWORD *v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r10
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  bool v29; // cc
  _DWORD **v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  _DWORD *v33; // rdx
  char v34; // cl
  int v35; // edi
  int v36; // eax
  __int64 v37; // rax

  v3 = *(_DWORD **)a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *((unsigned __int8 *)v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)sub_140383620(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v37 = sub_1403830D4(a1, 1LL, 1LL);
    *(_QWORD *)a1 = v37;
    if ( !v37 )
      return (unsigned int)-1073741670;
    v10 = *(__int64 **)a2;
    *v10 = v37;
    v10[1] = *(_QWORD *)a1 + 16LL;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = (_DWORD *)*v10;
  v12 = *(_BYTE *)(*v10 + 3);
  v13 = *(_DWORD *)*v10;
  v14 = v12 != 0 ? 1020 : 255;
  if ( (unsigned __int16)v13 >= v14 )
  {
    v17 = v10[1] - (_QWORD)v11 - 16;
    v18 = v17 >> 2;
    v19 = v17 >> 4;
    if ( !v12 )
      LODWORD(v18) = v19;
    if ( v11 == *(_DWORD **)a1 )
    {
      v23 = 0LL;
      v22 = 0LL;
      v21 = 0LL;
    }
    else
    {
      v20 = sub_140382BC0(a1, a2);
      v21 = *(v10 - 1);
      v13 = *v11;
      v22 = v20;
      v23 = v21 + 32LL * ((v20 & 1) == 0) - 16;
    }
    v24 = (unsigned __int16)v13;
    if ( (unsigned __int16)v13 < v14 )
    {
      if ( (v22 & 1) == 0 )
        goto LABEL_17;
      v33 = (_DWORD *)(v22 & 0xFFFFFFFFFFFFFFFEuLL);
      LODWORD(v18) = (unsigned __int16)v13 + v18 - v14;
      if ( *((_BYTE *)v11 + 3) )
      {
        if ( (int)v18 <= 0 )
        {
          v11 = v33;
          LODWORD(v18) = (unsigned __int16)*v33 + (_DWORD)v18;
        }
      }
      else if ( (int)v18 < 0 )
      {
        v11 = v33;
        LODWORD(v18) = (unsigned __int16)*v33 + v18 + 1;
        goto LABEL_48;
      }
      if ( v11 != v33 )
      {
LABEL_18:
        v21 = v23;
LABEL_19:
        *v10 = (__int64)v11;
        if ( *((_BYTE *)v11 + 3) )
        {
          v25 = v21 - 8;
          v10[1] = (__int64)&v11[(int)v18 + 4];
          v26 = *(v10 - 2);
          v27 = v26 + 16;
          v28 = v26 + 8;
          v29 = v21 <= v27;
          v30 = (_DWORD **)(a1 + 16);
          if ( v29 )
            v25 = v28;
          if ( **v30 != -1 )
            sub_1405F6710(v30, v25);
        }
        else
        {
          v10[1] = (__int64)&v11[4 * (int)v18 + 4];
        }
        v12 = *((_BYTE *)v11 + 3);
        v13 = *v11;
        goto LABEL_7;
      }
LABEL_48:
      *(v10 - 1) = v23;
      goto LABEL_19;
    }
    if ( v22 && *((_BYTE *)v11 + 3) )
    {
      v31 = *(v10 - 2);
      v32 = v23 > v31 + 16 ? v23 - 8 : v31 + 8;
      if ( **(_DWORD **)(a1 + 16) != -1 )
        sub_1405F6710(a1 + 16, v32);
    }
    v22 = sub_1403831B8(a1, a2, v23);
    if ( v22 )
    {
      v10 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v24 = (unsigned __int16)*v11;
      v21 = *(v10 - 1);
      v23 = v21 + 16;
LABEL_17:
      if ( (int)v18 > v24 )
      {
        v34 = *((_BYTE *)v11 + 3);
        v35 = v18 - v24;
        *(v10 - 1) = v23;
        v11 = (_DWORD *)v22;
        v36 = v35 - 1;
        if ( v34 )
          v36 = v35;
        LODWORD(v18) = v36;
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v15 = (_DWORD *)v10[1];
  if ( v12 )
  {
    memmove(v15 + 1, v15, (size_t)v11 + 4LL * (unsigned __int16)v13 + 16 - (_QWORD)v15);
    *v15 = *a3;
    ++*(_QWORD *)(a1 + 8);
  }
  else
  {
    memmove(v15 + 4, v15, (size_t)v11 + 16 * ((unsigned __int16)v13 + 1LL) - (_QWORD)v15);
    *(_OWORD *)v15 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
