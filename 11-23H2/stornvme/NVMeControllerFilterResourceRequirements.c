/*
 * XREFs of NVMeControllerFilterResourceRequirements @ 0x1C000CE8C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00036A0 (NVMeHwAdapterControl.c)
 * Callees:
 *     memmove @ 0x1C0004A40 (memmove.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     GetProcessorGroupInformation @ 0x1C0009E70 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C000A000 (GetProcessorInformation.c)
 *     IsPci3MsiInterrupt @ 0x1C000C274 (IsPci3MsiInterrupt.c)
 */

void *__fastcall NVMeControllerFilterResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v4; // r14d
  char v5; // r12
  __int16 v6; // si
  void *result; // rax
  char ProcessorInformation; // al
  __int64 v9; // r10
  __int64 v10; // rbx
  unsigned int v11; // r11d
  unsigned int v12; // r15d
  _BYTE *v13; // rdx
  unsigned int v14; // r15d
  _BYTE *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r8
  int v18; // r8d
  int v19; // r14d
  unsigned int v20; // edx
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // r10
  __int64 v25; // r11
  __int16 v26; // ax
  unsigned int v27; // r10d
  int v28; // edx
  __int64 v29; // r8
  char v30; // r9
  __int64 v31; // r11
  unsigned int v32; // r8d
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // r8d
  __int64 v37; // r9
  __int64 v38; // rax
  const void *v39; // rdx
  int v40; // edx
  _OWORD *v41; // rcx
  unsigned int v42; // r9d
  unsigned int v43; // r10d
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // r12d
  unsigned int v47; // esi
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned int v50; // r8d
  int v51; // r9d
  __int64 v52; // r14
  __int64 v53; // r15
  int v54; // r8d
  int v55; // r13d
  int v56; // eax
  unsigned int v57; // r15d
  unsigned int v58; // ecx
  unsigned int v59; // r12d
  __int64 v60; // r14
  __int64 v61; // r15
  int v62; // r8d
  int v63; // r13d
  int v64; // eax
  int v65; // r14d
  unsigned int v66; // r12d
  __int64 v67; // r15
  __int64 v68; // r13
  int v69; // eax
  unsigned int v70; // ecx
  unsigned int v71; // eax
  unsigned int v72; // edx
  unsigned int v73; // [rsp+40h] [rbp-30h]
  unsigned int v74; // [rsp+44h] [rbp-2Ch]
  unsigned int v75; // [rsp+48h] [rbp-28h]
  unsigned int v76; // [rsp+4Ch] [rbp-24h]
  int v77; // [rsp+4Ch] [rbp-24h]
  unsigned int v78; // [rsp+50h] [rbp-20h]
  int v80; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v81; // [rsp+C8h] [rbp+58h]

  v2 = a2;
  v76 = 0;
  v4 = 0;
  v78 = 0;
  v5 = 1;
  v6 = 4;
  if ( !GetProcessorGroupInformation(a1) )
  {
    *(_DWORD *)(a1 + 36) = 9;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL);
  }
  ProcessorInformation = GetProcessorInformation(a1);
  LODWORD(v9) = 0;
  if ( !ProcessorInformation )
  {
    *(_DWORD *)(a1 + 36) = 10;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL);
  }
  v10 = *(_QWORD *)(v2 + 8);
  v11 = *(_DWORD *)(v10 + 36);
  v81 = v11;
  v12 = v11;
  if ( v11 )
  {
    v13 = (_BYTE *)(v10 + 41);
    v14 = 0;
    do
    {
      if ( IsPci3MsiInterrupt((__int64)(v13 - 1)) )
      {
        ++v4;
      }
      else if ( *v15 == 1 && (v15[3] & 1) != 0 )
      {
        ++v14;
      }
      v13 = v15 + 32;
    }
    while ( v16 != 1 );
    v78 = v14;
    v12 = v11;
  }
  v17 = *(unsigned __int16 *)(a1 + 242);
  if ( v4 <= (int)v17 + 1 )
  {
    if ( g_HeteroSystem == (_BYTE)v9 )
      goto LABEL_50;
    if ( v4 <= 1 )
      goto LABEL_50;
    if ( v4 >= (unsigned int)v17 )
      goto LABEL_50;
    v73 = v9;
    v80 = v9;
    v74 = v9;
    v75 = v9;
    v45 = StorPortExtendedFunction(0LL, a1, v17);
    LODWORD(v9) = 0;
    if ( v45 )
      goto LABEL_50;
    v46 = *(_DWORD *)(a1 + 308);
    v47 = 0;
    if ( v46 >= v4 )
      v46 = v4 >> 1;
    if ( v4 > 2 && *(_DWORD *)(v10 + 36) )
    {
      while ( 1 )
      {
        v48 = 32LL * v47++ + v10 + 40;
        if ( IsPci3MsiInterrupt(v48) )
          break;
        if ( v47 >= v50 )
          goto LABEL_78;
      }
      *(_DWORD *)(v10 + v49 + 48) = v51;
      *(_WORD *)(v10 + v49 + 44) |= 4u;
      *(_DWORD *)(v10 + v49 + 52) = v51;
      *(_DWORD *)(v10 + v49 + 56) = v9;
      *(_DWORD *)(v10 + v49 + 60) = 3;
      *(_QWORD *)(v10 + v49 + 64) = v9;
    }
LABEL_78:
    v52 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL);
    while ( 1 )
    {
      v58 = *(_DWORD *)(v10 + 36);
      if ( v47 >= v58 || !v46 )
        break;
      v53 = 32LL * v47;
      if ( IsPci3MsiInterrupt(v53 + v10 + 40) )
      {
        while ( v52 )
        {
          while ( 1 )
          {
            v55 = v54;
            if ( ((1LL << v54) & v52) != 0 )
              break;
            ++v54;
          }
          LOWORD(v80) = v76;
          BYTE2(v80) = v54;
          v56 = StorPortExtendedFunction(56LL, a1, &v80);
          LODWORD(v9) = 0;
          if ( v56 )
            goto LABEL_49;
          v52 &= ~(1LL << v55);
          v54 = v55 + 1;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 272) + 72LL * v73 + 4) )
          {
            ++v74;
            *(_DWORD *)(v10 + v53 + 48) = -2;
            *(_WORD *)(v10 + v53 + 44) |= 4u;
            *(_DWORD *)(v10 + v53 + 52) = -2;
            *(_WORD *)(v10 + v53 + 58) = v76;
            *(_WORD *)(v10 + v53 + 56) = 4;
            *(_QWORD *)(v10 + v53 + 64) = 1LL << v55;
            *(_DWORD *)(v10 + v53 + 60) = 3;
            *(_BYTE *)v73 = 1;
            v52 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v73 + 24);
            if ( !--v46 || v52 )
              goto LABEL_92;
            break;
          }
        }
        v57 = v76;
        if ( v76 >= (unsigned int)*(unsigned __int16 *)(a1 + 240) - 1 )
          goto LABEL_49;
        ++v76;
        v52 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 16LL * (v57 + 1) + 8);
      }
