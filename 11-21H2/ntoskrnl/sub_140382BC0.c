/*
 * XREFs of sub_140382BC0 @ 0x140382BC0
 * Callers:
 *     sub_1403803F8 @ 0x1403803F8 (sub_1403803F8.c)
 *     sub_140381A7C @ 0x140381A7C (sub_140381A7C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 */

__int64 __fastcall sub_140382BC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  size_t *v3; // r8
  __int64 v4; // r15
  __int64 v5; // r11
  _DWORD *v6; // r14
  unsigned int v7; // ebx
  __int64 *v8; // r9
  size_t *p_Size; // rdi
  __int64 v10; // rax
  _DWORD *v11; // rbp
  __int64 v12; // r13
  size_t v13; // rdi
  unsigned int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  size_t v18; // rbx
  unsigned int v19; // esi
  size_t v20; // r10
  char v21; // r9
  __int64 v22; // r11
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r12d
  __int64 v26; // rdx
  char *v27; // r15
  char *v28; // r9
  size_t v29; // r8
  char v30; // dl
  unsigned int v31; // eax
  size_t v32; // r8
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
  size_t Size; // [rsp+88h] [rbp+10h] BYREF
  size_t v45; // [rsp+90h] [rbp+18h]
  void *v46; // [rsp+98h] [rbp+20h]

  Size = 0LL;
  v43 = 0LL;
  v2 = 1LL;
  v3 = (size_t *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v4 = 16LL;
  v5 = *(v3 - 2);
  v6 = (_DWORD *)*(v3 - 1);
  v7 = *(_BYTE *)(*v3 + 3) != 0 ? 1020 : 255;
  if ( v6 == (_DWORD *)(v5 + 16 * ((unsigned __int16)*(_DWORD *)v5 + 1LL)) )
  {
    v6 -= 4;
    v43 = (_DWORD *)*v3;
    p_Size = &Size;
    v8 = (__int64 *)(v6 - 2);
    if ( (unsigned __int64)v6 <= v5 + 16 )
      v8 = (__int64 *)(v5 + 8);
  }
  else
  {
    Size = *v3;
    v8 = (__int64 *)(v6 + 2);
    p_Size = (size_t *)&v43;
    v2 = 0LL;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *(_BYTE *)(v5 + 2) != 2 )
  {
    v10 = *v8;
    *p_Size = *v8;
  }
  else
  {
    v34 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v34 == -1 )
      v10 = *v8;
    else
      v10 = sub_1405F67D0(v34, v8, 0LL);
    *p_Size = v10;
    if ( !v10 )
      return 0LL;
  }
  v11 = v43;
  v12 = v10 | v2;
  v13 = Size;
  v14 = (unsigned __int16)*v43;
  v15 = (unsigned __int16)*(_DWORD *)Size;
  v16 = v15 + v14;
  if ( v15 + v14 >= v7 && v16 < 2 * v7 - 1 )
  {
    v17 = v16 >> 1;
    if ( v15 <= v14 )
    {
      v18 = (size_t)v43;
      v19 = v17 - v15;
      v20 = Size;
    }
    else
    {
      v18 = Size;
      v19 = v15 - v17;
      v20 = Size;
      v13 = (size_t)v43;
    }
    v21 = *(_BYTE *)(v18 + 3);
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
    v27 = (char *)(v18 + v22 * v4 + 16);
    v28 = (char *)(v13 + v26 * v23 + 16);
    v46 = v28;
    if ( v18 == v20 )
    {
      v29 = v25 * (unsigned __int16)*(_DWORD *)v13;
      Size = v25 * v19;
      memmove(&v28[Size], v28, v29);
      v30 = *(_BYTE *)(v18 + 3);
      v28 = (char *)v46;
      v20 = v45;
      v31 = Size;
      v22 = v41;
      v24 = v42;
    }
    else
    {
      v30 = (char)v43;
      v31 = v25 * v19;
      Size = v25 * v19;
    }
    if ( v30 )
    {
      v32 = v31;
    }
    else
    {
      v35 = *v6;
      v36 = v19 - 1;
      if ( v18 == v20 )
      {
        v37 = 2LL * v36;
        *(_DWORD *)(v13 + 8 * v37 + 16) = v35;
        *(_QWORD *)(v13 + 8 * v37 + 24) = *(_QWORD *)(v13 + 8);
        v38 = v25;
      }
      else
      {
        v39 = 2 * v24;
        *(_DWORD *)(v13 + 8 * v39 + 16) = v35;
        *(_QWORD *)(v13 + 8 * v39 + 24) = *(_QWORD *)(v18 + 8);
        v38 = v25;
        v28 += v25;
      }
      if ( v18 == v20 )
      {
        v40 = 2 * v22;
        v27 += v38;
        *v6 = *(_DWORD *)(v18 + 8 * v40 + 16);
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(v18 + 8 * v40 + 24);
      }
      else
      {
        v36 = v19 - 1;
        *v6 = *(_DWORD *)(v18 + 16LL * (v19 - 1) + 16);
        *(_QWORD *)(v18 + 8) = *(_QWORD *)(v18 + 16LL * (v19 - 1) + 24);
      }
      v32 = v25 * v36;
    }
    memmove(v28, v27, v32);
    *(_WORD *)v13 += v19;
    *(_WORD *)v18 -= v19;
    if ( (_DWORD *)v18 == v11 )
      memmove(v27, &v27[(unsigned int)Size], v25 * (unsigned __int16)*(_DWORD *)v18);
    if ( *((_BYTE *)v11 + 3) )
      *v6 = v11[4];
  }
  return v12;
}
