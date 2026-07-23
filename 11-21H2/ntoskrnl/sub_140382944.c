/*
 * XREFs of sub_140382944 @ 0x140382944
 * Callers:
 *     sub_140380950 @ 0x140380950 (sub_140380950.c)
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 */

__int64 __fastcall sub_140382944(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r8
  __int64 v4; // r15
  __int64 v5; // r11
  _DWORD *v6; // r14
  unsigned int v7; // ebx
  __int64 *v8; // rdi
  __int64 *v9; // r9
  __int64 v10; // rax
  _DWORD *v11; // rbp
  __int64 v12; // r13
  _DWORD *v13; // rdi
  unsigned int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  _DWORD *v18; // rbx
  unsigned int v19; // esi
  unsigned __int64 v20; // r10
  char v21; // r9
  __int64 v22; // r11
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r12d
  __int64 v26; // rdx
  char *v27; // r15
  char *v28; // r9
  char v29; // dl
  unsigned int v30; // eax
  size_t v31; // r8
  size_t v33; // r8
  _DWORD **v34; // rcx
  int v35; // eax
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r11
  __int64 v41; // [rsp+20h] [rbp-58h]
  __int64 v42; // [rsp+28h] [rbp-50h]
  _DWORD *v43; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v45; // [rsp+90h] [rbp+18h]
  char *v46; // [rsp+98h] [rbp+20h]

  v44 = 0LL;
  v43 = 0LL;
  v2 = 1LL;
  v3 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v4 = 16LL;
  v5 = *(_QWORD *)(v3 - 16);
  v6 = *(_DWORD **)(v3 - 8);
  v7 = *(_BYTE *)(*(_QWORD *)v3 + 3LL) != 0 ? 1020 : 255;
  if ( v6 == (_DWORD *)(v5 + 16 * ((unsigned __int16)*(_DWORD *)v5 + 1LL)) )
  {
    v6 -= 4;
    v43 = *(_DWORD **)v3;
    v8 = (__int64 *)&v44;
    v9 = (__int64 *)(v6 - 2);
    if ( (unsigned __int64)v6 <= v5 + 16 )
      v9 = (__int64 *)(v5 + 8);
  }
  else
  {
    v44 = *(_QWORD *)v3;
    v9 = (__int64 *)(v6 + 2);
    v8 = (__int64 *)&v43;
    v2 = 0LL;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *(_BYTE *)(v5 + 2) != 2 )
  {
    v10 = *v9;
    *v8 = *v9;
  }
  else
  {
    v34 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v34 == -1 )
      v10 = *v9;
    else
      v10 = sub_1405F67D0(v34, v9, 0LL);
    *v8 = v10;
    if ( !v10 )
      return 0LL;
  }
  v11 = v43;
  v12 = v10 | v2;
  v13 = (_DWORD *)v44;
  v14 = (unsigned __int16)*v43;
  v15 = (unsigned __int16)*(_DWORD *)v44;
  v16 = v15 + v14;
  if ( v15 + v14 >= v7 && v16 < 2 * v7 - 1 )
  {
    v17 = v16 >> 1;
    if ( v15 > v14 )
    {
      v18 = (_DWORD *)v44;
      v19 = v15 - v17;
      v20 = v44;
      v13 = v43;
    }
    else
    {
      v18 = v43;
      v19 = v17 - v15;
      v20 = v44;
    }
    v21 = *((_BYTE *)v18 + 3);
    v45 = v20;
    LOBYTE(v43) = v21;
    v22 = v14 < v15 ? v17 : 0;
    v23 = 0;
    v41 = v22;
    if ( v15 <= v14 )
      v23 = v15;
    v24 = v23;
    v42 = v23;
    if ( v21 )
    {
      v25 = 4;
      v4 = 4LL;
      v26 = 4LL;
    }
    else
    {
      v25 = 16;
      v26 = 16LL;
    }
    v27 = (char *)v18 + v22 * v4 + 16;
    v28 = (char *)v13 + v26 * v23 + 16;
    v46 = v28;
    if ( v18 == (_DWORD *)v20 )
    {
      v33 = v25 * (unsigned __int16)*v13;
      v44 = v25 * v19;
      memmove(&v28[v44], v28, v33);
      v29 = *((_BYTE *)v18 + 3);
      v28 = v46;
      v20 = v45;
      v30 = v44;
      v22 = v41;
      v24 = v42;
    }
    else
    {
      v29 = (char)v43;
      v30 = v25 * v19;
      v44 = v25 * v19;
    }
    if ( v29 )
    {
      v31 = v30;
    }
    else
    {
      v35 = *v6;
      v36 = v19 - 1;
      if ( v18 == (_DWORD *)v20 )
      {
        v37 = 2LL * v36;
        v13[2 * v37 + 4] = v35;
        *(_QWORD *)&v13[2 * v37 + 6] = *((_QWORD *)v13 + 1);
        v38 = v25;
      }
      else
      {
        v39 = 2 * v24;
        v13[2 * v39 + 4] = v35;
        *(_QWORD *)&v13[2 * v39 + 6] = *((_QWORD *)v18 + 1);
        v38 = v25;
        v28 += v25;
      }
      if ( v18 == (_DWORD *)v20 )
      {
        v40 = 2 * v22;
        v27 += v38;
        *v6 = v18[2 * v40 + 4];
        *((_QWORD *)v13 + 1) = *(_QWORD *)&v18[2 * v40 + 6];
      }
      else
      {
        v36 = v19 - 1;
        *v6 = v18[4 * v19];
        *((_QWORD *)v18 + 1) = *(_QWORD *)&v18[4 * v19 + 2];
      }
      v31 = v25 * v36;
    }
    memmove(v28, v27, v31);
    *(_WORD *)v13 += v19;
    *(_WORD *)v18 -= v19;
    if ( v18 == v11 )
      memmove(v27, &v27[(unsigned int)v44], v25 * (unsigned __int16)*v18);
    if ( *((_BYTE *)v11 + 3) )
      *v6 = v11[4];
  }
  return v12;
}
