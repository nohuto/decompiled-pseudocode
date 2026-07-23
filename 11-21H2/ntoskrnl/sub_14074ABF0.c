/*
 * XREFs of sub_14074ABF0 @ 0x14074ABF0
 * Callers:
 *     sub_14076AD40 @ 0x14076AD40 (sub_14076AD40.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14074ABF0(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  _BYTE *v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r15
  PVOID *v9; // r13
  _DWORD *v10; // r12
  int v11; // r15d
  unsigned int v12; // r13d
  __int64 v13; // rdx
  int v14; // edi
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // edx
  _WORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // r14
  void *v23; // rax
  _WORD *v24; // rax
  unsigned int v25; // r12d
  int v26; // ebx
  char v27; // dl
  char v28; // r8
  __int64 v29; // rcx
  PVOID *v30; // rbx
  __int64 v32; // rax
  unsigned int v33; // r10d
  char *v34; // rbx
  unsigned int v35; // esi
  unsigned int v36; // edi
  unsigned int v37; // r15d
  unsigned int v38; // eax
  char *v39; // r14
  char v40; // r13
  char v41; // r9
  char v42; // r12
  unsigned int v43; // edx
  _WORD *v44; // rsi
  char v45; // dl
  char v46; // r8
  __int64 v47; // r8
  __int64 v48; // rcx
  char *v49; // r14
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // r10d
  unsigned int v54; // [rsp+38h] [rbp-69h]
  unsigned int v55; // [rsp+3Ch] [rbp-65h]
  void *Src; // [rsp+40h] [rbp-61h] BYREF
  int v57; // [rsp+48h] [rbp-59h]
  unsigned int v58; // [rsp+4Ch] [rbp-55h]
  unsigned int v59; // [rsp+50h] [rbp-51h]
  PVOID P; // [rsp+58h] [rbp-49h]
  unsigned int v61; // [rsp+60h] [rbp-41h]
  int v62; // [rsp+64h] [rbp-3Dh]
  __int64 Pool2; // [rsp+68h] [rbp-39h]
  _BYTE *v64; // [rsp+70h] [rbp-31h]
  __int64 v65; // [rsp+78h] [rbp-29h]
  int v66; // [rsp+80h] [rbp-21h]
  __int128 v67; // [rsp+88h] [rbp-19h] BYREF
  __int128 v68; // [rsp+98h] [rbp-9h]
  __int64 v69; // [rsp+A8h] [rbp+7h]
  __int64 v70; // [rsp+108h] [rbp+67h]
  char v71; // [rsp+108h] [rbp+67h]
  unsigned int v74; // [rsp+120h] [rbp+7Fh]

  v70 = a1;
  v3 = a1;
  Src = 0LL;
  v69 = 0LL;
  LOBYTE(v57) = 0;
  v58 = -1;
  v74 = -1;
  v4 = 0LL;
  v64 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = qword_140C46278;
  *a2 = 0LL;
  *a3 = 0;
  if ( (_QWORD *)v3 == v5 )
    return 3221225486LL;
  LODWORD(v6) = 0;
  v7 = (_QWORD *)v3;
  do
  {
    v7 = (_QWORD *)v7[2];
    v6 = (unsigned int)(v6 + 1);
  }
  while ( v7 != v5 );
  v8 = (unsigned int)v6;
  v62 = v6;
  v65 = (unsigned int)v6;
  P = (PVOID)ExAllocatePool2(256LL, 8 * v6, 1970499664LL);
  v9 = (PVOID *)P;
  if ( !P )
    return (unsigned int)-1073741670;
  Pool2 = ExAllocatePool2(256LL, 4 * v6, 1970499664LL);
  v10 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v14 = -1073741670;
    goto LABEL_53;
  }
  v11 = 1;
  v54 = 1;
  v12 = 0;
  if ( (PVOID)v3 == qword_140C46278 )
    goto LABEL_66;
  while ( 1 )
  {
    v14 = sub_14074C6C0(*(PDEVICE_OBJECT *)(v3 + 32), 0LL, &v67);
    if ( v14 < 0 )
    {
      v4 = 0LL;
      goto LABEL_52;
    }
    if ( !v69 )
    {
      v14 = -1073741823;
      goto LABEL_42;
    }
    Src = 0LL;
    v14 = sub_14042A5E0(*((_QWORD *)&v67 + 1), &Src);
    if ( v14 < 0 )
      goto LABEL_111;
    if ( !Src )
    {
      v14 = -1073741637;
LABEL_111:
      if ( Src )
      {
        ExFreePoolWithTag(Src, 0);
        Src = 0LL;
      }
      goto LABEL_42;
    }
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v10[v12] = 0;
    v18 = Src;
    if ( *(_WORD *)Src )
    {
      do
      {
        ++v15;
        v19 = -1LL;
        v10[v12] = v15;
        do
          ++v19;
        while ( v18[v19] );
        v16 += v19 + 1;
        v20 = -1LL;
        do
          ++v20;
        while ( v18[v20] );
        if ( (unsigned int)v20 <= v17 )
          LODWORD(v20) = v17;
        v17 = v20;
        v21 = -1LL;
        do
          ++v21;
        while ( v18[v21] );
        v18 += v21 + 1;
      }
      while ( *v18 );
      v3 = v70;
    }
    LODWORD(v4) = v17 + (_DWORD)v4;
    v22 = 2LL * (unsigned int)(v16 + 1);
    v54 *= v15;
    v23 = (void *)ExAllocatePool2(256LL, v22, 1970499664LL);
    *((_QWORD *)P + v12) = v23;
    if ( v23 )
    {
      memmove(v23, Src, v22);
      v24 = (_WORD *)*((_QWORD *)P + v12);
      if ( *v24 )
      {
        v25 = v58;
        LOBYTE(v26) = v57;
        while ( 1 )
        {
          v27 = 0;
          v28 = 0;
          while ( 1 )
          {
            if ( *v24 == 33 )
            {
              v27 = 1;
              goto LABEL_50;
            }
            if ( *v24 != 64 )
              break;
            v28 = 1;
LABEL_50:
            ++v24;
          }
          v26 = (unsigned __int8)v26;
          if ( v28 )
            v26 = 1;
          if ( v27 && v25 == -1 )
            v25 = v12;
          v29 = -1LL;
          do
            ++v29;
          while ( v24[v29] );
          v24 += v29 + 1;
          if ( !*v24 )
          {
            v57 = v26;
            v3 = v70;
            v58 = v25;
            v10 = (_DWORD *)Pool2;
            break;
          }
        }
      }
      ++v12;
    }
    else
    {
      v14 = -1073741670;
    }
    ExFreePoolWithTag(Src, 0);
    LODWORD(v6) = v62;
    Src = 0LL;
LABEL_42:
    if ( *((_QWORD *)&v68 + 1) )
      sub_14042A5E0(*((_QWORD *)&v67 + 1), v13);
    if ( v14 < 0 )
    {
      v4 = v64;
      goto LABEL_52;
    }
    if ( v14 == 288 || v12 == (_DWORD)v6 )
      break;
    v3 = *(_QWORD *)(v3 + 16);
    LODWORD(v4) = (_DWORD)v4 + 1;
    v70 = v3;
    if ( (PVOID)v3 == qword_140C46278 )
      goto LABEL_65;
  }
  LODWORD(v4) = (_DWORD)v4 + 1;
LABEL_65:
  v11 = v54;
LABEL_66:
  v66 = 0;
  v14 = 0;
  v32 = ExAllocatePool2(256LL, 2LL * (unsigned int)(v11 * (_DWORD)v4 + 1), 1970499664LL);
  v64 = (_BYTE *)v32;
  v4 = (_BYTE *)v32;
  if ( !v32 )
  {
    v14 = -1073741670;
    goto LABEL_52;
  }
  v59 = 0;
  v33 = v12 - 1;
  v55 = v12 - 1;
  v34 = (char *)v32;
  v35 = 0;
  if ( !v11 )
    goto LABEL_101;
  v36 = v54;
  while ( 2 )
  {
    v37 = v33;
    v38 = v36;
    v39 = v34;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    while ( 2 )
    {
      v61 = v38;
      v71 = v41;
      v43 = v35 / (v38 / *(_DWORD *)(Pool2 + 4LL * v37)) % *(_DWORD *)(Pool2 + 4LL * v37);
      v44 = (_WORD *)*((_QWORD *)P + v37);
      if ( v43 )
      {
        v51 = v43;
        do
        {
          v52 = -1LL;
          do
            ++v52;
          while ( v44[v52] );
          v44 += v52 + 1;
          --v51;
        }
        while ( v51 );
        v33 = v55;
      }
      v45 = 0;
      v46 = 0;
      while ( 2 )
      {
        if ( *v44 == 33 )
        {
          v45 = 1;
LABEL_86:
          ++v44;
          continue;
        }
        break;
      }
      if ( *v44 == 64 )
      {
        v46 = 1;
        goto LABEL_86;
      }
      v36 = v54;
      if ( v37 == v33 )
      {
        v71 = v45;
        v40 = v45;
        v41 = v45;
        v42 = v45;
        if ( v45 )
        {
          v74 = v37;
          goto LABEL_76;
        }
        v74 = -1;
LABEL_88:
        v71 = 0;
        goto LABEL_78;
      }
      if ( !v45 )
        goto LABEL_88;
LABEL_76:
      if ( !(_BYTE)v57 && !v42 )
        goto LABEL_99;
      v74 = v37;
      v40 = 1;
      v42 = v41 != 0 ? v42 : 0;
LABEL_78:
      if ( v46 )
      {
        v53 = -1;
        v71 = v45;
        v39 = v34;
        v40 = v45;
        v42 = v45;
        if ( v45 )
          v53 = v37;
        v74 = v53;
      }
      v47 = -1LL;
      do
        ++v47;
      while ( v44[v47] );
      memmove(v39, v44, 2 * v47);
      v48 = -1LL;
      do
        ++v48;
      while ( v44[v48] );
      v49 = &v39[2 * v48];
      if ( v37 )
      {
        v50 = Pool2;
        v41 = v71;
        v35 = v59;
        v33 = v55;
        *(_WORD *)v49 = 35;
        v39 = v49 + 2;
        v38 = v61 / *(_DWORD *)(v50 + 4LL * v37--);
        continue;
      }
      break;
    }
    if ( !v40 || v42 && v74 <= v58 )
    {
      *(_WORD *)v49 = 0;
      v34 = v49 + 2;
    }
    v33 = v55;
LABEL_99:
    v35 = v59 + 1;
    v59 = v35;
    if ( v35 < v54 )
      continue;
    break;
  }
  v14 = v66;
  v10 = (_DWORD *)Pool2;
LABEL_101:
  v4 = v64;
  *(_WORD *)v34 = 0;
  *a2 = v4;
  *a3 = (v34 - v4 + 2) >> 1;
LABEL_52:
  v8 = v65;
  v9 = (PVOID *)P;
LABEL_53:
  if ( v62 )
  {
    v30 = v9;
    do
    {
      if ( *v30 )
        ExFreePoolWithTag(*v30, 0);
      ++v30;
      --v8;
    }
    while ( v8 );
  }
  ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v14 < 0 )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v14;
}
