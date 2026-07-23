/*
 * XREFs of ApiSetComposeSchema @ 0x140614EF4
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x140A0A270 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x14035F720 (ApiSetpSearchForApiSet.c)
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ApiSetValidateSchemaFormat @ 0x140614C1C (ApiSetValidateSchemaFormat.c)
 *     AsiAddDataToSchema @ 0x14061563C (AsiAddDataToSchema.c)
 *     AsiPopulateHashes @ 0x1406156D4 (AsiPopulateHashes.c)
 *     AsiSortValueList @ 0x140615830 (AsiSortValueList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ApiSetComposeSchema(PVOID *a1, unsigned int *a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v4; // r12
  unsigned int v7; // edx
  unsigned int v8; // r13d
  PVOID v9; // rcx
  unsigned int v10; // r15d
  int v11; // ebx
  __int64 v12; // rsi
  char *v13; // rdi
  int v14; // eax
  __int64 v15; // rax
  char v16; // r13
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  const WCHAR *v21; // r9
  _WORD *v22; // rcx
  unsigned __int16 v23; // ax
  _DWORD *v24; // rax
  int v25; // edx
  int v26; // r13d
  _DWORD *Pool2; // rsi
  unsigned int v28; // ebx
  __int64 v29; // rdi
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // r15d
  unsigned int i; // r9d
  char *v36; // r8
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int j; // ebx
  char *v40; // r11
  int v41; // eax
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // r13
  char *v46; // r8
  __int64 v47; // r11
  int v48; // eax
  char *v49; // r11
  __int64 v50; // r9
  char *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r10
  __int64 v54; // rax
  __int64 v55; // rdx
  char *v56; // r9
  __int64 v57; // rbx
  const WCHAR *v58; // rcx
  _WORD *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // r9
  const WCHAR *v62; // r8
  char *v63; // rcx
  __int64 v64; // rcx
  char *v65; // rdx
  int v66; // edx
  int v67; // r10d
  _DWORD *v68; // rcx
  unsigned int v69; // eax
  void *v70; // rcx
  int v71; // [rsp+28h] [rbp-69h] BYREF
  unsigned int v72; // [rsp+2Ch] [rbp-65h]
  int v73; // [rsp+30h] [rbp-61h]
  unsigned int v74; // [rsp+34h] [rbp-5Dh]
  unsigned int k; // [rsp+38h] [rbp-59h]
  unsigned int v76; // [rsp+3Ch] [rbp-55h]
  int v77; // [rsp+40h] [rbp-51h]
  char *v78; // [rsp+48h] [rbp-49h]
  __int64 v79; // [rsp+50h] [rbp-41h]
  __int64 v80; // [rsp+58h] [rbp-39h]
  char *v81; // [rsp+60h] [rbp-31h]
  const WCHAR *v82; // [rsp+68h] [rbp-29h]
  char *v83; // [rsp+70h] [rbp-21h]
  char *v84; // [rsp+78h] [rbp-19h]
  __int64 v85; // [rsp+80h] [rbp-11h] BYREF
  int v86; // [rsp+88h] [rbp-9h]
  int v87; // [rsp+8Ch] [rbp-5h]
  unsigned int v88; // [rsp+90h] [rbp-1h]
  __int128 v89; // [rsp+98h] [rbp+7h] BYREF
  int v90; // [rsp+A8h] [rbp+17h]

  v4 = *a1;
  if ( *(_BYTE *)*a1 == 7 )
    return ApiSetComposeSchema_V7(a1, a2, a3, a4);
  if ( *v4 == 6 )
  {
    if ( (v4[2] & 4) == 0 )
      goto LABEL_6;
    if ( *((_BYTE *)v4 + 28) == 7 )
      return ApiSetComposeSchema_V7(a1, a2, a3, a4);
  }
  if ( *v4 < 5u )
    return 3221225659LL;
LABEL_6:
  if ( *a3 < 5u )
    return 3221225659LL;
  if ( (v4[2] & 1) != 0 )
    return 3221225485LL;
  if ( !a3[3] )
    return 0LL;
  v7 = v4[1];
  v8 = 0;
  v9 = *a1;
  v72 = 0;
  v10 = 0;
  v11 = ApiSetValidateSchemaFormat((__int64)v9, v7);
  if ( v11 < 0 )
    return (unsigned int)v11;
  v11 = ApiSetValidateSchemaFormat((__int64)a3, a3[1]);
  if ( v11 < 0 )
    return (unsigned int)v11;
  v12 = 0LL;
  if ( !a3[3] )
  {
LABEL_34:
    v26 = 24 * v8;
    k = v4[1] + v10 + v26 + 8 * v72;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, k, 1751339841LL);
    if ( Pool2 )
    {
      v28 = v4[4] + 24 * v4[3];
      v29 = v28;
      memmove(Pool2, v4, v28);
      v30 = v28 + v26;
      v31 = v4[5] - v28;
      v32 = v31 + v30;
      v73 = v31 + v30;
      v71 = v31 + v30;
      memmove((char *)Pool2 + v30, (char *)v4 + v29, v31);
      memset((char *)Pool2 + v32, 0, v10);
      v33 = v10 + v32;
      memmove((char *)Pool2 + v33, (char *)v4 + (unsigned int)v4[5], (unsigned int)(8 * v4[3]));
      v34 = k;
      Pool2[1] = k;
      Pool2[5] = v33;
      if ( v26 )
      {
        for ( i = 0; i < Pool2[3]; ++i )
        {
          v36 = (char *)Pool2 + (unsigned int)Pool2[4];
          v37 = *(_DWORD *)&v36[24 * i + 4];
          if ( v37 )
            *(_DWORD *)&v36[24 * i + 4] = v26 + v37;
          v38 = *(_DWORD *)&v36[24 * i + 16];
          if ( v38 )
          {
            v38 += v26;
            *(_DWORD *)&v36[24 * i + 16] = v38;
          }
          for ( j = 0; j < *(_DWORD *)&v36[24 * i + 20]; ++j )
          {
            v40 = (char *)Pool2 + v38;
            v41 = *(_DWORD *)&v40[20 * j + 4];
            if ( v41 )
            {
              *(_DWORD *)&v40[20 * j + 4] = v26 + v41;
              v38 = *(_DWORD *)&v36[24 * i + 16];
            }
            v42 = *(_DWORD *)&v40[20 * j + 12];
            if ( v42 )
            {
              *(_DWORD *)&v40[20 * j + 12] = v26 + v42;
              v38 = *(_DWORD *)&v36[24 * i + 16];
            }
          }
        }
      }
      v11 = ApiSetValidateSchemaFormat((__int64)Pool2, v34);
      if ( v11 < 0 )
        goto LABEL_85;
      v43 = 0;
      v44 = 0LL;
      v76 = 0;
      for ( k = 0; (unsigned int)v44 < a3[3]; k = v44 )
      {
        v45 = 3 * v44;
        v46 = (char *)a3 + (unsigned int)a3[4];
        v84 = v46;
        v47 = *(unsigned int *)&v46[24 * v44 + 4];
        v48 = *(_DWORD *)&v46[24 * v44];
        v49 = (char *)a3 + v47;
        v50 = *(unsigned int *)&v46[8 * v45 + 8];
        v74 = *(_DWORD *)&v46[8 * v45 + 8];
        v83 = v49;
        if ( (v48 & 4) != 0 )
        {
          if ( v43 >= v72 )
          {
LABEL_88:
            v11 = -2147483643;
            goto LABEL_85;
          }
          v51 = (char *)Pool2 + (unsigned int)Pool2[4];
          v76 = v43 + 1;
          v52 = (unsigned int)Pool2[3];
          v53 = 3 * v52;
          Pool2[3] = v52 + 1;
          *(_OWORD *)&v51[8 * v53] = 0LL;
          *(_QWORD *)&v51[8 * v53 + 16] = 0LL;
          *(_DWORD *)&v51[8 * v53] = *(_DWORD *)&v46[8 * v45];
          *(_DWORD *)&v51[8 * v53 + 4] = v73;
          *(_DWORD *)&v51[8 * v53 + 8] = v50;
          *(_DWORD *)&v51[8 * v53 + 12] = v50;
          v11 = AsiAddDataToSchema(Pool2, &v71, v49, v50);
          if ( v11 < 0 )
            goto LABEL_85;
          v73 = v71;
LABEL_80:
          v43 = v76;
        }
        else
        {
          v54 = 0LL;
          LODWORD(v78) = 0;
          v77 = 0;
          if ( *(_DWORD *)&v46[8 * v45 + 20] )
          {
            while ( 1 )
            {
              v55 = 5 * v54;
              v56 = (char *)a3 + *(unsigned int *)&v46[8 * v45 + 16];
              v80 = 5 * v54;
              v81 = v56;
              v57 = *(unsigned int *)&v56[20 * v54 + 16];
              v58 = (const WCHAR *)((char *)a3 + *(unsigned int *)&v56[20 * v54 + 12]);
              v82 = v58;
              v59 = (_WORD *)((char *)v58 + v57);
              do
              {
                if ( (unsigned int)v57 <= 1 )
                  break;
                LODWORD(v57) = v57 - 2;
                --v59;
              }
              while ( *v59 != 45 );
              if ( !((unsigned __int16)v57 >> 1) )
                break;
              LODWORD(v79) = *(_DWORD *)&v56[4 * v55 + 4];
              v60 = ApiSetpSearchForApiSet(Pool2, v58, (unsigned __int16)v57 >> 1);
              if ( v60 )
              {
                v66 = v73;
              }
              else
              {
                if ( v76 >= v72 )
                  goto LABEL_88;
                v61 = (unsigned int)Pool2[3];
                v62 = v82;
                v63 = (char *)Pool2 + (unsigned int)Pool2[4];
                ++v76;
                v60 = (__int64)&v63[24 * v61];
                Pool2[3] = v61 + 1;
                v64 = v80;
                v65 = v81;
                *(_OWORD *)v60 = 0LL;
                *(_QWORD *)(v60 + 16) = 0LL;
                *(_DWORD *)(v60 + 4) = v73;
                *(_DWORD *)(v60 + 8) = *(_DWORD *)&v65[4 * v64 + 16];
                *(_DWORD *)(v60 + 12) = v57;
                v11 = AsiAddDataToSchema(Pool2, &v71, v62, *(unsigned int *)&v65[4 * v64 + 16]);
                if ( v11 < 0 )
                  goto LABEL_85;
                *(_DWORD *)(v60 + 20) = 1;
                v90 = 0;
                *(_DWORD *)(v60 + 16) = v71;
                v89 = 0LL;
                v11 = AsiAddDataToSchema(Pool2, &v71, &v89, 20LL);
                if ( v11 < 0 )
                  goto LABEL_85;
                v66 = v71;
                v73 = v71;
              }
              if ( (*(_DWORD *)v60 & 1) == 0 )
              {
                v67 = v77;
                if ( !v77 )
                {
                  v77 = v66;
                  v11 = AsiAddDataToSchema(Pool2, &v71, v83, v74);
                  if ( v11 < 0 )
                    goto LABEL_85;
                  v67 = v77;
                  v73 = v71;
                }
                if ( !*(_DWORD *)(v60 + 20) )
                {
                  v11 = -1073741811;
                  goto LABEL_85;
                }
                v68 = (_DWORD *)((char *)Pool2 + *(unsigned int *)(v60 + 16));
                if ( v68[4] && (_DWORD)v79 )
                {
                  v68[2] = v74;
                  v68[1] = v67;
                  v11 = AsiAddDataToSchema(Pool2, &v71, v68, (unsigned int)(20 * *(_DWORD *)(v60 + 20)));
                  if ( v11 < 0 )
                    goto LABEL_85;
                  v85 = 0LL;
                  v86 = 0;
                  *(_DWORD *)(v60 + 16) = v73;
                  v87 = v77;
                  v88 = v74;
                  v11 = AsiAddDataToSchema(Pool2, &v71, &v85, 20LL);
                  if ( v11 < 0 )
                    goto LABEL_85;
                  ++*(_DWORD *)(v60 + 20);
                  AsiSortValueList(Pool2, v60);
                  v73 = v71;
                }
                else
                {
                  v68[1] = 0;
                  v69 = v74;
                  v68[2] = 0;
                  v68[3] = v67;
                  v68[4] = v69;
                  *(_DWORD *)(v60 + 20) = 1;
                }
              }
              v46 = v84;
              v54 = (unsigned int)((_DWORD)v78 + 1);
              LODWORD(v78) = v54;
              if ( (unsigned int)v54 >= *(_DWORD *)&v84[8 * v45 + 20] )
                goto LABEL_80;
            }
            v11 = -1073740670;
            goto LABEL_85;
          }
        }
        v44 = k + 1;
      }
      if ( v72 && !(unsigned int)AsiPopulateHashes(Pool2) )
      {
        v11 = -1073741823;
        goto LABEL_85;
      }
      v11 = ApiSetValidateSchemaFormat((__int64)Pool2, v34);
      if ( v11 < 0 )
      {
LABEL_85:
        v70 = Pool2;
      }
      else
      {
        v70 = v4;
        *a1 = Pool2;
        *a2 = v34;
      }
      ExFreePoolWithTag(v70, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v11;
  }
  while ( 1 )
  {
    v13 = (char *)a3 + (unsigned int)a3[4];
    if ( (*(_DWORD *)&v13[24 * v12] & 4) == 0 )
      break;
    ++v8;
    v14 = *(_DWORD *)&v13[24 * v12 + 8] + 3;
    v72 = v8;
    v10 += v14 & 0xFFFFFFFC;
LABEL_33:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= a3[3] )
      goto LABEL_34;
  }
  v15 = 0LL;
  v16 = 0;
  v74 = 0;
  if ( !*(_DWORD *)&v13[24 * v12 + 20] )
  {
LABEL_32:
    v8 = v72;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v17 = 5 * v15;
    v18 = (char *)a3 + *(unsigned int *)&v13[24 * v12 + 16];
    v79 = 5 * v15;
    v78 = v18;
    v19 = *(unsigned int *)&v18[20 * v15 + 12];
    v20 = *(unsigned int *)&v18[20 * v15 + 16];
    v21 = (const WCHAR *)((char *)a3 + v19);
    v22 = (_WORD *)((char *)v21 + v20);
    do
    {
      if ( (unsigned int)v20 <= 1 )
        break;
      LODWORD(v20) = v20 - 2;
      --v22;
    }
    while ( *v22 != 45 );
    v23 = (unsigned __int16)v20 >> 1;
    if ( !v23 )
      break;
    k = *(_DWORD *)&v18[4 * v17 + 4];
    v24 = (_DWORD *)ApiSetpSearchForApiSet(v4, v21, v23);
    if ( v24 )
    {
      if ( (*v24 & 1) == 0 )
      {
        if ( !v16 )
        {
          v16 = 1;
          v10 += (*(_DWORD *)&v13[24 * v12 + 8] + 3) & 0xFFFFFFFC;
        }
        v25 = v24[5];
        if ( !v25 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)((char *)v4 + (unsigned int)v24[4] + 16) && k )
          v10 += 20 * v25 + 20;
      }
    }
    else
    {
      ++v72;
      v10 += ((*(_DWORD *)&v78[4 * v79 + 16] + 3) & 0xFFFFFFFC) + 20;
      if ( !v16 )
      {
        v16 = 1;
        v10 += (*(_DWORD *)&v13[24 * v12 + 8] + 3) & 0xFFFFFFFC;
      }
    }
    v15 = v74 + 1;
    v74 = v15;
    if ( (unsigned int)v15 >= *(_DWORD *)&v13[24 * v12 + 20] )
      goto LABEL_32;
  }
  return (unsigned int)-1073740670;
}
