/*
 * XREFs of ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180005C08
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800059D0 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180005E00 (-Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180005EFC (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Intersect(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  _DWORD *v7; // rcx
  const struct FastRegion::Internal::CStripe *v8; // r10
  const struct FastRegion::Internal::CStripe *v9; // r15
  char *v10; // rbp
  char *v11; // rbx
  const struct FastRegion::Internal::CStripe *v12; // r12
  int v13; // edx
  const struct FastRegion::Internal::CStripe *v14; // rsi
  const struct FastRegion::Internal::CStripe *v15; // r8
  const struct FastRegion::Internal::CStripe *v16; // rdi
  const struct FastRegion::Internal::CStripe *v17; // rdx
  char *v18; // rcx
  int v19; // eax
  int v20; // eax
  const struct FastRegion::Internal::CStripe *v21; // r9
  int v22; // ecx
  const struct FastRegion::Internal::CStripe *v23; // rdx
  const struct FastRegion::Internal::CStripe *v24; // r8
  __int64 v25; // rax
  char *v26; // rbx
  char *v27; // rax
  char *v28; // rdx
  int v29; // ecx
  int v30; // eax

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v7 = (_DWORD *)((char *)a3 + 12);
  v8 = (const struct FastRegion::Internal::CStripe *)v4;
  v9 = (const struct FastRegion::Internal::CStripe *)&v4[2 * v3];
  v10 = (char *)this + 12;
  v11 = (char *)this + 12;
  v12 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v5 + 12);
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  v13 = *v4;
  if ( *v4 < *((_DWORD *)a3 + 3) )
  {
    v16 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    while ( *(_DWORD *)v16 < *v7 )
    {
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v16 == v9 )
        goto LABEL_17;
    }
    v15 = v16;
    v14 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    if ( *(_DWORD *)v16 <= *v7 )
    {
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v16 == v9 )
        goto LABEL_17;
    }
    else
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8);
    }
    v17 = (const struct FastRegion::Internal::CStripe *)v7;
  }
  else
  {
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    if ( v13 > *((_DWORD *)a3 + 3) )
    {
      while ( 1 )
      {
        v30 = *(_DWORD *)v14;
        if ( v13 < *(_DWORD *)v14 )
        {
          v15 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
          goto LABEL_4;
        }
        v15 = v14;
        v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
        if ( v13 <= v30 )
          break;
        if ( v14 == v12 )
          goto LABEL_17;
      }
      v16 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
      if ( v14 == v12 )
        goto LABEL_17;
    }
    else
    {
      v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
LABEL_4:
      v16 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    }
    v17 = v8;
  }
  FastRegion::Internal::CStripe::Intersect((FastRegion::Internal::CRgnData *)((char *)this + 12), v17, v15);
  if ( v11 != v10 )
    goto LABEL_29;
  v18 = (char *)this + 20;
  v19 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
LABEL_8:
  if ( (_DWORD)v18 + v19 - (_DWORD)v11 )
    v11 = v18;
  while ( 1 )
  {
    v20 = *(_DWORD *)v16;
    v21 = v14;
    v22 = *(_DWORD *)v14;
    v23 = v16;
    v24 = v14;
    if ( *(_DWORD *)v16 >= *(_DWORD *)v14 )
      break;
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v16 == v9 )
      goto LABEL_13;
    v24 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
LABEL_28:
    FastRegion::Internal::CStripe::Intersect((FastRegion::Internal::CStripe *)v11, v23, v24);
    if ( v11 == v10 )
    {
      v18 = v11 + 8;
      v19 = *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1);
      goto LABEL_8;
    }
LABEL_29:
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
      v11 += 8;
  }
  v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
  if ( v20 <= v22 )
  {
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v16 == v9 || v14 == v12 )
    {
LABEL_13:
      *(_DWORD *)v11 = v20;
      goto LABEL_14;
    }
    goto LABEL_28;
  }
  if ( v14 != v12 )
  {
    v24 = (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8);
    v23 = v21;
    goto LABEL_28;
  }
  *(_DWORD *)v11 = v22;
LABEL_14:
  if ( v11 != v10 && &v11[*((int *)v11 + 1)] != &v11[*((int *)v11 - 1) - 8] )
    v11 += 8;
LABEL_17:
  v25 = (v11 - (char *)this - 12) >> 3;
  *(_DWORD *)this = v25;
  if ( (_DWORD)v25 )
  {
    v26 = v11 - 8;
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v27 = &v26[*((int *)v26 + 1)];
    while ( 1 )
    {
      v26 -= 8;
      if ( v26 < v10 )
        break;
      v28 = v27;
      v27 = &v26[*((int *)v26 + 1)];
      if ( v27 != v28 )
      {
        if ( *((_DWORD *)this + 1) > *(_DWORD *)v27 )
          *((_DWORD *)this + 1) = *(_DWORD *)v27;
        v29 = *((_DWORD *)v28 - 1);
        if ( *((_DWORD *)this + 2) < v29 )
          *((_DWORD *)this + 2) = v29;
      }
    }
  }
}