LABEL_92:
      ++v47;
    }
    v77 = 1;
    v59 = v9;
    v60 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL);
    if ( v47 < v58 )
    {
      do
      {
        v61 = 32LL * v47;
        if ( IsPci3MsiInterrupt(v61 + v10 + 40) )
        {
          while ( v60 )
          {
            while ( 1 )
            {
              v63 = v62;
              if ( ((1LL << v62) & v60) != 0 )
                break;
              ++v62;
            }
            LOWORD(v80) = v59;
            BYTE2(v80) = v62;
            v64 = StorPortExtendedFunction(56LL, a1, &v80);
            LODWORD(v9) = 0;
            if ( v64 )
              goto LABEL_49;
            v60 &= ~(1LL << v63);
            v62 = v63 + 1;
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 272) + 72LL * v73 + 4) == 1 )
            {
              ++v75;
              *(_WORD *)(v10 + v61 + 44) |= 4u;
              *(_DWORD *)(v10 + v61 + 48) = -2;
              *(_DWORD *)(v10 + v61 + 52) = -2;
              *(_WORD *)(v10 + v61 + 56) = 4;
              *(_QWORD *)(v10 + v61 + 64) = 1LL << v63;
              *(_WORD *)(v10 + v61 + 58) = v59;
              *(_DWORD *)(v10 + v61 + 60) = 3;
              *(_BYTE *)v73 = 1;
              v60 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v73 + 24);
              if ( v60 )
                goto LABEL_106;
              break;
            }
          }
          if ( v59 >= (unsigned int)*(unsigned __int16 *)(a1 + 240) - 1 )
            break;
          v60 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 16LL * ++v59 + 8);
        }
