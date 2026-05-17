/*
 * XREFs of RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800F6120
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x18000AD54 (RtlStringCbLengthW.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpConvertRelativeToAbsoluteSecurityAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r15
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ebx
  unsigned int *v17; // r10
  unsigned int v18; // r11d
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // r11d
  unsigned int v24; // r12d
  __int64 v25; // rcx
  int v26; // r11d
  int v27; // eax
  unsigned int v28; // r9d
  _DWORD *v29; // rdx
  unsigned int v30; // ebx
  int v31; // ecx
  char *v32; // rdx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned int v38; // r8d
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r15d
  char *v42; // rbp
  unsigned int v43; // r13d
  unsigned int *v44; // r9
  unsigned int v45; // ecx
  unsigned int v46; // eax
  __int64 v47; // r12
  unsigned int v48; // r8d
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // ebp
  char *v52; // r12
  unsigned int v53; // r13d
  unsigned __int64 v54; // rax
  __int64 v55; // r15
  unsigned int v56; // ecx
  unsigned int v57; // eax
  unsigned int v58; // ecx
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v62; // [rsp+20h] [rbp-38h]
  __int64 v63; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a2;
  v63 = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( a2 < *a1 )
    return (unsigned int)-1073741705;
  v10 = a2 - *a1;
  if ( v10 < 4 )
    return (unsigned int)-1073741705;
  v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v10, &v63);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = v63 + 2;
  if ( (int)v63 + 2 < (unsigned int)v63 )
    return (unsigned int)-1073741675;
  if ( (int)v63 + 5 < (unsigned int)(v63 + 2) )
    return (unsigned int)-1073741675;
  v12 = ((v63 + 5) & 0xFFFFFFFC) + 32;
  if ( v12 < 0x20 )
    return (unsigned int)-1073741675;
  v13 = a1[3];
  if ( (unsigned __int64)(4 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v13) )
    return (unsigned int)-1073741705;
  switch ( *((_WORD *)a1 + 2) )
  {
    case 1:
    case 2:
      goto LABEL_44;
    case 3:
      v21 = 8 * v13;
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v22 = v12 + v21;
      if ( v12 + v21 < v12 )
        return (unsigned int)-1073741675;
      v12 += v21;
      v23 = 0;
      if ( (_DWORD)v13 )
      {
        v24 = v22;
        while ( 1 )
        {
          v25 = a1[v23 + 4];
          if ( (unsigned int)v5 < (unsigned int)v25 || (unsigned int)(v5 - v25) < 2 )
            return (unsigned int)-1073741705;
          v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + v25), (unsigned int)(v5 - v25), &v63);
          if ( v9 < 0 )
            return (unsigned int)v9;
          if ( (int)v63 + 2 < (unsigned int)v63 )
            return (unsigned int)-1073741675;
          if ( (int)v63 + 5 < (unsigned int)(v63 + 2) )
            return (unsigned int)-1073741675;
          v12 = ((v63 + 5) & 0xFFFFFFFC) + v24;
          if ( v12 < v24 )
            return (unsigned int)-1073741675;
          v23 = v26 + 1;
          v24 += (v63 + 5) & 0xFFFFFFFC;
          if ( v23 >= a1[3] )
            goto LABEL_51;
        }
      }
      goto LABEL_51;
    case 5:
      goto LABEL_19;
    case 6:
LABEL_44:
      v27 = 8 * v13;
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v12 + v27 < v12 )
        return (unsigned int)-1073741675;
      v12 += v27;
      v28 = 0;
      if ( (_DWORD)v13 )
      {
        v29 = a1 + 4;
        while ( (unsigned int)v5 >= *v29 && (unsigned int)(v5 - *v29) >= 8 )
        {
          ++v28;
          ++v29;
          if ( v28 >= (unsigned int)v13 )
            goto LABEL_51;
        }
        return (unsigned int)-1073741705;
      }
      goto LABEL_51;
  }
  if ( *((_WORD *)a1 + 2) != 16 )
    goto LABEL_51;
LABEL_19:
  v14 = 16 * v13;
  if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v15 = v12 + v14;
  if ( v12 + v14 < v12 )
    return (unsigned int)-1073741675;
  v12 += v14;
  v16 = 0;
  if ( (_DWORD)v13 )
  {
    v17 = a1 + 4;
    v18 = v15;
    do
    {
      v19 = *v17;
      if ( (unsigned int)v5 < (unsigned int)v19 || (unsigned int)(v5 - v19) < 4 )
        return (unsigned int)-1073741705;
      v20 = *(unsigned int *)((char *)a1 + v19);
      if ( (int)v19 + 4 < (unsigned int)v19 )
        return (unsigned int)-1073741675;
      if ( (int)v5 - ((int)v19 + 4) < v20 )
        return (unsigned int)-1073741705;
      if ( v20 + 3 < v20 )
        return (unsigned int)-1073741675;
      v12 = ((v20 + 3) & 0xFFFFFFFC) + v18;
      if ( v12 < v18 )
        return (unsigned int)-1073741675;
      ++v16;
      ++v17;
      v18 += (v20 + 3) & 0xFFFFFFFC;
    }
    while ( v16 < (unsigned int)v13 );
  }
LABEL_51:
  if ( *a4 < v12 )
  {
    *a4 = v12;
    return (unsigned int)-1073741789;
  }
  if ( !a3 )
    return (unsigned int)-1073741811;
  *a4 = v12;
  memset_thunk_772440563353939046(a3, 0, v12);
  *((_WORD *)a3 + 4) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 5) = *((_WORD *)a1 + 3);
  a3[3] = a1[2];
  a3[4] = a1[3];
  if ( v11 >= 0xFFFFFFE0 || v11 + 35 < v11 + 32 )
    return (unsigned int)-1073741675;
  v30 = (v11 + 35) & 0xFFFFFFFC;
  memmove(a3 + 8, (char *)a1 + *a1, v11);
  v31 = *((unsigned __int16 *)a3 + 4);
  v32 = (char *)a3 + v30;
  *(_QWORD *)a3 = a3 + 8;
  v33 = v31 - 1;
  if ( !v33 )
    goto LABEL_81;
  v34 = v33 - 1;
  if ( !v34 )
    goto LABEL_81;
  v35 = v34 - 1;
  if ( v35 )
  {
    v36 = v35 - 2;
    if ( !v36 )
    {
LABEL_62:
      v38 = a3[4];
      v39 = 16LL * v38;
      if ( v39 <= 0xFFFFFFFF )
      {
        v40 = (unsigned int)v39 + v30;
        if ( (unsigned int)v40 >= v30 )
        {
          v41 = v39 + v30;
          v9 = 0;
          *((_QWORD *)a3 + 3) = v32;
          v42 = (char *)a3 + v40;
          v43 = 0;
          if ( !v38 )
            return (unsigned int)v9;
          while ( 1 )
          {
            v44 = &a1[v43];
            v45 = *(unsigned int *)((char *)a1 + v44[4]);
            LODWORD(v63) = v45;
            v46 = v45 + v41;
            if ( v45 + v41 < v41 || v46 + 3 < v46 )
              break;
            v47 = 2LL * v43;
            v9 = 0;
            v41 = (v46 + 3) & 0xFFFFFFFC;
            *(_QWORD *)(*((_QWORD *)a3 + 3) + 16LL * v43) = 0LL;
            if ( v45 )
            {
              memmove(v42, (char *)a1 + v44[4] + 4, v45);
              v45 = v63;
              *(_QWORD *)(*((_QWORD *)a3 + 3) + 16LL * v43) = v42;
            }
            ++v43;
            v42 = (char *)a3 + v41;
            *(_DWORD *)(*((_QWORD *)a3 + 3) + 8 * v47 + 8) = v45;
            if ( v43 >= a3[4] )
              return (unsigned int)v9;
          }
        }
      }
      return (unsigned int)-1073741675;
    }
    v37 = v36 - 1;
    if ( v37 )
    {
      if ( v37 == 10 )
        goto LABEL_62;
      return (unsigned int)-1073741705;
    }
LABEL_81:
    v58 = a3[4];
    v59 = 8LL * v58;
    if ( v59 <= 0xFFFFFFFF && v30 + (unsigned int)v59 >= v30 )
    {
      *((_QWORD *)a3 + 3) = v32;
      v9 = 0;
      if ( v58 )
      {
        do
        {
          v60 = v4++;
          *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v60) = *(_QWORD *)((char *)a1 + a1[v60 + 4]);
        }
        while ( v4 < a3[4] );
      }
      return (unsigned int)v9;
    }
    return (unsigned int)-1073741675;
  }
  v48 = a3[4];
  v49 = 8LL * v48;
  if ( v49 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v50 = (unsigned int)v49 + v30;
  if ( (unsigned int)v50 < v30 )
    return (unsigned int)-1073741675;
  v51 = v49 + v30;
  v9 = 0;
  *((_QWORD *)a3 + 3) = v32;
  v52 = (char *)a3 + v50;
  v53 = 0;
  if ( v48 )
  {
    v54 = v5;
    v62 = v5;
    do
    {
      v55 = v53;
      v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + a1[v53 + 4]), v54, &v63);
      if ( v9 < 0 )
        break;
      v56 = v63 + 2;
      if ( (int)v63 + 2 < (unsigned int)v63 )
        return (unsigned int)-1073741675;
      v57 = v56 + v51;
      if ( v56 + v51 < v51 || v57 + 3 < v57 )
        return (unsigned int)-1073741675;
      v9 = 0;
      v51 = (v57 + 3) & 0xFFFFFFFC;
      memmove(v52, (char *)a1 + a1[v53++ + 4], v56);
      *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v55) = v52;
      v54 = v62;
      v52 = (char *)a3 + v51;
    }
    while ( v53 < a3[4] );
  }
  return (unsigned int)v9;
}
