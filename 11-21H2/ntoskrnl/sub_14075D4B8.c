/*
 * XREFs of sub_14075D4B8 @ 0x14075D4B8
 * Callers:
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_1409DE730 @ 0x1409DE730 (sub_1409DE730.c)
 *     sub_1409DEB60 @ 0x1409DEB60 (sub_1409DEB60.c)
 * Callees:
 *     sub_1402D88AC @ 0x1402D88AC (sub_1402D88AC.c)
 *     sub_14075D7DC @ 0x14075D7DC (sub_14075D7DC.c)
 *     sub_14075D814 @ 0x14075D814 (sub_14075D814.c)
 *     sub_14075EF9C @ 0x14075EF9C (sub_14075EF9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14075D4B8(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  unsigned int v9; // eax
  _WORD *v11; // rdi
  int v12; // ecx
  unsigned __int64 v13; // r11
  int v14; // ebx
  unsigned __int16 *v16; // rsi
  unsigned __int64 v17; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // r14
  int v20; // ecx
  SIZE_T v21; // rbp
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  unsigned int v27; // r13d
  _QWORD *v28; // r14
  _QWORD *v29; // rbp
  unsigned __int16 *v30; // rax
  __int64 v31; // rdx
  unsigned __int16 *v32; // rcx
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int16 *v35; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 *v36; // [rsp+68h] [rbp+10h]

  v5 = (unsigned int)a1[5];
  *(_DWORD *)(a4 + 80) = a5;
  v9 = *(_DWORD *)(a4 + 16) & 0xFFFD7FF8;
  *(_DWORD *)(a4 + 72) = v5;
  *(_DWORD *)(a4 + 16) = v9;
  *(_DWORD *)(a4 + 76) = 0;
  v11 = 0LL;
  v12 = a1[4];
  v35 = 0LL;
  if ( (v12 & 1) != 0 )
  {
    v9 |= 4u;
    *(_DWORD *)(a4 + 16) = v9;
    v12 = a1[4];
  }
  if ( (v12 & 0x80000) != 0 )
  {
    v9 |= 0x1000u;
    *(_DWORD *)(a4 + 16) = v9;
    v12 = a1[4];
    if ( (v12 & 0x1000) != 0 )
    {
      v9 |= 0x80000u;
      *(_DWORD *)(a4 + 16) = v9;
      v12 = a1[4];
    }
  }
  if ( (v12 & 0x40) != 0 )
  {
    *(_DWORD *)(a4 + 16) = v9 | 0x8000;
    v12 = a1[4];
  }
  v13 = (unsigned int)a1[6];
  v36 = (unsigned __int16 *)(v13 + a2);
  if ( (v12 & 4) == 0 )
  {
    if ( (v12 & 8) == 0 )
      goto LABEL_8;
    if ( (int)sub_14075D7DC(a2, a3, (unsigned int)v13, &v35) >= 0 )
    {
      v16 = v35;
      if ( v35 )
      {
        v17 = (unsigned __int64)*v35 >> 1;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v17 + 6, 0x70696D57u);
        v19 = PoolWithTag;
        if ( PoolWithTag )
        {
          sub_1402D88AC((_WORD *)PoolWithTag + 2, v17 + 1, (__int64)(v16 + 1), v17);
          *v19 = sub_14075D814(a1, v19 + 1);
          v20 = *(_DWORD *)(a4 + 16) | 1;
          *(_QWORD *)(a4 + 88) = v19;
          *(_DWORD *)(a4 + 16) = v20;
          if ( (a1[4] & 0x20) != 0 )
            *(_DWORD *)(a4 + 16) = v20 | 0x20000;
          goto LABEL_8;
        }
        return (unsigned int)-1073741670;
      }
    }
    return (unsigned int)-1073741811;
  }
  v21 = 1LL;
  v22 = 0LL;
  if ( (_DWORD)v5 )
  {
    do
    {
      v35 = 0LL;
      if ( (int)sub_14075D7DC(a2, a3, (unsigned int)v13, &v35) < 0 || !v35 )
        return (unsigned int)-1073741811;
      v23 = (unsigned __int64)*v35 >> 1;
      v24 = v23;
      if ( v23 <= v22 )
        v24 = v22;
      v22 = v24;
      v21 += 2 * v23 + 22;
      v25 = v23 + 1;
      if ( !v25 )
        return (unsigned int)-1073741675;
      v35 = 0LL;
      if ( !is_mul_ok(v25, 2uLL) || v13 + 2 * v25 < v13 )
        return (unsigned int)-1073741675;
      LODWORD(v11) = (_DWORD)v11 + 1;
      LODWORD(v13) = v13 + 2 * v25;
    }
    while ( (unsigned int)v11 < (unsigned int)v5 );
  }
  v26 = ExAllocatePoolWithTag(PagedPool, v21, 0x70696D57u);
  v27 = 0;
  v28 = v26;
  if ( !v26 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(a4 + 16) |= 2u;
  *(_QWORD *)(a4 + 88) = v26;
  v11 = ExAllocatePoolWithTag(PagedPool, 2 * v22 + 2, 0x70696D57u);
  if ( !v11 )
    return (unsigned int)-1073741670;
  v29 = &v28[v5];
  if ( (_DWORD)v5 )
  {
    v30 = v36;
    v31 = v22 + 1;
    v32 = v36;
    v36 = (unsigned __int16 *)(v22 + 1);
    do
    {
      *v28 = v29;
      v33 = (unsigned __int64)*v30 >> 1;
      v35 = v32 + 1;
      sub_1402D88AC(v11, v31, (__int64)(v32 + 1), v33);
      v14 = sub_14075EF9C(a1, v11, v33 + 7, v29);
      if ( v14 < 0 )
        goto LABEL_34;
      v34 = -1LL;
      do
        ++v34;
      while ( *((_WORD *)v29 + v34) );
      v31 = (__int64)v36;
      v29 = (_QWORD *)((char *)v29 + 2 * v34 + 2);
      ++v27;
      ++v28;
      v30 = &v35[v33];
      v32 = v30;
    }
    while ( v27 < (unsigned int)v5 );
  }
LABEL_8:
  v14 = 0;
  if ( v11 )
LABEL_34:
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v14;
}
