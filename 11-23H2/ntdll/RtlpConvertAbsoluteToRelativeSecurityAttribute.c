/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800F5DB0
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1800F55F0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18000AD54 (RtlStringCbLengthW.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // ebx
  int i; // edi
  unsigned int v11; // edx
  unsigned int v12; // r11d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned int v17; // ebp
  unsigned int v18; // r11d
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ebp
  unsigned int v24; // ebp
  _DWORD *v25; // r11
  unsigned int v26; // r12d
  __int64 v27; // rbx
  unsigned int v28; // ebp
  __int64 v29; // rdx
  unsigned int v30; // r12d
  void *v31; // r11
  int v32; // ebx
  __int64 v33; // rcx
  __int64 v35; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v35 = 0LL;
  LODWORD(v7) = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_DWORD *)(a1 + 16);
  if ( v8 )
  {
    v7 = 4LL * (unsigned int)(v8 - 1);
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  v9 = v7 + 20;
  if ( (unsigned int)(v7 + 20) < 0x14 )
    return (unsigned int)-1073741675;
  i = RtlStringCbLengthW(*(_WORD **)a1, 0xFFFFuLL, &v35);
  if ( i < 0 )
    return (unsigned int)i;
  v11 = v35 + 2;
  if ( (int)v35 + 2 < (unsigned int)v35 )
    return (unsigned int)-1073741675;
  v12 = v9 + v11;
  if ( v9 + v11 < v9 )
    return (unsigned int)-1073741675;
  if ( *(_WORD *)(a1 + 8) == 1 || *(_WORD *)(a1 + 8) == 2 )
    goto LABEL_28;
  if ( *(_WORD *)(a1 + 8) == 3 )
  {
    v17 = 0;
    v13 = v9 + v11;
    v15 = v35 + 2;
    if ( *(_DWORD *)(a1 + 16) )
    {
      while ( 1 )
      {
        v15 = v11;
        i = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * v17), 0xFFFFuLL, &v35);
        if ( i < 0 )
          return (unsigned int)i;
        v19 = v35 + 2;
        if ( (int)v35 + 2 < (unsigned int)v35 )
          return (unsigned int)-1073741675;
        v13 = v19 + v18;
        if ( v19 + v18 < v18 )
          return (unsigned int)-1073741675;
        ++v17;
        v11 = v15;
        if ( v17 >= *(_DWORD *)(a1 + 16) )
          goto LABEL_31;
      }
    }
    goto LABEL_31;
  }
  if ( *(_WORD *)(a1 + 8) != 5 )
  {
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) != 16 )
      {
        v13 = v9 + v11;
LABEL_30:
        v15 = v35 + 2;
        goto LABEL_31;
      }
      goto LABEL_16;
    }
LABEL_28:
    v20 = 8LL * *(unsigned int *)(a1 + 16);
    if ( v20 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v13 = v12 + v20;
    if ( v13 < v12 )
      return (unsigned int)-1073741675;
    goto LABEL_30;
  }
LABEL_16:
  v14 = 0;
  v13 = v9 + v11;
  v15 = v35 + 2;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v15 = v11;
      v16 = v12 + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v14 + 8);
      if ( v16 < v12 )
        break;
      v13 = v16 + 4;
      if ( v16 + 4 < v16 )
        break;
      ++v14;
      v12 = v16 + 4;
      v11 = v15;
      if ( v14 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_31;
    }
    return (unsigned int)-1073741675;
  }
LABEL_31:
  if ( v13 + 3 < v13 )
    return (unsigned int)-1073741675;
  v21 = (v13 + 3) & 0xFFFFFFFC;
  if ( *a3 < v21 )
  {
    *a3 = v21;
    return (unsigned int)-1073741789;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  *a3 = v21;
  memset_thunk_772440563353939046(a2, 0, v21);
  *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
  *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
  a2[2] = *(_DWORD *)(a1 + 12);
  a2[3] = *(_DWORD *)(a1 + 16);
  v22 = *(_DWORD *)(a1 + 16);
  v23 = 4 * v22 + 16;
  if ( !v22 )
    v23 = 20;
  *a2 = v23;
  memmove((char *)a2 + v23, *(const void **)a1, v15);
  v24 = v15 + v23;
  v25 = (unsigned int *)((char *)a2 + v24);
  if ( *(_WORD *)(a1 + 8) == 1 || *(_WORD *)(a1 + 8) == 2 )
    goto LABEL_52;
  if ( *(_WORD *)(a1 + 8) != 3 )
  {
    if ( *(_WORD *)(a1 + 8) == 5 )
      goto LABEL_43;
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) == 16 )
      {
LABEL_43:
        v26 = 0;
        for ( i = 0; v26 < *(_DWORD *)(a1 + 16); v25 = (unsigned int *)((char *)a2 + v24) )
        {
          a2[v26 + 4] = v24;
          v27 = 2LL * v26;
          v28 = v24 + 4;
          *v25 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v26 + 8);
          v29 = *(_QWORD *)(a1 + 24);
          if ( *(_DWORD *)(v29 + 16LL * v26 + 8) )
            memmove((char *)a2 + v28, *(const void **)(v29 + 16LL * v26), *(unsigned int *)(v29 + 16LL * v26 + 8));
          ++v26;
          v24 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v27 + 8) + v28;
        }
        return (unsigned int)i;
      }
      return (unsigned int)-1073741811;
    }
LABEL_52:
    i = 0;
    if ( *(_DWORD *)(a1 + 16) )
    {
      do
      {
        v33 = v3++;
        a2[v33 + 4] = v24;
        v24 += 8;
        *(_QWORD *)v25 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v33);
        v25 = (unsigned int *)((char *)a2 + v24);
      }
      while ( v3 < *(_DWORD *)(a1 + 16) );
    }
    return (unsigned int)i;
  }
  v30 = 0;
  for ( i = 0; v30 < *(_DWORD *)(a1 + 16); ++v30 )
  {
    a2[v30 + 4] = v24;
    i = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * v30), 0xFFFFuLL, &v35);
    if ( i < 0 )
      break;
    v32 = v35 + 2;
    memmove(v31, *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * v30), (unsigned int)(v35 + 2));
    v24 += v32;
  }
  return (unsigned int)i;
}
