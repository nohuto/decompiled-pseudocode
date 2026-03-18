/*
 * XREFs of UsbhBuildVendorSpecificCompatibleIDs @ 0x1C0022B08
 * Callers:
 *     UsbhBuildClassCompatibleID @ 0x1C004EE18 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildDeviceCompatibleID @ 0x1C004F8A8 (UsbhBuildDeviceCompatibleID.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     memmove @ 0x1C0023580 (memmove.c)
 */

void *__fastcall UsbhBuildVendorSpecificCompatibleIDs(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  _DWORD *v8; // rax
  size_t v9; // rdx
  _DWORD *v10; // r13
  int v11; // r10d
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // r14
  unsigned int v14; // edi
  size_t v15; // rsi
  char *Pool2; // rax
  char *v17; // rbp
  char *v18; // rdx
  int v19; // r8d
  unsigned int v21; // esi
  char *v22; // rax
  char *v23; // rbx
  char *v24; // rax
  char *v25; // rax
  char *v26; // rdx
  unsigned int v27; // ebp
  char *v28; // rax
  char *v29; // rdi
  char *v30; // r8
  size_t v31; // rsi
  __int64 v32; // rbp
  char *v33; // rax
  char *v34; // rbx
  char *v35; // rcx
  unsigned int v36; // edi
  char *v37; // rax
  char *v38; // r14
  char *v39; // rdx
  unsigned int v40; // esi
  char *v41; // rax
  char *v42; // rbx
  char *v43; // rax
  char *v44; // rax
  char *v45; // rdx
  unsigned int v46; // ebp
  char *v47; // rax
  char *v48; // rdi
  char *v49; // r8
  unsigned int v50; // ebx
  char *v51; // rax
  char *v52; // r14
  char *v53; // rdx
  size_t v54; // rsi
  unsigned int v55; // edi
  void *v56; // rax
  void *v57; // rbx
  size_t v58; // rax
  void *v59; // rax
  size_t v60; // rdx
  unsigned __int16 v61; // [rsp+30h] [rbp-48h]
  unsigned __int16 v62; // [rsp+32h] [rbp-46h]
  unsigned __int16 v63; // [rsp+90h] [rbp+18h]

  v8 = PdoExt(a2);
  v9 = *a4;
  v10 = v8;
  v11 = v8[355];
  v62 = *((_WORD *)v8 + 704);
  v12 = 0;
  if ( (v11 & 0x20) != 0 )
  {
    v63 = 0;
    v13 = 0LL;
  }
  else
  {
    v13 = *((unsigned __int8 *)v10 + 2440);
    v63 = *((unsigned __int8 *)v10 + 2438);
    v12 = *((unsigned __int8 *)v10 + 2439);
  }
  v14 = v9 + 38;
  v61 = v12;
  v15 = v9;
  Pool2 = (char *)ExAllocatePool2(64LL, v9 + 38, 1112885333LL);
  v17 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a3, v15);
    v18 = &v17[v15];
    *(_OWORD *)v18 = *(_OWORD *)L"USB\\COMPAT_VID_nnnn";
    *((_OWORD *)v18 + 1) = *(_OWORD *)L"AT_VID_nnnn";
    *((_DWORD *)v18 + 8) = *(_DWORD *)L"nnn";
    *((_WORD *)v18 + 18) = aUsbCompatVidNn[18];
    while ( *(_WORD *)v18 != 110 )
      v18 += 2;
    *(_WORD *)v18 = (unsigned __int8)Nibble[(unsigned __int64)v62 >> 12];
    *((_WORD *)v18 + 1) = (unsigned __int8)Nibble[HIBYTE(v62) & 0xF];
    *((_WORD *)v18 + 2) = (unsigned __int8)Nibble[(unsigned __int8)v62 >> 4];
    *((_WORD *)v18 + 3) = (unsigned __int8)Nibble[v62 & 0xF];
  }
  else
  {
    v14 = 0;
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
  if ( !v17 )
  {
    v19 = 1667855921;
LABEL_14:
    Log(a1, 4096, v19, a2, -1073741670LL);
    return 0LL;
  }
  if ( (v10[355] & 0x20) != 0 )
  {
    v21 = v14 + 24;
    v22 = (char *)ExAllocatePool2(64LL, v14 + 24LL, 1112885333LL);
    v23 = v22;
    if ( v22 )
    {
      memmove(v22, v17, v14);
      v24 = &v23[v14];
      *(_OWORD *)v24 = *(_OWORD *)L"&DevClass_nn";
      *((_QWORD *)v24 + 2) = *(_QWORD *)L"s_nn";
      while ( *(_WORD *)v24 != 110 )
        v24 += 2;
      *(_DWORD *)v24 = 3145776;
      goto LABEL_27;
    }
LABEL_22:
    v21 = 0;
    goto LABEL_27;
  }
  v21 = v14 + 18;
  v25 = (char *)ExAllocatePool2(64LL, v14 + 18LL, 1112885333LL);
  v23 = v25;
  if ( !v25 )
    goto LABEL_22;
  memmove(v25, v17, v14);
  v26 = &v23[v14];
  *(_OWORD *)v26 = *(_OWORD *)L"&Class_nn";
  *((_WORD *)v26 + 8) = aClassNn[8];
  while ( *(_WORD *)v26 != 110 )
    v26 += 2;
  *(_WORD *)v26 = (unsigned __int8)Nibble[(unsigned __int64)v63 >> 4];
  *((_WORD *)v26 + 1) = (unsigned __int8)Nibble[v63 & 0xF];
LABEL_27:
  ExFreePoolWithTag(v17, 0);
  if ( !v23 )
  {
    v19 = 1667855922;
    goto LABEL_14;
  }
  v27 = v21 + 24;
  v28 = (char *)ExAllocatePool2(64LL, v21 + 24LL, 1112885333LL);
  v29 = v28;
  if ( v28 )
  {
    memmove(v28, v23, v21);
    v30 = &v29[v21];
    *(_OWORD *)v30 = *(_OWORD *)L"&SubClass_nn";
    *((_QWORD *)v30 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v30 != 110 )
      v30 += 2;
    *(_WORD *)v30 = (unsigned __int8)Nibble[(unsigned __int64)v61 >> 4];
    *((_WORD *)v30 + 1) = (unsigned __int8)Nibble[v61 & 0xF];
  }
  else
  {
    v27 = 0;
  }
  ExFreePoolWithTag(v23, 0);
  if ( !v29 )
  {
    v19 = 1667855923;
    goto LABEL_14;
  }
  v31 = v27;
  v32 = v27 + 18LL;
  v33 = (char *)ExAllocatePool2(64LL, v32, 1112885333LL);
  v34 = v33;
  if ( v33 )
  {
    memmove(v33, v29, v31);
    v35 = &v34[v31];
    *(_OWORD *)&v34[v31] = *(_OWORD *)L"&Prot_nn";
    while ( *(_WORD *)v35 != 110 )
      v35 += 2;
    *(_WORD *)v35 = (unsigned __int8)Nibble[v13 >> 4];
    *((_WORD *)v35 + 1) = (unsigned __int8)Nibble[v13 & 0xF];
  }
  else
  {
    LODWORD(v32) = 0;
  }
  ExFreePoolWithTag(v29, 0);
  if ( !v34 )
  {
    v19 = 1667855924;
    goto LABEL_14;
  }
  v36 = v32 + 38;
  v37 = (char *)ExAllocatePool2(64LL, (unsigned int)v32 + 38LL, 1112885333LL);
  v38 = v37;
  if ( v37 )
  {
    memmove(v37, v34, (unsigned int)v32);
    v39 = &v38[(unsigned int)v32];
    *(_OWORD *)v39 = *(_OWORD *)L"USB\\COMPAT_VID_nnnn";
    *((_OWORD *)v39 + 1) = *(_OWORD *)L"AT_VID_nnnn";
    *((_DWORD *)v39 + 8) = *(_DWORD *)L"nnn";
    *((_WORD *)v39 + 18) = aUsbCompatVidNn[18];
    while ( *(_WORD *)v39 != 110 )
      v39 += 2;
    *(_WORD *)v39 = (unsigned __int8)Nibble[(unsigned __int64)v62 >> 12];
    *((_WORD *)v39 + 1) = (unsigned __int8)Nibble[HIBYTE(v62) & 0xF];
    *((_WORD *)v39 + 2) = (unsigned __int8)Nibble[(unsigned __int8)v62 >> 4];
    *((_WORD *)v39 + 3) = (unsigned __int8)Nibble[v62 & 0xF];
  }
  else
  {
    v36 = 0;
  }
  ExFreePoolWithTag(v34, 0);
  if ( !v38 )
  {
    v19 = 1667855925;
    goto LABEL_14;
  }
  if ( (v10[355] & 0x20) != 0 )
  {
    v40 = v36 + 24;
    v41 = (char *)ExAllocatePool2(64LL, v36 + 24LL, 1112885333LL);
    v42 = v41;
    if ( v41 )
    {
      memmove(v41, v38, v36);
      v43 = &v42[v36];
      *(_OWORD *)v43 = *(_OWORD *)L"&DevClass_nn";
      *((_QWORD *)v43 + 2) = *(_QWORD *)L"s_nn";
      while ( *(_WORD *)v43 != 110 )
        v43 += 2;
      *(_DWORD *)v43 = 3145776;
      goto LABEL_65;
    }
LABEL_60:
    v40 = 0;
    goto LABEL_65;
  }
  v40 = v36 + 18;
  v44 = (char *)ExAllocatePool2(64LL, v36 + 18LL, 1112885333LL);
  v42 = v44;
  if ( !v44 )
    goto LABEL_60;
  memmove(v44, v38, v36);
  v45 = &v42[v36];
  *(_OWORD *)v45 = *(_OWORD *)L"&Class_nn";
  *((_WORD *)v45 + 8) = aClassNn[8];
  while ( *(_WORD *)v45 != 110 )
    v45 += 2;
  *(_WORD *)v45 = (unsigned __int8)Nibble[(unsigned __int64)v63 >> 4];
  *((_WORD *)v45 + 1) = (unsigned __int8)Nibble[v63 & 0xF];
LABEL_65:
  ExFreePoolWithTag(v38, 0);
  if ( !v42 )
  {
    v19 = 1667855926;
    goto LABEL_14;
  }
  v46 = v40 + 26;
  v47 = (char *)ExAllocatePool2(64LL, v40 + 26LL, 1112885333LL);
  v48 = v47;
  if ( v47 )
  {
    memmove(v47, v42, v40);
    v49 = &v48[v40];
    *(_OWORD *)v49 = *(_OWORD *)L"&SubClass_nn";
    *((_QWORD *)v49 + 2) = *(_QWORD *)L"s_nn";
    while ( *(_WORD *)v49 != 110 )
      v49 += 2;
    *(_WORD *)v49 = (unsigned __int8)Nibble[(unsigned __int64)v61 >> 4];
    *((_WORD *)v49 + 1) = (unsigned __int8)Nibble[v61 & 0xF];
  }
  else
  {
    v46 = 0;
  }
  ExFreePoolWithTag(v42, 0);
  if ( !v48 )
  {
    v19 = 1667855927;
    goto LABEL_14;
  }
  v50 = v46 + 38;
  v51 = (char *)ExAllocatePool2(64LL, v46 + 38LL, 1112885333LL);
  v52 = v51;
  if ( v51 )
  {
    memmove(v51, v48, v46);
    v53 = &v52[v46];
    *(_OWORD *)v53 = *(_OWORD *)L"USB\\COMPAT_VID_nnnn";
    *((_OWORD *)v53 + 1) = *(_OWORD *)L"AT_VID_nnnn";
    *((_DWORD *)v53 + 8) = *(_DWORD *)L"nnn";
    *((_WORD *)v53 + 18) = aUsbCompatVidNn[18];
    while ( *(_WORD *)v53 != 110 )
      v53 += 2;
    *(_WORD *)v53 = (unsigned __int8)Nibble[(unsigned __int64)v62 >> 12];
    *((_WORD *)v53 + 1) = (unsigned __int8)Nibble[HIBYTE(v62) & 0xF];
    *((_WORD *)v53 + 2) = (unsigned __int8)Nibble[(unsigned __int8)v62 >> 4];
    *((_WORD *)v53 + 3) = (unsigned __int8)Nibble[v62 & 0xF];
  }
  else
  {
    v50 = 0;
  }
  ExFreePoolWithTag(v48, 0);
  if ( !v52 )
  {
    v19 = 1667855928;
    goto LABEL_14;
  }
  v54 = v50;
  if ( (v10[355] & 0x20) != 0 )
  {
    v55 = v50 + 26;
    v56 = (void *)ExAllocatePool2(64LL, v50 + 26LL, 1112885333LL);
    v57 = v56;
    if ( v56 )
    {
      memmove(v56, v52, (unsigned int)v54);
      v58 = (size_t)v57 + v54;
      *(_OWORD *)v58 = *(_OWORD *)L"&DevClass_nn";
      *(_QWORD *)(v58 + 16) = *(_QWORD *)L"s_nn";
      while ( *(_WORD *)v58 != 110 )
        v58 += 2LL;
      *(_DWORD *)v58 = 3145776;
      goto LABEL_95;
    }
LABEL_90:
    v55 = 0;
    goto LABEL_95;
  }
  v55 = v50 + 20;
  v59 = (void *)ExAllocatePool2(64LL, v50 + 20LL, 1112885333LL);
  v57 = v59;
  if ( !v59 )
    goto LABEL_90;
  memmove(v59, v52, v54);
  v60 = (size_t)v57 + v54;
  *(_OWORD *)v60 = *(_OWORD *)L"&Class_nn";
  *(_WORD *)(v60 + 16) = aClassNn[8];
  while ( *(_WORD *)v60 != 110 )
    v60 += 2LL;
  *(_WORD *)v60 = (unsigned __int8)Nibble[(unsigned __int64)v63 >> 4];
  *(_WORD *)(v60 + 2) = (unsigned __int8)Nibble[v63 & 0xF];
LABEL_95:
  ExFreePoolWithTag(v52, 0);
  if ( !v57 )
  {
    v19 = 1667855929;
    goto LABEL_14;
  }
  *a4 = v55;
  return v57;
}
