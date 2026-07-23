/*
 * XREFs of sub_14037DDFC @ 0x14037DDFC
 * Callers:
 *     sub_14037A3E0 @ 0x14037A3E0 (sub_14037A3E0.c)
 *     sub_14037C48C @ 0x14037C48C (sub_14037C48C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14037DDFC(_DWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  _DWORD *v5; // r14
  unsigned int v6; // r8d
  unsigned __int64 *v7; // rax
  bool v8; // cc
  unsigned __int64 *v9; // rcx
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rbp
  _DWORD *v14; // rdi
  unsigned int v15; // r9d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  _DWORD *v19; // rbx
  unsigned int v20; // esi
  _DWORD *v21; // r10
  char v22; // r8
  __int64 v23; // r11
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  char *v27; // r9
  unsigned int v28; // r13d
  char *v29; // r15
  unsigned int v30; // eax
  size_t v31; // r8
  size_t v33; // r8
  int v34; // eax
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r11
  __int64 v40; // [rsp+20h] [rbp-58h]
  unsigned __int64 v41; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v42; // [rsp+88h] [rbp+10h] BYREF
  char *v43; // [rsp+90h] [rbp+18h]
  __int64 v44; // [rsp+98h] [rbp+20h]

  v41 = (unsigned __int64)a1;
  v2 = 1LL;
  v3 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v4 = *(_DWORD **)(v3 - 16);
  v5 = *(_DWORD **)(v3 - 8);
  v6 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v3 + 3LL) != 0) + 255;
  if ( v5 == &v4[4 * (unsigned __int16)*v4 + 4] )
  {
    v41 = *(_QWORD *)v3;
    v5 -= 4;
    v7 = (unsigned __int64 *)(v4 + 2);
    v8 = v5 <= v4 + 4;
    v9 = (unsigned __int64 *)&v42;
    v10 = (unsigned __int64 *)(v5 - 2);
    if ( v8 )
      v10 = v7;
  }
  else
  {
    v42 = *(_DWORD **)v3;
    v10 = (unsigned __int64 *)(v5 + 2);
    v9 = &v41;
    v2 = 0LL;
  }
  v11 = *v10;
  *v9 = *v10;
  v12 = v11 | v2;
  v13 = v41;
  v14 = v42;
  v15 = (unsigned __int16)*(_DWORD *)v41;
  v16 = (unsigned __int16)*v42;
  v17 = v16 + v15;
  if ( v16 + v15 >= v6 && v17 < 2 * v6 - 1 )
  {
    v18 = v17 >> 1;
    if ( v16 > v15 )
    {
      v19 = v42;
      v20 = v16 - v18;
      v21 = v42;
      v14 = (_DWORD *)v41;
    }
    else
    {
      v19 = (_DWORD *)v41;
      v20 = v18 - v16;
      v21 = v42;
    }
    v22 = *((_BYTE *)v19 + 3);
    v42 = v21;
    v23 = v15 < v16 ? v18 : 0;
    v24 = 0;
    v44 = v23;
    if ( v16 <= v15 )
      v24 = v16;
    v25 = v24;
    v40 = v24;
    v26 = (-(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 16;
    v27 = (char *)v14 + v26 * v24 + 16;
    v28 = v22 != 0 ? 8 : 16;
    v43 = v27;
    v29 = (char *)v19 + v26 * v23 + 16;
    if ( v19 == v21 )
    {
      v33 = v28 * (unsigned __int16)*v14;
      v41 = v20 * v28;
      memmove(&v27[v41], v27, v33);
      v22 = *((_BYTE *)v19 + 3);
      v27 = v43;
      v21 = v42;
      v30 = v41;
      v23 = v44;
      v25 = v40;
    }
    else
    {
      v30 = v28 * v20;
      v41 = v28 * v20;
    }
    if ( v22 )
    {
      v31 = v30;
    }
    else
    {
      v34 = *v5;
      v35 = v20 - 1;
      v36 = v28;
      if ( v19 == v21 )
      {
        v37 = 2LL * v35;
        v14[2 * v37 + 4] = v34;
        *(_QWORD *)&v14[2 * v37 + 6] = *((_QWORD *)v14 + 1);
        v36 = v28;
      }
      else
      {
        v38 = 2 * v25;
        v27 += v28;
        v14[2 * v38 + 4] = v34;
        *(_QWORD *)&v14[2 * v38 + 6] = *((_QWORD *)v19 + 1);
      }
      if ( v19 == v21 )
      {
        v39 = 2 * v23;
        v29 += v36;
        *v5 = v19[2 * v39 + 4];
        *((_QWORD *)v14 + 1) = *(_QWORD *)&v19[2 * v39 + 6];
      }
      else
      {
        v35 = v20 - 1;
        *v5 = v19[4 * v20];
        *((_QWORD *)v19 + 1) = *(_QWORD *)&v19[4 * v20 + 2];
      }
      v31 = v28 * v35;
    }
    memmove(v27, v29, v31);
    *(_WORD *)v14 += v20;
    *(_WORD *)v19 -= v20;
    if ( v19 == (_DWORD *)v13 )
      memmove(v29, &v29[(unsigned int)v41], v28 * (unsigned __int16)*v19);
    if ( *(_BYTE *)(v13 + 3) )
      *v5 = *(_DWORD *)(v13 + 16);
  }
  return v12;
}
