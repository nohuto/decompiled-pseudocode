/*
 * XREFs of PnpiAddSidebandResources @ 0x1C00B29B4
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C00977CC (PnpBiosUpdateResourceListWithSidebandResources.c)
 * Callees:
 *     memcmp @ 0x1C002FC00 (memcmp.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     PnpiValidateSidebandResources @ 0x1C00B3768 (PnpiValidateSidebandResources.c)
 */

__int64 __fastcall PnpiAddSidebandResources(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  unsigned int *v7; // r12
  unsigned int v8; // r9d
  unsigned int *v9; // r15
  __int64 v10; // r11
  unsigned int v11; // ebp
  __int64 v12; // rsi
  unsigned int v13; // edi
  int v14; // r13d
  unsigned int *v16; // r8
  __int64 v17; // r14
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edi
  __int64 v21; // xmm0_8
  unsigned int v22; // eax
  unsigned int v23; // r9d
  unsigned int v24; // edx
  __int64 v25; // rcx
  BOOL v26; // ecx
  _DWORD *v27; // rdx
  char v28; // r8
  _WORD *v29; // r13
  unsigned int v30; // ebp
  unsigned int v31; // r12d
  bool v32; // r15
  unsigned int v33; // ecx
  unsigned int v34; // edi
  __int64 v35; // rsi
  unsigned int v36; // eax
  __int64 v37; // r15
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // r8
  unsigned int v41; // ebp
  unsigned int v42; // r13d
  unsigned int v43; // eax
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rax
  char v47; // [rsp+20h] [rbp-88h]
  unsigned int v48; // [rsp+24h] [rbp-84h]
  unsigned int v49; // [rsp+28h] [rbp-80h]
  unsigned int v50; // [rsp+2Ch] [rbp-7Ch]
  int v51; // [rsp+30h] [rbp-78h]
  int v52; // [rsp+34h] [rbp-74h]
  unsigned int v53; // [rsp+38h] [rbp-70h]
  unsigned int v54; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v55; // [rsp+40h] [rbp-68h]
  _WORD *v56; // [rsp+48h] [rbp-60h]
  _DWORD *v57; // [rsp+50h] [rbp-58h]
  unsigned int v58; // [rsp+58h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp+10h]

  v60 = a2;
  v6 = 0;
  v7 = a4;
  v8 = *a4;
  v9 = a3;
  v54 = 0;
  v10 = a1;
  v48 = v8;
  v11 = 0;
  v51 = 0;
  v12 = 0LL;
  v52 = 0;
  v13 = 0;
  v14 = 0;
  if ( a1 )
  {
    if ( !(unsigned __int8)PnpiValidateSidebandResources() )
      return 3221225524LL;
    v10 = a1;
    a2 = v60;
    v8 = v48;
  }
  v16 = a6;
  if ( a6 )
  {
    v50 = *a6;
    if ( *a6 >= 0x28 )
    {
      v50 = *a6;
      *(_OWORD *)a5 = 0LL;
      *(_OWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 32) = 0LL;
    }
  }
  else
  {
    v50 = 0;
  }
  v17 = a2 + 32;
  v18 = 8;
  v19 = 0;
  v49 = 8;
  v55 = 0;
  if ( *(_DWORD *)(a2 + 28) )
  {
    while ( 1 )
    {
      if ( v19 )
      {
        v22 = *(_DWORD *)(v17 + 4);
        v17 += 40LL;
        if ( v22 > 1 )
          v17 += 32LL * (v22 - 1);
      }
      else
      {
        v20 = v13 + 72;
        if ( v8 >= v20 )
        {
          if ( v10 )
          {
            *(_OWORD *)((char *)v9 + v12) = *(_OWORD *)v10;
            *(_OWORD *)((char *)v9 + v12 + 16) = *(_OWORD *)(v10 + 16);
            *(_OWORD *)((char *)v9 + v12 + 32) = *(_OWORD *)(v10 + 32);
            *(_OWORD *)((char *)v9 + v12 + 48) = *(_OWORD *)(v10 + 48);
            v21 = *(_QWORD *)(v10 + 64);
          }
          else
          {
            *(_OWORD *)((char *)v9 + v12) = *(_OWORD *)a2;
            *(_OWORD *)((char *)v9 + v12 + 16) = *(_OWORD *)(a2 + 16);
            *(_OWORD *)((char *)v9 + v12 + 32) = *(_OWORD *)(a2 + 32);
            *(_OWORD *)((char *)v9 + v12 + 48) = *(_OWORD *)(a2 + 48);
            v21 = *(_QWORD *)(a2 + 64);
          }
          *(_QWORD *)((char *)v9 + v12 + 64) = v21;
          v9[7] = 0;
        }
        v13 = v20 - 40;
        v12 += 32LL;
      }
      v23 = *(_DWORD *)(v17 + 4);
      v24 = 0;
      if ( v23 )
        break;
LABEL_25:
      if ( (unsigned int)++v52 <= 1 )
        goto LABEL_35;
      v8 = v48;
LABEL_27:
      a2 = v60;
      v19 = v55 + 1;
      v10 = a1;
      v55 = v19;
      if ( v19 >= *(_DWORD *)(v60 + 28) )
      {
        v18 = v49;
        v16 = a6;
        v7 = a4;
        v14 = v51;
        goto LABEL_29;
      }
    }
    while ( 1 )
    {
      v25 = 32LL * v24;
      if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
        && *(_BYTE *)(v25 + v17 + 9) != 2 )
      {
        break;
      }
      if ( *(_DWORD *)(v25 + v17 + 16) == *(_DWORD *)(v25 + v17 + 20) )
        break;
      if ( ++v24 >= v23 )
        goto LABEL_25;
    }
LABEL_35:
    v26 = 1;
    if ( v10 )
    {
      v27 = (_DWORD *)(v10 + 32);
      v57 = (_DWORD *)(v10 + 32);
      v26 = *(_DWORD *)(v10 + 28) != 0;
    }
    else
    {
      v27 = 0LL;
      v57 = 0LL;
    }
    v8 = v48;
    v58 = v26 + v11;
    v28 = 1;
    v47 = 1;
    if ( v11 < v26 + v11 )
    {
      while ( 1 )
      {
        v29 = (_WORD *)((char *)v9 + v12);
        v30 = 40;
        v56 = (_WORD *)((char *)v9 + v12);
        if ( v27 )
        {
          v31 = v27[1];
          v32 = 0;
          if ( v31 <= 1 )
            v32 = v31 == 0;
          else
            v30 = 32 * v31 + 8;
          if ( v8 >= v13 + v30 )
          {
            memmove(v29, v27, v30);
            v27 = v57;
            v28 = v47;
            v8 = v48;
            *((_DWORD *)v29 + 1) = 0;
            v31 = v57[1];
          }
          v33 = v30 - 32;
          v27 = (_DWORD *)((char *)v27 + v30);
          v57 = v27;
          if ( !v32 )
            v33 = v30;
        }
        else
        {
          if ( v8 >= v13 + 40 )
          {
            *v29 = *(_WORD *)v17;
            v29[1] = *(_WORD *)(v17 + 2);
            *((_DWORD *)v29 + 1) = 0;
          }
          v31 = 0;
          v33 = 8;
        }
        v34 = v33 + v13;
        v35 = v33 + v12;
        v53 = 0;
        v36 = 0;
        if ( *(_DWORD *)(v17 + 4) )
          break;
LABEL_71:
        v45 = v34 + 32;
        if ( v31 )
          v45 = v34;
        v13 = v45;
        v46 = v35 + 32;
        if ( v31 )
          v46 = v35;
        v12 = v46;
        if ( v8 >= v13 )
          *((_DWORD *)v29 + 1) = v31;
        v28 = 0;
        v9 = a3;
        v11 = v54 + 1;
        v47 = 0;
        v54 = v11;
        if ( v11 >= v58 )
          goto LABEL_27;
      }
      while ( 2 )
      {
        v37 = v17 + 32LL * v36;
        if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
          && *(_BYTE *)(v37 + 9) != 2
          || *(_DWORD *)(v37 + 16) == *(_DWORD *)(v37 + 20) )
        {
          v34 += 32;
          if ( v8 >= v34 )
          {
            v38 = 16LL * v31;
            *(_OWORD *)&v29[v38 + 4] = *(_OWORD *)(v37 + 8);
            *(_OWORD *)&v29[v38 + 12] = *(_OWORD *)(v37 + 24);
          }
          ++v51;
          ++v31;
          v35 += 32LL;
          if ( v28 )
          {
            v39 = v50;
            if ( v50 < 0x28 )
            {
              v49 += 32;
            }
            else
            {
              v40 = a5;
              v41 = 0;
              v42 = *(_DWORD *)(a5 + 4);
              v43 = v42;
              if ( v42 )
              {
                while ( memcmp((const void *)(32LL * v41 + v40 + 8), (const void *)(v37 + 8), 0x20uLL) )
                {
                  v40 = a5;
                  ++v41;
                  v43 = v42;
                  if ( v41 >= v42 )
                  {
                    v39 = v50;
                    goto LABEL_64;
                  }
                }
LABEL_68:
                v29 = v56;
              }
              else
              {
LABEL_64:
                if ( v41 != v43 )
                  goto LABEL_68;
                v29 = v56;
                v49 += 32;
                if ( v39 >= v49 )
                {
                  v44 = 32LL * v41;
                  *(_OWORD *)(v44 + v40 + 8) = *(_OWORD *)(v37 + 8);
                  *(_OWORD *)(v44 + v40 + 24) = *(_OWORD *)(v37 + 24);
                  ++*(_DWORD *)(v40 + 4);
                }
              }
            }
          }
        }
        v28 = v47;
        v36 = v53 + 1;
        v8 = v48;
        v53 = v36;
        if ( v36 >= *(_DWORD *)(v17 + 4) )
        {
          v27 = v57;
          goto LABEL_71;
        }
        continue;
      }
    }
    goto LABEL_27;
  }
LABEL_29:
  if ( v16 )
  {
    if ( v18 < 0x28 )
      v18 = 40;
    *v16 = v18;
  }
  if ( v14 )
  {
    if ( v13 <= v8 )
    {
      *v9 = v13;
      v9[7] = v11;
    }
    else
    {
      *v7 = v13;
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v6;
}
