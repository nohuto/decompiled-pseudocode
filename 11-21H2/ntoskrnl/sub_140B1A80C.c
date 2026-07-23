/*
 * XREFs of sub_140B1A80C @ 0x140B1A80C
 * Callers:
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B1AC34 @ 0x140B1AC34 (sub_140B1AC34.c)
 */

__int64 __fastcall sub_140B1A80C(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  bool v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  PVOID v15; // rsi
  unsigned int v16; // edi
  unsigned int v17; // ebp
  unsigned int v18; // r8d
  unsigned int v19; // edx
  int v20; // r9d
  __int64 v21; // r10
  unsigned int v22; // r11d
  unsigned int v23; // ecx
  __int64 *v24; // rbx
  __int64 i; // rdx
  unsigned __int64 v26; // rax
  unsigned int v27; // ebx
  unsigned int v28; // ebp
  unsigned int v29; // r11d
  unsigned int v30; // r8d
  unsigned int v31; // edx
  int v32; // r9d
  __int64 v33; // r14
  unsigned int v34; // r10d
  unsigned int v35; // ecx
  _QWORD *v36; // rdi
  __int64 j; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r14
  unsigned int v40; // ebp
  unsigned int v41; // edx
  unsigned __int64 *v42; // rax
  unsigned __int64 *k; // rbx
  unsigned __int64 *v44; // rcx
  unsigned __int64 **v45; // rax
  unsigned __int64 *v46; // rdi
  unsigned __int64 *v47; // rcx
  unsigned int v49; // edx
  _QWORD *v50; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  v50 = 0LL;
  while ( v3 != v2 )
  {
    if ( !(unsigned int)sub_1402FDD20(v3[6]) )
    {
      v5 = sub_1402828F0(64, 0x20uLL, 0x70446D4Du);
      v6 = v5;
      if ( !v5 )
        return 0LL;
      v4 = 0;
      v5[3] = v3;
      v7 = v3[6];
      if ( v1 )
      {
        while ( 1 )
        {
          v8 = v1[3];
          v9 = *(_QWORD *)(v8 + 48);
          if ( v7 <= v9 + (unsigned int)(*(_DWORD *)(v8 + 64) - 1) && v7 < v9 )
          {
            v10 = (_QWORD *)*v1;
            if ( !*v1 )
              break;
          }
          else
          {
            v10 = (_QWORD *)v1[1];
            if ( !v10 )
            {
              v4 = 1;
              break;
            }
          }
          v1 = v10;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)&v50, (unsigned __int64)v1, v4, v6);
      v1 = v50;
    }
    v3 = (_QWORD *)*v3;
  }
  v11 = 0LL;
  while ( v1 )
  {
    v11 = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( v11 )
  {
    if ( !(unsigned int)sub_140B1AC34(
                          ((*(_QWORD *)(v11[3] + 48LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                          *(_DWORD *)(v11[3] + 64LL) >> 12) )
      return 0LL;
    v13 = (_QWORD *)v11[1];
    v14 = v11;
    if ( v13 )
    {
      v12 = (_QWORD *)*v13;
      v11 = (_QWORD *)v11[1];
      if ( *v13 )
      {
        do
        {
          v11 = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v11 || (_QWORD *)*v11 == v14 )
          break;
        v14 = v11;
      }
    }
  }
  v15 = qword_140C4F4E8[0];
LABEL_28:
  if ( v15 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = *((_DWORD *)v15 + 4);
      v18 = v16 < v17 ? v16 : 0;
      v19 = v17 - 1;
      v20 = (*((_DWORD *)v15 + 6) & 4) != 0LL ? 0x20 : 0;
      v21 = *((_QWORD *)v15 + 3) - ((*((_QWORD *)v15 + 3) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v22 = v20 + v19;
        v23 = v20 + v18;
        if ( v19 - v18 != -1 )
        {
          v24 = (__int64 *)(v21 + 8 * ((unsigned __int64)v23 >> 6));
          for ( i = *v24 | ((1LL << (v23 & 0x3F)) - 1); i == -1; i = *v24 )
          {
            if ( (unsigned __int64)++v24 > v21 + 8 * ((unsigned __int64)v22 >> 6) )
              goto LABEL_63;
          }
          _BitScanForward64(&v26, ~i);
          v27 = v26 + ((unsigned int)(((__int64)v24 - v21) >> 3) << 6);
          if ( v27 <= v22 )
            break;
        }
LABEL_63:
        v27 = -1;
LABEL_81:
        if ( !v18 )
          goto LABEL_39;
        v49 = v16 + 1;
        if ( v16 + 1 > v17 )
          v49 = *((_DWORD *)v15 + 4);
        v19 = v49 - 1;
        v18 = 0;
      }
      if ( v27 == -1 )
        goto LABEL_81;
      v27 -= v20;
LABEL_39:
      if ( v27 < v16 || v27 == -1 )
        goto LABEL_57;
      v28 = *((_DWORD *)v15 + 4);
      v29 = v27 + 1;
      v30 = v29 < v28 ? v29 : 0;
      v31 = v28 - 1;
      v32 = (*((_DWORD *)v15 + 6) & 4) != 0LL ? 0x20 : 0;
      v33 = *((_QWORD *)v15 + 3) - ((*((_QWORD *)v15 + 3) & 4LL) != 0 ? 4 : 0);
      while ( 2 )
      {
        v34 = v32 + v31;
        v35 = v32 + v30;
        if ( v31 - v30 == -1 )
          goto LABEL_58;
        v36 = (_QWORD *)(v33 + 8 * ((unsigned __int64)v35 >> 6));
        for ( j = ~*v36 | ((1LL << (v35 & 0x3F)) - 1); j == -1; j = ~*v36 )
        {
          if ( (unsigned __int64)++v36 > v33 + 8 * ((unsigned __int64)v34 >> 6) )
            goto LABEL_58;
        }
        _BitScanForward64(&v38, ~j);
        v16 = v38 + ((unsigned int)(((__int64)v36 - v33) >> 3) << 6);
        if ( v16 > v34 )
        {
LABEL_58:
          v16 = -1;
LABEL_59:
          if ( !v30 )
            goto LABEL_50;
          v41 = v27 + 2;
          if ( v27 + 2 > v28 )
            v41 = *((_DWORD *)v15 + 4);
          v31 = v41 - 1;
          v30 = 0;
          continue;
        }
        break;
      }
      if ( v16 == -1 )
        goto LABEL_59;
      v16 -= v32;
LABEL_50:
      if ( v16 < v29 || v16 == -1 )
        v16 = *((_DWORD *)v15 + 4);
      v39 = *((_QWORD *)v15 + 1) + 8LL * v27;
      v40 = v16 - v27;
      if ( v16 != v27 )
      {
        do
        {
          if ( sub_140317A10(v39) )
            _bittestandset(*((signed __int32 **)v15 + 3), v27);
          ++v27;
          v39 += 8LL;
          --v40;
        }
        while ( v40 );
      }
      if ( v16 >= *((_DWORD *)v15 + 4) )
      {
LABEL_57:
        v15 = *(PVOID *)v15;
        goto LABEL_28;
      }
    }
  }
  if ( (xmmword_140D06920 & 0x40000000000LL) != 0 )
    qword_140C51980 = (unsigned __int64)(((__int64)((*((_QWORD *)qword_140C4F4E8[0] + 1) << 25)
                                                  + ((unsigned __int64)*((unsigned int *)qword_140C4F4E8[0] + 4) << 28)) >> 16)
                                       - qword_140C51988) >> 21;
  v42 = v50;
  k = 0LL;
  while ( v42 )
  {
    k = v42;
    v42 = (unsigned __int64 *)*v42;
  }
  while ( k )
  {
    v45 = (unsigned __int64 **)k[1];
    v46 = k;
    v47 = k;
    if ( v45 )
    {
      v44 = *v45;
      for ( k = (unsigned __int64 *)k[1]; v44; v44 = (unsigned __int64 *)*v44 )
        k = v44;
    }
    else
    {
      while ( 1 )
      {
        k = (unsigned __int64 *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !k || (unsigned __int64 *)*k == v47 )
          break;
        v47 = k;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v50, v46);
    ExFreePoolWithTag(v46, 0);
  }
  return 1LL;
}