LABEL_106:
        ++v47;
      }
      while ( v47 < *(_DWORD *)(v10 + 36) );
    }
    v65 = v9;
    v66 = v9;
    v67 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL);
    while ( v47 < *(_DWORD *)(v10 + 36) )
    {
      v68 = 32LL * v47;
      if ( IsPci3MsiInterrupt(v68 + v10 + 40) )
      {
        while ( 1 )
        {
          if ( !v67 )
          {
            v72 = v75;
            v70 = v74;
            goto LABEL_124;
          }
          while ( ((1LL << v65) & v67) == 0 )
            ++v65;
          LOWORD(v80) = v66;
          BYTE2(v80) = v65;
          v69 = StorPortExtendedFunction(56LL, a1, &v80);
          LODWORD(v9) = 0;
          if ( v69 )
            goto LABEL_49;
          v67 &= ~(1LL << v65);
          if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 272) + 72LL * v73 + 4) == v77 && !*(_BYTE *)v73 )
            break;
          ++v65;
        }
        *(_WORD *)(v10 + v68 + 58) = v66;
        *(_WORD *)(v10 + v68 + 44) |= 4u;
        *(_DWORD *)(v10 + v68 + 48) = -2;
        *(_DWORD *)(v10 + v68 + 52) = -2;
        *(_WORD *)(v10 + v68 + 56) = 4;
        *(_QWORD *)(v10 + v68 + 64) = 1LL << v65;
        *(_DWORD *)(v10 + v68 + 60) = 3;
        *(_BYTE *)v73 = 1;
        v70 = v74;
        v67 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v73 + 24);
        ++v65;
        if ( v77 != 1 )
          v70 = v74 + 1;
        v71 = v75 + 1;
        if ( v77 != 1 )
          v71 = v75;
        v74 = v70;
        v75 = v71;
        v72 = v71;
        if ( v67 )
          goto LABEL_132;
LABEL_124:
        if ( v66 >= (unsigned int)*(unsigned __int16 *)(a1 + 240) - 1 )
        {
          if ( v47 >= *(_DWORD *)(v10 + 36) - 1 )
            goto LABEL_132;
          if ( v72 >= *(_DWORD *)(a1 + 320) )
          {
            if ( v70 >= *(_DWORD *)(a1 + 316) )
              break;
            v77 = v9;
          }
          v66 = v9;
          v67 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL);
        }
        else
        {
          v67 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 16LL * ++v66 + 8);
        }
        v65 = v9;
      }
