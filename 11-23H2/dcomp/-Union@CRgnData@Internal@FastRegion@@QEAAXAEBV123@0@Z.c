/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007B060
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180005EFC (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x1800079F8 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800095D0 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18007B508 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r10
  FastRegion::Internal::CStripe *v4; // rbp
  __int64 v5; // r9
  const struct FastRegion::Internal::CStripe *v6; // r13
  int *v7; // rsi
  FastRegion::Internal::CStripe *v8; // rbx
  char *v9; // r14
  const struct FastRegion::Internal::CStripe *v10; // r12
  FastRegion::Internal::CStripe *v11; // rcx
  int v12; // eax
  const struct FastRegion::Internal::CStripe *v13; // r14
  int v14; // eax
  int v15; // ecx
  const struct FastRegion::Internal::CStripe *v16; // rsi
  const struct FastRegion::Internal::CStripe *v17; // r8
  bool v18; // cc
  const struct FastRegion::Internal::CStripe *v19; // rdx
  FastRegion::Internal::CStripe *v20; // rcx
  const struct FastRegion::Internal::CStripe *v21; // r8
  char IsEqualToPrevious; // al
  const struct FastRegion::Internal::CStripe *v23; // r13
  const struct FastRegion::Internal::CStripe *v24; // r15
  int v25; // ecx
  const struct FastRegion::Internal::CStripe *v26; // rax
  int v27; // r8d
  const struct FastRegion::Internal::CStripe *v28; // rdx
  const struct FastRegion::Internal::CStripe *v29; // r8
  const struct FastRegion::Internal::CStripe *v30; // rdx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  char *v34; // rcx
  int v35; // eax
  const struct FastRegion::Internal::CStripe *v36; // r8
  int v37; // ecx
  int v38; // eax
  const struct FastRegion::Internal::CStripe *v39; // rdx
  int v40; // ecx
  FastRegion::Internal::CStripe *v41; // r11
  int v42; // ecx
  FastRegion::Internal::CStripe *v43; // r11
  const struct FastRegion::Internal::CStripe *v44; // [rsp+20h] [rbp-58h]
  const struct FastRegion::Internal::CStripe *v45; // [rsp+28h] [rbp-50h]

  v3 = *(int *)a2;
  v4 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v5 = *(int *)a3;
  v6 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v7 = (int *)((char *)a3 + 12);
  v8 = v4;
  v9 = (char *)a2 + 12;
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v44 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v45 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v5 + 12);
  v11 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  *((_DWORD *)v4 + 1) = 8 * (v5 + v3);
  v12 = *((_DWORD *)a3 + 3);
  if ( *((_DWORD *)a2 + 3) >= v12 )
  {
    v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    if ( *(_DWORD *)v6 <= v12 )
    {
      v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
      FastRegion::Internal::CStripe::Union(
        v11,
        (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
        (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
      v34 = (char *)v4 + 8;
      v35 = *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1);
LABEL_36:
      v23 = v44;
      goto LABEL_37;
    }
    FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
      v8 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    v37 = *(_DWORD *)v6;
    v38 = *(_DWORD *)v16;
    if ( *(_DWORD *)v6 < *(_DWORD *)v16 )
    {
LABEL_96:
      v13 = (const struct FastRegion::Internal::CStripe *)(v9 + 8);
      v21 = (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8);
      v19 = v6;
      v20 = v8;
    }
    else
    {
      while ( 1 )
      {
        v39 = v16;
        v21 = v16;
        v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
        if ( v37 <= v38 )
          break;
        if ( v16 == v45 )
        {
          *(_DWORD *)v8 = v38;
          v42 = *((_DWORD *)v8 + 1) - 8;
          *((_DWORD *)v8 + 3) = v42;
          if ( v8 == v4 )
          {
            if ( v42 - *((_DWORD *)v8 + 1) != -8 )
              v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
          {
            v8 = v43;
          }
          v13 = (const struct FastRegion::Internal::CStripe *)(v9 + 8);
          v19 = v6;
          v20 = v8;
LABEL_70:
          FastRegion::Internal::CStripe::Copy(v20, v19);
LABEL_20:
          if ( v8 == v4 )
          {
            if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
              v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
          {
            v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
          }
          while ( 1 )
          {
            v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
            if ( v13 == v44 )
              break;
            FastRegion::Internal::CStripe::Copy(v8, (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8));
            if ( v8 == v4 )
            {
              if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
                v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
            }
            else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
            {
              v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
            }
          }
          v31 = *((_DWORD *)v13 - 2);
          goto LABEL_25;
        }
        FastRegion::Internal::CStripe::Copy(v8, v39);
        if ( v8 == v4 )
        {
          if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
            v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
        {
          v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        }
        v37 = *(_DWORD *)v6;
        v38 = *(_DWORD *)v16;
        if ( *(_DWORD *)v6 < *(_DWORD *)v16 )
          goto LABEL_96;
      }
      v13 = (const struct FastRegion::Internal::CStripe *)(v9 + 8);
      v19 = v6;
      v20 = v8;
      if ( v16 == v45 )
        goto LABEL_70;
    }
LABEL_7:
    FastRegion::Internal::CStripe::Union(v20, v19, v21);
    if ( v8 != v4 )
    {
      IsEqualToPrevious = FastRegion::Internal::CStripe::IsEqualToPrevious(v8);
      v23 = v44;
      goto LABEL_9;
    }
    v34 = (char *)v8 + 8;
    v35 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
    goto LABEL_36;
  }
  v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  FastRegion::Internal::CStripe::Copy(v11, (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
  if ( *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1) != -8 )
    v8 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
  v14 = *(_DWORD *)v13;
  v15 = *v7;
  if ( *(_DWORD *)v13 < *v7 )
  {
    while ( 1 )
    {
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      v6 = (const struct FastRegion::Internal::CStripe *)((char *)v6 + 8);
      if ( v13 == v44 )
        break;
      FastRegion::Internal::CStripe::Copy(v8, v6);
      if ( v8 == v4 )
      {
        if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
          v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
      {
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
      }
      v14 = *(_DWORD *)v13;
      v15 = *v7;
      if ( *(_DWORD *)v13 >= *v7 )
        goto LABEL_5;
    }
    *(_DWORD *)v8 = *(_DWORD *)v6;
    v40 = *((_DWORD *)v8 + 1) - 8;
    *((_DWORD *)v8 + 3) = v40;
    if ( v8 == v4 )
    {
      if ( v40 - *((_DWORD *)v8 + 1) != -8 )
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
    {
      v8 = v41;
    }
    v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
    v19 = v10;
    v20 = v8;
    goto LABEL_75;
  }
LABEL_5:
  v16 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
  v17 = v13;
  v18 = v14 <= v15;
  v19 = v10;
  v20 = v8;
  if ( !v18 )
  {
    v21 = (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8);
    goto LABEL_7;
  }
  v23 = v44;
  v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
  if ( v13 == v44 )
  {
LABEL_75:
    FastRegion::Internal::CStripe::Copy(v20, v19);
    goto LABEL_58;
  }
  FastRegion::Internal::CStripe::Union(v8, v10, v17);
  if ( v8 == v4 )
  {
    v34 = (char *)v8 + 8;
    v35 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
LABEL_37:
    if ( (_DWORD)v34 + v35 - (_DWORD)v8 )
      v8 = (FastRegion::Internal::CStripe *)v34;
    goto LABEL_11;
  }
  IsEqualToPrevious = FastRegion::Internal::CStripe::IsEqualToPrevious(v8);
LABEL_9:
  if ( !IsEqualToPrevious )
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
LABEL_11:
  v24 = (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8);
  while ( 1 )
  {
    v25 = *(_DWORD *)v13;
    v26 = v13;
    v27 = *(_DWORD *)v16;
    v28 = v16;
    if ( *(_DWORD *)v13 < *(_DWORD *)v16 )
    {
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      v28 = (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8);
      v24 = (const struct FastRegion::Internal::CStripe *)((char *)v24 + 8);
      if ( v13 == v23 )
        goto LABEL_57;
LABEL_40:
      v36 = v28;
      v28 = v26;
      goto LABEL_41;
    }
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v25 <= v27 )
      break;
    if ( v16 == v45 )
    {
      v29 = v28;
      v30 = v24;
LABEL_19:
      FastRegion::Internal::CStripe::Copy(v8, v30, v29);
      goto LABEL_20;
    }
    v36 = v24;
LABEL_41:
    FastRegion::Internal::CStripe::Union(v8, v28, v36);
    if ( v8 == v4 )
    {
      if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
    {
      v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
  }
  v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
  v24 = (const struct FastRegion::Internal::CStripe *)((char *)v24 + 8);
  if ( v13 != v23 )
  {
    if ( v16 == v45 )
    {
      v29 = v28;
      v30 = v26;
      goto LABEL_19;
    }
    goto LABEL_40;
  }
  if ( v16 == v45 )
  {
    *(_DWORD *)v8 = v25;
    goto LABEL_26;
  }
LABEL_57:
  FastRegion::Internal::CStripe::Copy(v8, v28, v26);
LABEL_58:
  if ( v8 == v4 )
  {
    if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
      v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
  {
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  }
  while ( 1 )
  {
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v16 == v45 )
      break;
    FastRegion::Internal::CStripe::Copy(v8, (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8));
    if ( v8 == v4 )
    {
      if ( *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1) != -8 )
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
    {
      v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
  }
  v31 = *((_DWORD *)v16 - 2);
LABEL_25:
  *(_DWORD *)v8 = v31;
LABEL_26:
  if ( v8 != v4 && (char *)v8 + *((int *)v8 + 1) != (char *)v8 + *((int *)v8 - 1) - 8 )
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  *(_DWORD *)this = (v8 - this - 12) >> 3;
  v32 = *((_DWORD *)a2 + 1);
  if ( v32 >= *((_DWORD *)a3 + 1) )
    v32 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v32;
  v33 = *((_DWORD *)a2 + 2);
  if ( v33 <= *((_DWORD *)a3 + 2) )
    v33 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v33;
}
