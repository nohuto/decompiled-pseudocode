/*
 * XREFs of sub_140A50D3C @ 0x140A50D3C
 * Callers:
 *     sub_140A50C40 @ 0x140A50C40 (sub_140A50C40.c)
 * Callees:
 *     sub_140253E78 @ 0x140253E78 (sub_140253E78.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14036CCBC @ 0x14036CCBC (sub_14036CCBC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A51338 @ 0x140A51338 (sub_140A51338.c)
 *     sub_140A51350 @ 0x140A51350 (sub_140A51350.c)
 *     sub_140A513D4 @ 0x140A513D4 (sub_140A513D4.c)
 *     sub_140A514F0 @ 0x140A514F0 (sub_140A514F0.c)
 */

__int64 *__fastcall sub_140A50D3C(char *a1, int a2)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *i; // rax
  _QWORD *v10; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  _QWORD **v16; // rcx
  _QWORD *j; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdi
  _QWORD *k; // rcx
  _QWORD *v24; // rdx
  char v25; // r10
  _QWORD *m; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  _QWORD *n; // rax
  _QWORD *v33; // rdi
  _QWORD *ii; // rax
  _QWORD *v35; // rax
  _QWORD *jj; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // r9
  char v39; // al
  _DWORD *v40; // rsi
  _DWORD *v41; // rbx
  _QWORD *v42; // rax
  char v43; // r10
  _QWORD *v44; // rax
  _QWORD **v45; // rdx
  _BYTE *v46; // rcx
  unsigned __int8 v47; // al
  _QWORD *kk; // rax
  _QWORD *mm; // rcx
  _QWORD *nn; // rcx
  _QWORD *v51; // rcx
  _QWORD *i1; // rax
  __int64 v53; // r8
  unsigned __int8 v54; // r9
  _QWORD *v55; // r9
  __int64 v56; // r10
  __int64 *v57; // r11
  __int64 i2; // r11
  __int64 v59; // rbx
  __int64 i3; // r11
  char *v61; // rax
  char **v62; // rcx
  _QWORD *v63; // rax
  char *v64; // rdx
  __int64 v65; // rbx
  __int64 *v66; // r11
  __int64 *result; // rax
  __int64 v68; // r9
  char v69; // dl
  __int64 *v70; // rax
  _QWORD *v71; // [rsp+20h] [rbp-20h] BYREF
  _QWORD **v72; // [rsp+28h] [rbp-18h]
  __int64 v73; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v74; // [rsp+38h] [rbp-8h]

  v72 = &v71;
  v74 = &v73;
  v73 = (__int64)&v73;
  v3 = &v71;
  v71 = &v71;
  if ( (a2 & 1) == 0 )
  {
    sub_140253E78();
    v3 = v71;
  }
  memset(a1, 0, 0x180uLL);
  v5 = a1 + 48;
  *((_DWORD *)a1 + 94) = a2;
  v6 = 5LL;
  do
  {
    *(v5 - 2) = v5 - 3;
    *(v5 - 3) = v5 - 3;
    *v5 = v5 - 1;
    *(v5 - 1) = v5 - 1;
    v5[2] = v5 + 1;
    v5[1] = v5 + 1;
    v7 = v5 + 3;
    v5[4] = v5 + 3;
    v5 += 9;
    *v7 = v7;
    --v6;
  }
  while ( v6 );
  v8 = qword_140C46278;
  for ( i = (_QWORD *)*((_QWORD *)qword_140C46278 + 1); i; i = (_QWORD *)i[1] )
    v8 = i;
  if ( v8 == qword_140C46278 )
    goto LABEL_27;
  do
  {
    v10 = v8 + 20;
    *((_DWORD *)v8 + 62) = 0;
    *((_DWORD *)v8 + 63) = 0;
    *((_DWORD *)v8 + 64) = 0;
    *((_DWORD *)v8 + 65) = 0;
    *((_BYTE *)v8 + 216) = 0;
    v8[28] = v8[4];
    AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v8[4]);
    v8[26] = AttachedDeviceReference;
    v12 = sub_140A513D4(AttachedDeviceReference->DriverObject);
    v13 = v8[26];
    v8[30] = v12;
    v14 = sub_140A513D4(v13);
    v15 = (void *)v8[28];
    v8[29] = v14;
    ObfReferenceObject(v15);
    *((_BYTE *)v8 + 216) = 0;
    if ( (unsigned __int8)sub_140A51350(v8 + 20, 0x2000LL) )
      *((_BYTE *)v8 + 216) |= 2u;
    v16 = (_QWORD **)(v8 + 2);
    if ( (PVOID)v8[2] == qword_140C46278 && *((_DWORD *)v8 + 112) && (*((_DWORD *)v8 + 99) & 4) == 0 )
    {
      v18 = v72;
      if ( *v72 != &v71 )
LABEL_136:
        __fastfail(3u);
      v8[21] = v72;
      *v10 = &v71;
      *v18 = v10;
      v72 = (_QWORD **)(v8 + 20);
    }
    v8 = (_QWORD *)*v8;
    if ( v8 )
    {
      for ( j = (_QWORD *)v8[1]; j; j = (_QWORD *)j[1] )
        v8 = j;
    }
    else
    {
      v8 = *v16;
    }
  }
  while ( v8 != qword_140C46278 );
  while ( 1 )
  {
    v3 = v71;
LABEL_27:
    if ( v3 == &v71 )
      break;
    if ( (_QWORD **)v3[1] != &v71 )
      goto LABEL_136;
    v21 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_136;
    v71 = (_QWORD *)*v3;
    *(_QWORD *)(v21 + 8) = &v71;
    *((_BYTE *)v3 + 56) |= 1u;
    v22 = v3 - 20;
    v20 = v22;
    for ( k = (_QWORD *)v22[1]; k; k = (_QWORD *)k[1] )
      v20 = k;
    while ( v20 != v22 )
    {
      *((_BYTE *)v20 + 216) |= 1u;
      v19 = (_QWORD *)*v20;
      if ( *v20 )
      {
        do
        {
          v20 = v19;
          v19 = (_QWORD *)v19[1];
        }
        while ( v19 );
      }
      else
      {
        v20 = (_QWORD *)v20[2];
      }
    }
  }
  do
  {
    v24 = qword_140C46278;
    v25 = 0;
    for ( m = (_QWORD *)*((_QWORD *)qword_140C46278 + 1); m; m = (_QWORD *)m[1] )
      v24 = m;
    while ( 1 )
    {
      v27 = qword_140C46278;
      if ( v24 == qword_140C46278 )
        break;
      if ( (v24[27] & 2) != 0 )
      {
        v29 = (_QWORD *)v24[1];
        v30 = v24;
        while ( v29 )
        {
          v30 = v29;
          v29 = (_QWORD *)v29[1];
        }
        while ( v30 != v24 )
        {
          *((_BYTE *)v30 + 216) |= 2u;
          v31 = (_QWORD *)*v30;
          if ( *v30 )
          {
            do
            {
              v30 = v31;
              v31 = (_QWORD *)v31[1];
            }
            while ( v31 );
          }
          else
          {
            v30 = (_QWORD *)v30[2];
          }
        }
      }
      v28 = (_QWORD *)*v24;
      if ( *v24 )
      {
        do
        {
          v24 = v28;
          v28 = (_QWORD *)v28[1];
        }
        while ( v28 );
      }
      else
      {
        v24 = (_QWORD *)v24[2];
      }
    }
    for ( n = (_QWORD *)*((_QWORD *)qword_140C46278 + 1); n; n = (_QWORD *)n[1] )
      v27 = n;
    v33 = qword_140C46278;
    if ( v27 == qword_140C46278 )
      break;
    do
    {
      if ( (v27[27] & 2) != 0 )
      {
        for ( ii = (_QWORD *)v27[22]; ii != v27 + 22; ii = (_QWORD *)*ii )
        {
          v68 = *(ii - 1);
          v69 = *(_BYTE *)(v68 + 56);
          if ( (v69 & 2) == 0 )
          {
            v25 = 1;
            *(_BYTE *)(v68 + 56) = v69 | 2;
          }
        }
      }
      v35 = (_QWORD *)*v27;
      if ( *v27 )
      {
        do
        {
          v27 = v35;
          v35 = (_QWORD *)v35[1];
        }
        while ( v35 );
      }
      else
      {
        v27 = (_QWORD *)v27[2];
      }
      v33 = qword_140C46278;
    }
    while ( v27 != qword_140C46278 );
  }
  while ( v25 );
  for ( jj = (_QWORD *)v33[1]; jj; jj = (_QWORD *)jj[1] )
    v33 = jj;
  while ( 1 )
  {
    v38 = qword_140C46278;
    if ( v33 == qword_140C46278 )
      break;
    v39 = *((_BYTE *)v33 + 216);
    if ( (v39 & 2) != 0 )
    {
      v40 = (_DWORD *)v33[26];
      *((_BYTE *)v33 + 216) = v39 + 1;
      ObfReferenceObjectWithTag(v40, 0x70506F50u);
      if ( v40 )
      {
        while ( v40[18] != 7 )
        {
          v41 = sub_14036CCBC((__int64)v40, 0x70506F50u);
          ObfDereferenceObjectWithTag(v40, 0x70506F50u);
          v40 = v41;
          if ( !v41 )
            goto LABEL_70;
        }
        ObfDereferenceObjectWithTag(v40, 0x70506F50u);
        if ( (unsigned __int8)sub_140A51350(v33 + 20, 256LL) )
          *((_BYTE *)v33 + 216) = 2;
      }
    }
LABEL_70:
    v37 = (_QWORD *)*v33;
    if ( *v33 )
    {
      do
      {
        v33 = v37;
        v37 = (_QWORD *)v37[1];
      }
      while ( v37 );
    }
    else
    {
      v33 = (_QWORD *)v33[2];
    }
  }
  do
  {
    v42 = (_QWORD *)v38[1];
    v43 = 0;
    while ( v42 )
    {
      v38 = v42;
      v42 = (_QWORD *)v42[1];
    }
    while ( 1 )
    {
      v44 = qword_140C46278;
      if ( v38 == qword_140C46278 )
        break;
      v45 = (_QWORD **)(v38 + 2);
      v46 = (_BYTE *)v38[2];
      if ( v46 != qword_140C46278 )
      {
        v47 = *((_BYTE *)v38 + 216);
        if ( v46[216] > v47 )
          v46[216] = v47;
      }
      v38 = (_QWORD *)*v38;
      if ( v38 )
      {
        for ( kk = (_QWORD *)v38[1]; kk; kk = (_QWORD *)kk[1] )
          v38 = kk;
      }
      else
      {
        v38 = *v45;
      }
    }
    for ( mm = (_QWORD *)*((_QWORD *)qword_140C46278 + 1); mm; mm = (_QWORD *)mm[1] )
      v44 = mm;
    v38 = qword_140C46278;
    if ( v44 == qword_140C46278 )
      break;
    do
    {
      for ( nn = (_QWORD *)v44[24]; nn != v44 + 24; nn = (_QWORD *)*nn )
      {
        v53 = nn[5];
        v54 = *((_BYTE *)v44 + 216);
        if ( *(_BYTE *)(v53 + 56) > v54 )
        {
          v43 = 1;
          *(_BYTE *)(v53 + 56) = v54;
        }
      }
      v51 = (_QWORD *)*v44;
      if ( *v44 )
      {
        do
        {
          v44 = v51;
          v51 = (_QWORD *)v51[1];
        }
        while ( v51 );
      }
      else
      {
        v44 = (_QWORD *)v44[2];
      }
      v38 = qword_140C46278;
    }
    while ( v44 != qword_140C46278 );
  }
  while ( v43 );
  for ( i1 = (_QWORD *)v38[1]; i1; i1 = (_QWORD *)i1[1] )
    v38 = i1;
  while ( v38 != qword_140C46278 )
  {
    if ( (unsigned __int8)sub_140A51338(*((unsigned int *)a1 + 94), v38 + 20) )
    {
      ++*(_DWORD *)&a1[72 * *(unsigned __int8 *)(v56 + 56) + 16];
      v64 = (char *)v55[2];
      if ( v64 != qword_140C46278 && (unsigned __int8)sub_140A51338(*((unsigned int *)a1 + 94), v64 + 160) )
      {
        ++*(_DWORD *)(v56 + 96);
        ++*(_DWORD *)(v55[2] + 248LL);
      }
      v65 = v56 + 32;
      for ( i2 = *(_QWORD *)(v56 + 32); i2 != v65; i2 = *v57 )
      {
        if ( (unsigned __int8)sub_140A51338(*((unsigned int *)a1 + 94), *(_QWORD *)(i2 + 40)) )
          ++*(_DWORD *)(v56 + 96);
      }
      v59 = v56 + 16;
      for ( i3 = *(_QWORD *)(v56 + 16); i3 != v59; i3 = *v66 )
      {
        if ( (unsigned __int8)sub_140A51338(*((unsigned int *)a1 + 94), *(_QWORD *)(i3 - 8)) )
          ++*(_DWORD *)(v56 + 88);
      }
      v61 = &a1[64 * *(unsigned __int8 *)(v56 + 56) + 24 + 8 * *(unsigned __int8 *)(v56 + 56)];
      v62 = (char **)*((_QWORD *)v61 + 1);
      if ( *v62 != v61 )
        goto LABEL_136;
      *(_QWORD *)v56 = v61;
      *(_QWORD *)(v56 + 8) = v62;
      *v62 = (char *)v56;
      *((_QWORD *)v61 + 1) = v56;
    }
    else
    {
      v70 = v74;
      if ( (__int64 *)*v74 != &v73 )
        goto LABEL_136;
      *(_QWORD *)(v56 + 8) = v74;
      *(_QWORD *)v56 = &v73;
      *v70 = v56;
      v74 = (__int64 *)v56;
    }
    v63 = (_QWORD *)*v55;
    if ( *v55 )
    {
      do
      {
        v38 = v63;
        v63 = (_QWORD *)v63[1];
      }
      while ( v63 );
    }
    else
    {
      v38 = (_QWORD *)v55[2];
    }
  }
  sub_140A514F0(&v73);
  result = &qword_140C46248;
  *((_QWORD *)a1 + 1) = &qword_140C46248;
  *a1 = 1;
  return result;
}
