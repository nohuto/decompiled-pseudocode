/*
 * XREFs of std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EF4A4
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EFD30 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EF1D4 (std--_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

unsigned int **__fastcall std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        unsigned int **a1,
        unsigned int *a2,
        unsigned __int64 a3)
{
  __int128 *v3; // rbp
  unsigned int *v7; // rbx
  signed __int64 v8; // rax
  unsigned int *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r10
  __int128 *v13; // rdx
  __int128 *v14; // r8
  unsigned int *v15; // r11
  unsigned int *v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned int *v21; // rcx
  unsigned int *v22; // rdx
  __int128 v23; // xmm3
  __int128 v24; // xmm4
  __int128 v25; // xmm5
  __int128 v26; // xmm6
  __int64 v27; // xmm2_8
  bool v28; // zf
  unsigned int *v29; // r8
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int128 v32; // xmm5
  __int128 v33; // xmm6
  __int64 v34; // xmm2_8
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int128 v37; // xmm5
  __int128 v38; // xmm6
  __int64 v39; // xmm2_8
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  __int128 v42; // xmm5
  __int128 v43; // xmm6
  __int64 v44; // xmm2_8
  __int128 v45; // xmm3
  __int128 v46; // xmm4
  __int128 v47; // xmm5
  __int128 v48; // xmm6
  __int64 v49; // xmm2_8
  __int128 v50; // xmm3
  __int128 v51; // xmm4
  __int128 v52; // xmm5
  __int128 v53; // xmm6
  __int64 v54; // xmm2_8
  __int128 v55; // xmm3
  __int128 v56; // xmm4
  __int128 v57; // xmm5
  __int128 v58; // xmm6
  __int64 v59; // xmm2_8

  v3 = (__int128 *)(a3 - 72);
  v7 = &a2[18 * ((__int64)(0x8E38E38E38E38E39uLL * ((__int64)(a3 - (_QWORD)a2) >> 3)) >> 1)];
  v8 = 0x8E38E38E38E38E39uLL * ((__int64)(a3 - 72 - (_QWORD)a2) >> 3);
  v9 = a2;
  if ( v8 <= 40 )
  {
    v14 = (__int128 *)(a3 - 72);
  }
  else
  {
    std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      a2,
      &a2[18 * ((v8 + 1) >> 3)],
      (__int128 *)&a2[36 * ((v8 + 1) >> 3)]);
    std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      (unsigned int *)((char *)v7 - v10),
      v7,
      (__int128 *)((char *)v7 + v10));
    std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      (unsigned int *)((char *)v3 - v12),
      (unsigned int *)((char *)v3 - v11),
      v3);
    v14 = v13;
    v9 = v15;
  }
  std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v9, v7, v14);
  v16 = v7 + 18;
  if ( a2 < v7 )
  {
    v17 = *v7;
    do
    {
      v18 = v17;
      v19 = (unsigned __int64)(v7 - 18);
      v17 = *(v7 - 18);
      if ( v17 < v18 )
        break;
      if ( v17 > v18 )
        break;
      v7 -= 18;
    }
    while ( (unsigned __int64)a2 < v19 );
  }
  if ( (unsigned __int64)v16 < a3 )
  {
    v20 = *v7;
    do
    {
      if ( *v16 < v20 )
        break;
      if ( *v16 > v20 )
        break;
      v16 += 18;
    }
    while ( (unsigned __int64)v16 < a3 );
  }
  v21 = v16;
  v22 = v7;
  while ( 1 )
  {
    while ( (unsigned __int64)v21 < a3 )
    {
      if ( *v7 < *v21 )
        goto LABEL_20;
      if ( *v7 > *v21 )
        break;
      if ( v16 != v21 )
      {
        v23 = *(_OWORD *)v16;
        v24 = *((_OWORD *)v16 + 1);
        v25 = *((_OWORD *)v16 + 2);
        v26 = *((_OWORD *)v16 + 3);
        v27 = *((_QWORD *)v16 + 8);
        *(_OWORD *)v16 = *(_OWORD *)v21;
        *((_OWORD *)v16 + 1) = *((_OWORD *)v21 + 1);
        *((_OWORD *)v16 + 2) = *((_OWORD *)v21 + 2);
        *((_OWORD *)v16 + 3) = *((_OWORD *)v21 + 3);
        *((_QWORD *)v16 + 8) = *((_QWORD *)v21 + 8);
        *(_OWORD *)v21 = v23;
        *((_OWORD *)v21 + 1) = v24;
        *((_OWORD *)v21 + 2) = v25;
        *((_OWORD *)v21 + 3) = v26;
        *((_QWORD *)v21 + 8) = v27;
      }
      v16 += 18;
LABEL_20:
      v21 += 18;
    }
    v28 = v22 == a2;
    if ( v22 > a2 )
    {
      v29 = v22 - 18;
      do
      {
        if ( *v29 >= *v7 )
        {
          if ( *v29 > *v7 )
            break;
          v7 -= 18;
          if ( v7 != v29 )
          {
            v30 = *(_OWORD *)v7;
            v31 = *((_OWORD *)v7 + 1);
            v32 = *((_OWORD *)v7 + 2);
            v33 = *((_OWORD *)v7 + 3);
            v34 = *((_QWORD *)v7 + 8);
            *(_OWORD *)v7 = *(_OWORD *)v29;
            *((_OWORD *)v7 + 1) = *((_OWORD *)v29 + 1);
            *((_OWORD *)v7 + 2) = *((_OWORD *)v29 + 2);
            *((_OWORD *)v7 + 3) = *((_OWORD *)v29 + 3);
            *((_QWORD *)v7 + 8) = *((_QWORD *)v29 + 8);
            *(_OWORD *)v29 = v30;
            *((_OWORD *)v29 + 1) = v31;
            *((_OWORD *)v29 + 2) = v32;
            *((_OWORD *)v29 + 3) = v33;
            *((_QWORD *)v29 + 8) = v34;
          }
        }
        v22 -= 18;
        v29 -= 18;
      }
      while ( a2 < v22 );
      v28 = v22 == a2;
    }
    if ( v28 )
      break;
    v22 -= 18;
    if ( v21 != (unsigned int *)a3 )
    {
      v55 = *(_OWORD *)v21;
      v56 = *((_OWORD *)v21 + 1);
      v57 = *((_OWORD *)v21 + 2);
      v58 = *((_OWORD *)v21 + 3);
      v59 = *((_QWORD *)v21 + 8);
      *(_OWORD *)v21 = *(_OWORD *)v22;
      *((_OWORD *)v21 + 1) = *((_OWORD *)v22 + 1);
      *((_OWORD *)v21 + 2) = *((_OWORD *)v22 + 2);
      *((_OWORD *)v21 + 3) = *((_OWORD *)v22 + 3);
      *((_QWORD *)v21 + 8) = *((_QWORD *)v22 + 8);
      *(_OWORD *)v22 = v55;
      *((_OWORD *)v22 + 1) = v56;
      *((_OWORD *)v22 + 2) = v57;
      *((_OWORD *)v22 + 3) = v58;
      *((_QWORD *)v22 + 8) = v59;
      goto LABEL_20;
    }
    v7 -= 18;
    if ( v22 != v7 )
    {
      v45 = *(_OWORD *)v22;
      v46 = *((_OWORD *)v22 + 1);
      v47 = *((_OWORD *)v22 + 2);
      v48 = *((_OWORD *)v22 + 3);
      v49 = *((_QWORD *)v22 + 8);
      *(_OWORD *)v22 = *(_OWORD *)v7;
      *((_OWORD *)v22 + 1) = *((_OWORD *)v7 + 1);
      *((_OWORD *)v22 + 2) = *((_OWORD *)v7 + 2);
      *((_OWORD *)v22 + 3) = *((_OWORD *)v7 + 3);
      *((_QWORD *)v22 + 8) = *((_QWORD *)v7 + 8);
      *(_OWORD *)v7 = v45;
      *((_OWORD *)v7 + 1) = v46;
      *((_OWORD *)v7 + 2) = v47;
      *((_OWORD *)v7 + 3) = v48;
      *((_QWORD *)v7 + 8) = v49;
    }
    v50 = *(_OWORD *)v7;
    v16 -= 18;
    v51 = *((_OWORD *)v7 + 1);
    v52 = *((_OWORD *)v7 + 2);
    v53 = *((_OWORD *)v7 + 3);
    v54 = *((_QWORD *)v7 + 8);
    *(_OWORD *)v7 = *(_OWORD *)v16;
    *((_OWORD *)v7 + 1) = *((_OWORD *)v16 + 1);
    *((_OWORD *)v7 + 2) = *((_OWORD *)v16 + 2);
    *((_OWORD *)v7 + 3) = *((_OWORD *)v16 + 3);
    *((_QWORD *)v7 + 8) = *((_QWORD *)v16 + 8);
    *(_OWORD *)v16 = v50;
    *((_OWORD *)v16 + 1) = v51;
    *((_OWORD *)v16 + 2) = v52;
    *((_OWORD *)v16 + 3) = v53;
    *((_QWORD *)v16 + 8) = v54;
  }
  if ( v21 != (unsigned int *)a3 )
  {
    if ( v16 != v21 )
    {
      v35 = *(_OWORD *)v7;
      v36 = *((_OWORD *)v7 + 1);
      v37 = *((_OWORD *)v7 + 2);
      v38 = *((_OWORD *)v7 + 3);
      v39 = *((_QWORD *)v7 + 8);
      *(_OWORD *)v7 = *(_OWORD *)v16;
      *((_OWORD *)v7 + 1) = *((_OWORD *)v16 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)v16 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)v16 + 3);
      *((_QWORD *)v7 + 8) = *((_QWORD *)v16 + 8);
      *(_OWORD *)v16 = v35;
      *((_OWORD *)v16 + 1) = v36;
      *((_OWORD *)v16 + 2) = v37;
      *((_OWORD *)v16 + 3) = v38;
      *((_QWORD *)v16 + 8) = v39;
    }
    v16 += 18;
    v40 = *(_OWORD *)v7;
    v41 = *((_OWORD *)v7 + 1);
    v42 = *((_OWORD *)v7 + 2);
    v43 = *((_OWORD *)v7 + 3);
    v44 = *((_QWORD *)v7 + 8);
    *(_OWORD *)v7 = *(_OWORD *)v21;
    *((_OWORD *)v7 + 1) = *((_OWORD *)v21 + 1);
    *((_OWORD *)v7 + 2) = *((_OWORD *)v21 + 2);
    *((_OWORD *)v7 + 3) = *((_OWORD *)v21 + 3);
    *((_QWORD *)v7 + 8) = *((_QWORD *)v21 + 8);
    v7 += 18;
    *(_OWORD *)v21 = v40;
    *((_OWORD *)v21 + 1) = v41;
    *((_OWORD *)v21 + 2) = v42;
    *((_OWORD *)v21 + 3) = v43;
    *((_QWORD *)v21 + 8) = v44;
    goto LABEL_20;
  }
  *a1 = v7;
  a1[1] = v16;
  return a1;
}