LABEL_132:
      ++v47;
    }
  }
  else
  {
    v18 = v17 - v4;
    v19 = 0;
    v81 = v18 + v12 + 1;
    v20 = 0;
    if ( v11 )
    {
      do
      {
        if ( !IsPci3MsiInterrupt(32LL * v20 + v10 + 40) )
          goto LABEL_30;
        if ( v23 )
        {
          while ( ((1LL << v24) & v23) == 0 )
            ++v24;
        }
        if ( g_HeteroSystem )
        {
          if ( v5 )
          {
            v6 = 0;
            v5 = 0;
LABEL_24:
            v25 = 0LL;
            goto LABEL_25;
          }
          v6 = 4;
        }
        else if ( v6 != 4 )
        {
          goto LABEL_24;
        }
        v25 = 1LL << v24;
LABEL_25:
        *(_WORD *)(v22 + v10 + 44) |= 4u;
        v26 = v19;
        *(_DWORD *)(v22 + v10 + 48) = -2;
        if ( v6 != 4 )
          v26 = 0;
        *(_DWORD *)(v22 + v10 + 52) = -2;
        *(_WORD *)(v22 + v10 + 58) = v26;
        *(_WORD *)(v22 + v10 + 56) = v6;
        *(_DWORD *)(v22 + v10 + 60) = 3;
        *(_QWORD *)(v22 + v10 + 64) = v25;
        if ( (v23 & ~(1LL << v24)) == 0 )
        {
          if ( v19 == *(unsigned __int16 *)(a1 + 240) - 1 )
          {
            v20 = v21 + 1;
            break;
          }
          ++v19;
        }
LABEL_30:
        v20 = v21 + 1;
      }
      while ( v20 < *(_DWORD *)(v10 + 36) );
    }
    v27 = *(_DWORD *)(v10 + 36);
    while ( 1 )
    {
      if ( v20 >= v27 )
      {
        LODWORD(v9) = 0;
        goto LABEL_41;
      }
      if ( IsPci3MsiInterrupt(32LL * v20 + v10 + 40) )
        break;
      v20 = v28 + 1;
    }
    LODWORD(v9) = 0;
    if ( v31 )
    {
      while ( ((1LL << v30) & v31) == 0 )
        ++v30;
    }
    *(_DWORD *)(v10 + v29 + 48) = -2;
    *(_WORD *)(v10 + v29 + 44) |= 4u;
    *(_DWORD *)(v10 + v29 + 56) = 4;
    *(_QWORD *)(v10 + v29 + 64) = 1LL << v30;
    v20 = v28 + 1;
    *(_DWORD *)(v10 + v29 + 52) = -2;
    *(_DWORD *)(v10 + v29 + 60) = 3;
LABEL_41:
    v32 = *(_DWORD *)(v10 + 36);
    while ( v20 < v32 )
    {
      if ( IsPci3MsiInterrupt(32LL * v20 + v10 + 40) )
      {
        if ( v33 < v32 )
        {
          do
          {
            if ( !IsPci3MsiInterrupt(32LL * v33 + v10 + 40) && v40 != v43 )
            {
              v44 = 32LL * v43;
              *(_OWORD *)(v44 + v10 + 40) = *v41;
              *(_OWORD *)(v44 + v10 + 56) = v41[1];
              v42 = *(_DWORD *)(v10 + 36);
            }
            v33 = v40 + 1;
          }
          while ( v33 < v42 );
          LODWORD(v9) = 0;
        }
        break;
      }
      v20 = v33 + 1;
    }
  }
LABEL_49:
  v12 = v81;
  v2 = a2;
LABEL_50:
  if ( v78 > (unsigned int)v9 )
  {
    v34 = *(_DWORD *)(v10 + 36);
    v35 = v9;
    v36 = v9;
    if ( v34 )
    {
      do
      {
        v37 = 32LL * v36;
        if ( *(_BYTE *)(v37 + v10 + 41) != 1 || (*(_BYTE *)(v37 + v10 + 44) & 1) == 0 )
        {
          if ( v36 != v35 )
          {
            v38 = 32LL * v35;
            *(_OWORD *)(v38 + v10 + 40) = *(_OWORD *)(v37 + v10 + 40);
            *(_OWORD *)(v38 + v10 + 56) = *(_OWORD *)(v37 + v10 + 56);
            v34 = *(_DWORD *)(v10 + 36);
          }
          ++v35;
        }
        ++v36;
      }
      while ( v36 < v34 );
    }
    v12 += v35 - v36;
  }
  v39 = (const void *)(32LL * *(unsigned int *)(v10 + 36) + v10 + 40);
  memmove((void *)(32LL * v12 + v10 + 40), v39, (unsigned int)*(_QWORD *)(v2 + 8) + **(_DWORD **)(v2 + 8) - (_DWORD)v39);
  result = NVMeZeroMemory(
             (void *)(*(_QWORD *)(v2 + 8) + **(unsigned int **)(v2 + 8) - 32LL * (*(_DWORD *)(v10 + 36) - v12)),
             32 * (*(_DWORD *)(v10 + 36) - v12));
  *(_DWORD *)(v10 + 36) = v12;
  return result;
}
