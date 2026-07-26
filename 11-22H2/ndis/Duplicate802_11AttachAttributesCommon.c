/*
 * XREFs of Duplicate802_11AttachAttributesCommon @ 0x1C00D1AA0
 * Callers:
 *     ?ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES@@@Z @ 0x1C006DB70 (-ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_.c)
 * Callees:
 *     NdisAllocateMemoryWithTag @ 0x1C0024BF0 (NdisAllocateMemoryWithTag.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     PrivateULongMult @ 0x1C00D2570 (PrivateULongMult.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributesCommon(
        unsigned __int16 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        size_t a6,
        int a7,
        size_t a8,
        _QWORD *a9)
{
  unsigned int v10; // r14d
  __int64 v11; // r13
  char v12; // al
  int v13; // r11d
  unsigned int v14; // r10d
  __int64 v15; // rcx
  UINT v16; // ebx
  unsigned int v17; // edi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // r11d
  __int64 v31; // rcx
  int v32; // r11d
  __int64 v33; // rcx
  unsigned int v34; // r11d
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // r11d
  int v38; // eax
  int v39; // eax
  __int64 v40; // r10
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // r15d
  __int64 v44; // rcx
  int v45; // eax
  _DWORD *v46; // r15
  _QWORD *v47; // rax
  __int128 v48; // xmm0
  unsigned int v49; // ecx
  __int64 v50; // rbx
  char *v51; // rcx
  unsigned int v52; // r12d
  _QWORD *v53; // r14
  unsigned int v54; // ecx
  char *v55; // rax
  __int64 v56; // rbx
  char *v57; // rax
  unsigned int v58; // ecx
  __int64 v59; // rbx
  char *v60; // rax
  unsigned int v61; // ecx
  __int64 v62; // rbx
  char *v63; // rax
  unsigned int v64; // ecx
  __int64 v65; // rbx
  char *v66; // rax
  unsigned int v67; // ecx
  __int64 v68; // rbx
  unsigned int v69; // ecx
  __int64 v70; // rbx
  __int64 v71; // rdx
  char v72; // al
  size_t v73; // rsi
  _BYTE *v74; // r14
  _BYTE *v75; // rbx
  __int64 v76; // r15
  _QWORD *v77; // rsi
  unsigned int v78; // ecx
  char *v79; // rax
  __int64 v80; // rbx
  char *v81; // rax
  unsigned int v82; // ecx
  __int64 v83; // rbx
  char *v84; // rax
  unsigned int v85; // ecx
  __int64 v86; // rbx
  __int64 v87; // rdx
  _QWORD *v88; // rsi
  unsigned int v89; // ecx
  char *v90; // rax
  __int64 v91; // rbx
  char *v92; // rax
  unsigned int v93; // ecx
  PVOID VirtualAddress; // [rsp+20h] [rbp-58h] BYREF
  NDIS_STATUS v96; // [rsp+28h] [rbp-50h] BYREF
  int v97; // [rsp+2Ch] [rbp-4Ch] BYREF
  unsigned int v98; // [rsp+30h] [rbp-48h]
  size_t v99; // [rsp+34h] [rbp-44h] BYREF
  size_t v100; // [rsp+3Ch] [rbp-3Ch] BYREF
  size_t v101; // [rsp+44h] [rbp-34h] BYREF
  _DWORD v102[3]; // [rsp+4Ch] [rbp-2Ch] BYREF
  __int64 v103; // [rsp+58h] [rbp-20h]
  __int64 v104; // [rsp+60h] [rbp-18h]
  _DWORD *v105; // [rsp+68h] [rbp-10h]
  size_t v107; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v108; // [rsp+D0h] [rbp+58h] BYREF
  int v109; // [rsp+D4h] [rbp+5Ch]
  size_t Size; // [rsp+D8h] [rbp+60h] BYREF

  v109 = HIDWORD(a3);
  LODWORD(Size) = 0;
  v10 = 0;
  v108 = 0;
  v11 = 0LL;
  LODWORD(v107) = 0;
  LODWORD(a6) = 0;
  v99 = 0LL;
  LODWORD(a8) = 0;
  v97 = 0;
  a5 = 0;
  v100 = 0LL;
  v101 = 0LL;
  v96 = 0;
  a7 = 0;
  memset(v102, 0, sizeof(v102));
  v104 = 0LL;
  v103 = 0LL;
  VirtualAddress = 0LL;
  if ( !a2 || !a9 || *(_BYTE *)a2 != 0xA1 )
    return (unsigned int)-1073741811;
  *a9 = 0LL;
  v12 = *((_BYTE *)a2 + 1);
  v13 = 40;
  if ( v12 == 1 )
  {
    if ( *((_WORD *)a2 + 1) < 0x28u )
      return (unsigned int)-1073741811;
    v14 = 1;
  }
  else if ( v12 == 2 )
  {
    if ( *((_WORD *)a2 + 1) < 0x38u )
      return (unsigned int)-1073741811;
    v14 = 2;
  }
  else
  {
    if ( v12 != 3 || *((_WORD *)a2 + 1) < 0x40u )
      return (unsigned int)-1073741811;
    v14 = 3;
  }
  v15 = *((unsigned int *)a2 + 5);
  v16 = 64;
  v98 = v14;
  if ( (_DWORD)v15 && *((_QWORD *)a2 + 3) )
  {
    v17 = PrivateULongMult(v15, 1092LL, &Size);
    if ( v17 )
      return v17;
    v16 = Size + 64;
    if ( (unsigned int)(Size + 64) < 0x40 )
      return (unsigned int)-1073676267;
  }
  v18 = *((_QWORD *)a2 + 4);
  if ( v18 )
  {
    v19 = *(unsigned int *)(v18 + 48);
    v10 = 160;
    if ( (_DWORD)v19 && *(_QWORD *)(v18 + 56) )
    {
      v17 = PrivateULongMult(v19, 3LL, &v108);
      if ( v17 )
        return v17;
      v10 = v108 + 160;
      if ( v108 >= 0xFFFFFF60 )
        return (unsigned int)-1073676267;
    }
    v20 = *(unsigned int *)(v18 + 64);
    if ( (_DWORD)v20 && *(_QWORD *)(v18 + 72) )
    {
      v17 = PrivateULongMult(v20, 8LL, &v107);
      if ( v17 )
        return v17;
      if ( v10 + (unsigned int)v107 < v10 )
        return (unsigned int)-1073676267;
      v10 += v107;
    }
    v21 = *(unsigned int *)(v18 + 80);
    if ( (_DWORD)v21 && *(_QWORD *)(v18 + 88) )
    {
      v17 = PrivateULongMult(v21, 8LL, &a6);
      if ( v17 )
        return v17;
      if ( v10 + (unsigned int)a6 < v10 )
        return (unsigned int)-1073676267;
      v10 += a6;
    }
    v22 = *(unsigned int *)(v18 + 96);
    if ( (_DWORD)v22 && *(_QWORD *)(v18 + 104) )
    {
      v17 = PrivateULongMult(v22, 8LL, &a8);
      if ( v17 )
        return v17;
      if ( v10 + (unsigned int)a8 < v10 )
        return (unsigned int)-1073676267;
      v10 += a8;
    }
    v23 = *(unsigned int *)(v18 + 112);
    if ( (_DWORD)v23 && *(_QWORD *)(v18 + 120) )
    {
      v17 = PrivateULongMult(v23, 8LL, &v97);
      if ( v17 )
        return v17;
      if ( v10 + v97 < v10 )
        return (unsigned int)-1073676267;
      v10 += v97;
    }
    if ( v14 >= 3 )
    {
      v24 = *(unsigned int *)(v18 + 140);
      if ( (_DWORD)v24 )
      {
        if ( *(_QWORD *)(v18 + 144) && *(_BYTE *)(v18 + 1) >= 3u )
        {
          v17 = PrivateULongMult(v24, 8LL, &v99);
          if ( v17 )
            return v17;
          if ( v10 + (unsigned int)v99 < v10 )
            return (unsigned int)-1073676267;
          v10 += v99;
        }
      }
    }
    if ( v10 + v16 < v16 )
      return (unsigned int)-1073676267;
    v16 += v10;
  }
  if ( v14 >= 2 )
  {
    v25 = *((_DWORD *)a2 + 1);
    v26 = *((_QWORD *)a2 + 5);
    v11 = *((_QWORD *)a2 + 6);
    *(_QWORD *)&v102[1] = v26;
    v104 = v11;
    v27 = v13 & v25;
    if ( v27 && !v11 || v11 && !v27 )
      return (unsigned int)-1073741811;
    if ( v26 )
    {
      v28 = *(unsigned int *)(v26 + 4);
      if ( (_DWORD)v28 )
      {
        v17 = PrivateULongMult(v28, 24LL, &v96);
        if ( v17 )
          return v17;
        v29 = v96;
      }
      else
      {
        v29 = 16;
      }
      v30 = v29 + 8;
      HIDWORD(v99) = v29 + 8;
      if ( v29 >= 0xFFFFFFF8 || v30 + v16 < v16 )
        return (unsigned int)-1073676267;
      v16 += v30;
    }
    if ( v11 )
    {
      v31 = *(unsigned int *)(v11 + 32);
      v32 = 80;
      a5 = 80;
      if ( (_DWORD)v31 && *(_QWORD *)(v11 + 40) )
      {
        v17 = PrivateULongMult(v31, 3LL, &v100);
        if ( v17 )
          return v17;
        v32 = v100 + 80;
        a5 = v100 + 80;
        if ( (unsigned int)v100 >= 0xFFFFFFB0 )
          return (unsigned int)-1073676267;
      }
      v33 = *(unsigned int *)(v11 + 48);
      if ( (_DWORD)v33 && *(_QWORD *)(v11 + 56) )
      {
        v17 = PrivateULongMult(v33, 8LL, (char *)&v100 + 4);
        if ( v17 )
          return v17;
        v35 = v34 + HIDWORD(v100);
        if ( v34 + HIDWORD(v100) < v34 )
          return (unsigned int)-1073676267;
        v32 = v34 + HIDWORD(v100);
        a5 = v35;
      }
      v36 = *(unsigned int *)(v11 + 64);
      if ( (_DWORD)v36 && *(_QWORD *)(v11 + 72) )
      {
        v17 = PrivateULongMult(v36, 8LL, &v101);
        if ( v17 )
          return v17;
        v38 = v37 + v101;
        if ( v37 + (unsigned int)v101 < v37 )
          return (unsigned int)-1073676267;
        v32 = v37 + v101;
        a5 = v38;
      }
      if ( v32 + v16 < v16 )
        return (unsigned int)-1073676267;
      v16 += v32;
    }
  }
  if ( v14 < 3 )
    goto LABEL_98;
  v39 = *((_DWORD *)a2 + 1);
  v40 = *((_QWORD *)a2 + 7);
  v103 = v40;
  v41 = v39 & 0x70;
  if ( v41 && !v40 )
    return (unsigned int)-1073741811;
  if ( !v40 )
    goto LABEL_98;
  if ( !v41 )
    return (unsigned int)-1073741811;
  v42 = *(unsigned int *)(v40 + 48);
  v43 = 72;
  a7 = 72;
  if ( (_DWORD)v42 && *(_QWORD *)(v40 + 56) )
  {
    v17 = PrivateULongMult(v42, 3LL, (char *)&v101 + 4);
    if ( v17 )
      return v17;
    v43 = HIDWORD(v101) + 72;
    a7 = HIDWORD(v101) + 72;
    if ( HIDWORD(v101) >= 0xFFFFFFB8 )
      return (unsigned int)-1073676267;
  }
  v44 = *(unsigned int *)(v40 + 32);
  if ( (_DWORD)v44 && *(_QWORD *)(v40 + 40) )
  {
    v17 = PrivateULongMult(v44, 6LL, v102);
    if ( v17 )
      return v17;
    v45 = v43 + v102[0];
    if ( v43 + v102[0] < v43 )
      return (unsigned int)-1073676267;
    v43 += v102[0];
    a7 = v45;
  }
  if ( v43 + v16 < v16 )
    return (unsigned int)-1073676267;
  v16 += v43;
LABEL_98:
  v96 = NdisAllocateMemoryWithTag(&VirtualAddress, v16, 0x6D61444Eu);
  v17 = v96;
  if ( v96 )
    return v17;
  memset(VirtualAddress, 0, v16);
  v46 = VirtualAddress;
  v47 = a9;
  v48 = *a2;
  v49 = Size;
  v105 = VirtualAddress;
  *(_OWORD *)VirtualAddress = v48;
  *v47 = v46;
  v46[4] = *((_DWORD *)a2 + 4);
  VirtualAddress = (char *)VirtualAddress + 64;
  *v46 = 4195233;
  if ( v49 && *((_DWORD *)a2 + 5) )
  {
    v50 = v49;
    *((_QWORD *)v46 + 3) = VirtualAddress;
    v46[5] = *((_DWORD *)a2 + 5);
    memmove(VirtualAddress, *((const void **)a2 + 3), v49);
    v51 = (char *)VirtualAddress + v50;
    VirtualAddress = (char *)VirtualAddress + v50;
    v52 = 0;
  }
  else
  {
    v52 = 0;
    *((_QWORD *)v46 + 3) = 0LL;
    v46[5] = 0;
    v51 = (char *)VirtualAddress;
  }
  if ( !v10 || !v18 )
    goto LABEL_135;
  *((_QWORD *)v46 + 4) = v51;
  v53 = VirtualAddress;
  *(_OWORD *)v51 = *(_OWORD *)v18;
  *((_OWORD *)v51 + 1) = *(_OWORD *)(v18 + 16);
  *((_OWORD *)v51 + 2) = *(_OWORD *)(v18 + 32);
  v54 = v108;
  v55 = (char *)VirtualAddress + 160;
  VirtualAddress = (char *)VirtualAddress + 160;
  if ( !v108 )
    goto LABEL_108;
  if ( *(_DWORD *)(v18 + 48) )
  {
    v53[7] = v55;
    v56 = v54;
    *((_DWORD *)v53 + 12) = *(_DWORD *)(v18 + 48);
    memmove(VirtualAddress, *(const void **)(v18 + 56), v54);
    v57 = (char *)VirtualAddress + v56;
    VirtualAddress = (char *)VirtualAddress + v56;
  }
  else
  {
LABEL_108:
    v53[7] = 0LL;
    *((_DWORD *)v53 + 12) = 0;
    v57 = (char *)VirtualAddress;
  }
  v58 = v107;
  if ( (_DWORD)v107 && *(_DWORD *)(v18 + 64) )
  {
    v53[9] = v57;
    v59 = v58;
    *((_DWORD *)v53 + 16) = *(_DWORD *)(v18 + 64);
    memmove(VirtualAddress, *(const void **)(v18 + 72), v58);
    v60 = (char *)VirtualAddress + v59;
    VirtualAddress = (char *)VirtualAddress + v59;
  }
  else
  {
    v53[9] = 0LL;
    *((_DWORD *)v53 + 16) = 0;
    v60 = (char *)VirtualAddress;
  }
  v61 = a6;
  if ( (_DWORD)a6 && *(_DWORD *)(v18 + 80) )
  {
    v53[11] = v60;
    v62 = v61;
    *((_DWORD *)v53 + 20) = *(_DWORD *)(v18 + 80);
    memmove(VirtualAddress, *(const void **)(v18 + 88), v61);
    v63 = (char *)VirtualAddress + v62;
    VirtualAddress = (char *)VirtualAddress + v62;
  }
  else
  {
    v53[11] = 0LL;
    *((_DWORD *)v53 + 20) = 0;
    v63 = (char *)VirtualAddress;
  }
  v64 = a8;
  if ( (_DWORD)a8 && *(_DWORD *)(v18 + 96) )
  {
    v53[13] = v63;
    v65 = v64;
    *((_DWORD *)v53 + 24) = *(_DWORD *)(v18 + 96);
    memmove(VirtualAddress, *(const void **)(v18 + 104), v64);
    v66 = (char *)VirtualAddress + v65;
    VirtualAddress = (char *)VirtualAddress + v65;
  }
  else
  {
    v53[13] = 0LL;
    *((_DWORD *)v53 + 24) = 0;
    v66 = (char *)VirtualAddress;
  }
  v67 = v97;
  if ( v97 && *(_DWORD *)(v18 + 112) )
  {
    v53[15] = v66;
    v68 = v67;
    *((_DWORD *)v53 + 28) = *(_DWORD *)(v18 + 112);
    memmove(VirtualAddress, *(const void **)(v18 + 120), v67);
    v51 = (char *)VirtualAddress + v68;
    VirtualAddress = (char *)VirtualAddress + v68;
  }
  else
  {
    v53[15] = 0LL;
    *((_DWORD *)v53 + 28) = 0;
    v51 = (char *)VirtualAddress;
  }
  if ( v98 < 3 )
    goto LABEL_135;
  *(_BYTE *)(*((_QWORD *)v46 + 4) + 128LL) = *(_BYTE *)(v18 + 128);
  *(_DWORD *)(*((_QWORD *)v46 + 4) + 132LL) = *(_DWORD *)(v18 + 132);
  *(_BYTE *)(*((_QWORD *)v46 + 4) + 136LL) = *(_BYTE *)(v18 + 136);
  if ( *(_DWORD *)(v18 + 140) && *(_QWORD *)(v18 + 144) && *(_BYTE *)(v18 + 1) >= 3u )
  {
    v69 = v99;
    if ( (_DWORD)v99 )
    {
      v70 = (unsigned int)v99;
      v53[18] = VirtualAddress;
      *((_DWORD *)v53 + 35) = *(_DWORD *)(v18 + 140);
      memmove(VirtualAddress, *(const void **)(v18 + 144), v69);
      v51 = (char *)VirtualAddress + v70;
      VirtualAddress = (char *)VirtualAddress + v70;
      goto LABEL_133;
    }
    v53[18] = 0LL;
    *((_DWORD *)v53 + 35) = 0;
  }
  v51 = (char *)VirtualAddress;
LABEL_133:
  if ( *(_BYTE *)(v18 + 1) >= 4u )
  {
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 152LL) = *(_BYTE *)(v18 + 152);
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 153LL) = *(_BYTE *)(v18 + 153);
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 154LL) = *(_BYTE *)(v18 + 154);
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 155LL) = *(_BYTE *)(v18 + 155);
    *(_BYTE *)(*((_QWORD *)v46 + 4) + 156LL) = *(_BYTE *)(v18 + 156);
    v51 = (char *)VirtualAddress;
  }
LABEL_135:
  if ( HIDWORD(v99) )
  {
    v71 = *(_QWORD *)&v102[1];
    if ( *(_QWORD *)&v102[1] )
    {
      *((_QWORD *)v46 + 5) = v51;
      *(_QWORD *)v51 = *(_QWORD *)v71;
      if ( *(_DWORD *)(v71 + 4) )
      {
        v72 = *(_BYTE *)(v71 + 9);
        if ( v72 == 3 )
        {
          v73 = 24LL;
        }
        else if ( v72 == 2 )
        {
          v73 = 20LL;
        }
        else
        {
          v73 = 0LL;
          if ( v72 == 1 )
            v73 = 16LL;
        }
        v74 = (_BYTE *)(v71 + 8);
        v75 = (_BYTE *)(*((_QWORD *)v46 + 5) + 8LL);
        v76 = v71;
        do
        {
          memmove(v75, v74, v73);
          if ( a1 >= 0x61Eu )
            *((_DWORD *)v75 + 4) = 0;
          ++v52;
          *v75 = *v74;
          v74 += v73;
          v75[1] = 3;
          *((_WORD *)v75 + 1) = 24;
          v75 += 24;
        }
        while ( v52 < *(_DWORD *)(v76 + 4) );
        v17 = v96;
        v46 = v105;
        v11 = v104;
      }
      v51 = (char *)VirtualAddress + HIDWORD(v99);
      VirtualAddress = v51;
    }
  }
  if ( a5 && v11 )
  {
    *((_QWORD *)v46 + 6) = v51;
    v77 = VirtualAddress;
    *(_OWORD *)v51 = *(_OWORD *)v11;
    *((_OWORD *)v51 + 1) = *(_OWORD *)(v11 + 16);
    v78 = v100;
    v79 = (char *)VirtualAddress + 80;
    VirtualAddress = (char *)VirtualAddress + 80;
    if ( (_DWORD)v100 && *(_DWORD *)(v11 + 32) )
    {
      v77[5] = v79;
      v80 = v78;
      *((_DWORD *)v77 + 8) = *(_DWORD *)(v11 + 32);
      memmove(VirtualAddress, *(const void **)(v11 + 40), v78);
      v81 = (char *)VirtualAddress + v80;
      VirtualAddress = (char *)VirtualAddress + v80;
    }
    else
    {
      v77[5] = 0LL;
      *((_DWORD *)v77 + 8) = 0;
      v81 = (char *)VirtualAddress;
    }
    v82 = HIDWORD(v100);
    if ( HIDWORD(v100) && *(_DWORD *)(v11 + 48) )
    {
      v77[7] = v81;
      v83 = v82;
      *((_DWORD *)v77 + 12) = *(_DWORD *)(v11 + 48);
      memmove(VirtualAddress, *(const void **)(v11 + 56), v82);
      v84 = (char *)VirtualAddress + v83;
      VirtualAddress = (char *)VirtualAddress + v83;
    }
    else
    {
      v77[7] = 0LL;
      *((_DWORD *)v77 + 12) = 0;
      v84 = (char *)VirtualAddress;
    }
    v85 = v101;
    if ( (_DWORD)v101 && *(_DWORD *)(v11 + 64) )
    {
      v77[9] = v84;
      v86 = v85;
      *((_DWORD *)v77 + 16) = *(_DWORD *)(v11 + 64);
      memmove(VirtualAddress, *(const void **)(v11 + 72), v85);
      v51 = (char *)VirtualAddress + v86;
      VirtualAddress = (char *)VirtualAddress + v86;
    }
    else
    {
      v77[9] = 0LL;
      *((_DWORD *)v77 + 16) = 0;
      v51 = (char *)VirtualAddress;
    }
  }
  if ( a7 )
  {
    v87 = v103;
    if ( v103 )
    {
      *((_QWORD *)v46 + 7) = v51;
      v88 = VirtualAddress;
      *(_OWORD *)v51 = *(_OWORD *)v87;
      *((_OWORD *)v51 + 1) = *(_OWORD *)(v87 + 16);
      *((_OWORD *)v51 + 2) = *(_OWORD *)(v87 + 32);
      *((_OWORD *)v51 + 3) = *(_OWORD *)(v87 + 48);
      *((_QWORD *)v51 + 8) = *(_QWORD *)(v87 + 64);
      v89 = HIDWORD(v101);
      v90 = (char *)VirtualAddress + 72;
      VirtualAddress = (char *)VirtualAddress + 72;
      if ( HIDWORD(v101) && *(_DWORD *)(v87 + 48) )
      {
        v88[7] = v90;
        v91 = v89;
        *((_DWORD *)v88 + 12) = *(_DWORD *)(v87 + 48);
        memmove(VirtualAddress, *(const void **)(v87 + 56), v89);
        v87 = v103;
        v92 = (char *)VirtualAddress + v91;
        VirtualAddress = (char *)VirtualAddress + v91;
      }
      else
      {
        v88[7] = 0LL;
        *((_DWORD *)v88 + 12) = 0;
        v92 = (char *)VirtualAddress;
      }
      v93 = v102[0];
      if ( v102[0] && *(_DWORD *)(v87 + 32) )
      {
        v88[5] = v92;
        *((_DWORD *)v88 + 8) = *(_DWORD *)(v87 + 32);
        memmove(VirtualAddress, *(const void **)(v87 + 40), v93);
      }
      else
      {
        v88[5] = 0LL;
        *((_DWORD *)v88 + 8) = 0;
      }
    }
  }
  return v17;
}
