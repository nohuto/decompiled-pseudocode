/*
 * XREFs of sub_1405660A0 @ 0x1405660A0
 * Callers:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_140294D90 @ 0x140294D90 (sub_140294D90.c)
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_14029B8E8 @ 0x14029B8E8 (sub_14029B8E8.c)
 *     sub_1402DA5B0 @ 0x1402DA5B0 (sub_1402DA5B0.c)
 *     sub_1402DA760 @ 0x1402DA760 (sub_1402DA760.c)
 *     sub_1402DA81C @ 0x1402DA81C (sub_1402DA81C.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14038D2E0 @ 0x14038D2E0 (sub_14038D2E0.c)
 *     sub_1403EB11C @ 0x1403EB11C (sub_1403EB11C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_1405434E0 @ 0x1405434E0 (sub_1405434E0.c)
 *     sub_140547AF4 @ 0x140547AF4 (sub_140547AF4.c)
 *     sub_140547EA8 @ 0x140547EA8 (sub_140547EA8.c)
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_140552D54 @ 0x140552D54 (sub_140552D54.c)
 *     sub_140552F34 @ 0x140552F34 (sub_140552F34.c)
 *     sub_140564FF8 @ 0x140564FF8 (sub_140564FF8.c)
 *     sub_1405655BC @ 0x1405655BC (sub_1405655BC.c)
 *     sub_1405672C0 @ 0x1405672C0 (sub_1405672C0.c)
 *     sub_1405674E0 @ 0x1405674E0 (sub_1405674E0.c)
 *     sub_140567544 @ 0x140567544 (sub_140567544.c)
 *     sub_140567588 @ 0x140567588 (sub_140567588.c)
 *     sub_1405675F4 @ 0x1405675F4 (sub_1405675F4.c)
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 *     sub_140567C08 @ 0x140567C08 (sub_140567C08.c)
 *     sub_140567F5C @ 0x140567F5C (sub_140567F5C.c)
 *     sub_140568024 @ 0x140568024 (sub_140568024.c)
 *     sub_140568220 @ 0x140568220 (sub_140568220.c)
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 *     sub_14057938C @ 0x14057938C (sub_14057938C.c)
 *     sub_1405909B0 @ 0x1405909B0 (sub_1405909B0.c)
 *     sub_140592348 @ 0x140592348 (sub_140592348.c)
 *     sub_14064331C @ 0x14064331C (sub_14064331C.c)
 *     sub_1406528CC @ 0x1406528CC (sub_1406528CC.c)
 *     sub_140652CAC @ 0x140652CAC (sub_140652CAC.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 */

__int64 __fastcall sub_1405660A0(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 v10; // r9
  signed __int32 v11; // eax
  signed __int32 v12; // edx
  signed __int32 v13; // ecx
  char v14; // r13
  char v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // edx
  signed __int32 v18; // ecx
  __int64 v19; // rcx
  char v20; // r13
  int v21; // ecx
  size_t v22; // r8
  __int64 v23; // rbx
  _OWORD *v24; // rcx
  __int64 v25; // rdx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  char v28; // r9
  __int64 v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  bool v32; // r14
  int v33; // edi
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // r15
  bool v37; // di
  int IsEmptyAffinity; // eax
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rbx
  bool v44; // cf
  int v45; // eax
  int v46; // eax
  __int64 v47; // rax
  __int64 *v48; // rcx
  unsigned __int64 v49; // rsi
  struct _KTHREAD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int8 v53; // cl
  __int64 v54; // r8
  __int64 v55; // rdx
  int v56; // ecx
  bool v57; // di
  unsigned int v58; // eax
  __int64 v59; // rcx
  _OWORD *v60; // rax
  _OWORD *v61; // rcx
  __int64 v62; // rdx
  __int128 v63; // xmm1
  unsigned int v64; // ebx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  int v70; // ecx
  char v72; // [rsp+41h] [rbp-BFh]
  _BYTE v73[2]; // [rsp+42h] [rbp-BEh] BYREF
  int v74; // [rsp+44h] [rbp-BCh]
  bool v75; // [rsp+48h] [rbp-B8h]
  bool v76; // [rsp+49h] [rbp-B7h]
  __int64 v77; // [rsp+50h] [rbp-B0h]
  char v78; // [rsp+58h] [rbp-A8h]
  bool v79; // [rsp+59h] [rbp-A7h]
  char v80; // [rsp+5Ah] [rbp-A6h]
  unsigned int v81; // [rsp+60h] [rbp-A0h] BYREF
  int v82; // [rsp+68h] [rbp-98h]
  __int64 v83; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v84; // [rsp+78h] [rbp-88h] BYREF
  __int64 v85; // [rsp+80h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v88)(); // [rsp+98h] [rbp-68h]
  int v89; // [rsp+A0h] [rbp-60h]
  __int64 v90; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h] BYREF
  PCSTR Format; // [rsp+B8h] [rbp-48h]
  PCSTR v93; // [rsp+C0h] [rbp-40h]
  _DWORD v94[68]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v95[1232]; // [rsp+1E0h] [rbp+E0h] BYREF
  char v96[176]; // [rsp+6B0h] [rbp+5B0h] BYREF

  v81 = a1;
  v77 = a6;
  memset(v94, 0, 0x108uLL);
  v96[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v85 = 0LL;
  v88 = sub_140567390;
  v76 = dword_140C54D54 != 0;
  v73[0] = 0;
  LOBYTE(v74) = 0;
  v78 = 0;
  v80 = 0;
  Format = 0LL;
  v93 = 0LL;
  v83 = 0LL;
  v75 = 1;
  v79 = 0;
  v82 = 0;
  v90 = 0LL;
  Src = 0LL;
  v84 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  if ( *((_QWORD *)KeGetCurrentThread() + 5) )
  {
    v15 = sub_140294D90((__int64)&v84, (__int64)&Src, (__int64)&v90);
    v16 = dword_140C31E20;
    v17 = (16 * *((_DWORD *)KeGetCurrentPrcb() + 9)) | 3;
    do
    {
      if ( (v16 & 3) == 3 )
      {
        v14 = 0;
        v72 = 0;
        goto LABEL_18;
      }
      v18 = v16;
      v16 = _InterlockedCompareExchange(&dword_140C31E20, v17, v16);
    }
    while ( v16 != v18 );
    if ( v15 )
    {
      if ( v84 > 9 || (v21 = 929, !_bittest(&v21, v84)) )
      {
        v22 = v90 - (_QWORD)Src;
        if ( (unsigned __int64)(v90 - (_QWORD)Src) > 0x6000 )
          v22 = 24576LL;
        memmove(&unk_140C2BE00, Src, v22);
      }
    }
    v14 = 1;
    v72 = 1;
    goto LABEL_29;
  }
  v11 = dword_140C31E20;
  v12 = (16 * *((_DWORD *)KeGetCurrentPrcb() + 9)) | 3;
  do
  {
    if ( (v11 & 3) == 3 )
    {
      v14 = 0;
      goto LABEL_11;
    }
    v13 = v11;
    v11 = _InterlockedCompareExchange(&dword_140C31E20, v12, v11);
  }
  while ( v11 != v13 );
  v14 = 1;
LABEL_11:
  v72 = v14;
  if ( v14 )
  {
LABEL_29:
    if ( dword_140C2A954 <= 0 )
      byte_140C31E24 = 1;
  }
LABEL_18:
  if ( dword_140D069F0 )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = *((_QWORD *)CurrentPrcb + 216);
  v89 = *((_DWORD *)CurrentPrcb + 9);
  sub_14029B8E8(v19, qword_140D06A68 | 0x100);
  if ( !qword_140C22800 )
    goto LABEL_21;
  if ( dword_140C2227C )
    byte_140C22263 = 0;
  if ( *(_BYTE *)(qword_140C22800 + 3) )
  {
    if ( v14 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v81 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
    }
    v88 = 0LL;
    v20 = 1;
  }
  else
  {
LABEL_21:
    v20 = 0;
  }
  v23 = (__int64)CurrentPrcb;
  v24 = v95;
  v25 = 9LL;
  v26 = (_OWORD *)*((_QWORD *)CurrentPrcb + 4408);
  do
  {
    *v24 = *v26;
    v24[1] = v26[1];
    v24[2] = v26[2];
    v24[3] = v26[3];
    v24[4] = v26[4];
    v24[5] = v26[5];
    v24[6] = v26[6];
    v24 += 8;
    v27 = v26[7];
    v26 += 8;
    *(v24 - 1) = v27;
    --v25;
  }
  while ( v25 );
  v28 = v72;
  *v24 = *v26;
  v24[1] = v26[1];
  v24[2] = v26[2];
  v24[3] = v26[3];
  v24[4] = v26[4];
  if ( !v72 )
  {
    v32 = 1;
    v37 = v79;
    v36 = (__int64)v88;
    goto LABEL_154;
  }
  sub_14038D2E0(4);
  if ( dword_140C1B2A0 )
    sub_140A81780(2LL);
  v30 = v81;
  if ( v81 == 229 )
  {
    sub_140568220();
    sub_14042A5E0(0LL, v31);
    HalReturnToFirmware(3);
  }
  qword_140C2BD88 = a2;
  qword_140C2BD90 = a3;
  if ( v81 == -1073741103 )
    v30 = 195;
  qword_140C2BD98 = a4;
  KiBugCheckData = v30;
  v81 = v30;
  qword_140C2BDA0 = a5;
  if ( v30 > 0xD8 )
  {
    if ( v30 == 234 )
    {
      qword_140D01150 = a4;
      goto LABEL_57;
    }
    if ( v30 == 239 )
    {
      v33 = 1;
    }
    else
    {
      if ( v30 == 252 )
      {
LABEL_123:
        v34 = v77;
        if ( !v77 )
        {
          if ( !a4 || (a4 & 3) != 0 )
            goto LABEL_57;
          v34 = a4;
          v77 = a4;
        }
        if ( v30 != 142 )
        {
          v29 = 1LL;
          v52 = *(_QWORD *)(v34 + 360);
          v83 = v52;
          if ( *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
          {
            v33 = 0;
            if ( (unsigned __int64)(v52 - qword_140C50630) < 0x8000000000LL
              && (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
            {
              LOBYTE(v33) = 1;
              v74 = v33;
              goto LABEL_135;
            }
          }
        }
LABEL_57:
        v32 = 1;
LABEL_58:
        LOBYTE(v33) = v74;
LABEL_59:
        v34 = v77;
        goto LABEL_60;
      }
      if ( v30 == 317 )
      {
        v82 = 8;
        goto LABEL_57;
      }
      if ( v30 != 335 )
      {
        if ( v30 == 456 )
          v80 = 1;
        goto LABEL_57;
      }
      if ( a3 < 0x100 && a5 )
      {
        v50 = CurrentThread;
        if ( *(_QWORD *)(a5 + 8) )
          v50 = *(struct _KTHREAD **)(a5 + 8);
        CurrentThread = v50;
      }
      v51 = *((_QWORD *)KeGetCurrentThread() + 23);
      v33 = *(_DWORD *)(v51 + 2172) >> 12;
      LOBYTE(v33) = (*(_DWORD *)(v51 + 2172) & 0x1000) == 0;
    }
    v32 = 1;
    v74 = v33;
    goto LABEL_59;
  }
  switch ( v30 )
  {
    case 0xD8u:
      v85 = a2;
      qword_140D01150 = a2 + 88;
      goto LABEL_57;
    case 0xAu:
      if ( a5 >= qword_140C29888 && a5 < qword_140C29880 )
      {
        KiBugCheckData = 197LL;
        goto LABEL_57;
      }
      sub_140568024(a5, &v85, 0LL, v73);
      v29 = 1LL;
      if ( v73[0] == 1 )
      {
        if ( sub_140568024(a2, &v85, 1LL, v73) )
        {
          KiBugCheckData = 211LL;
          qword_140D01150 = v85 + 88;
        }
        else
        {
          qword_140D01150 = sub_1405909B0(a2);
          if ( qword_140D01150 )
            KiBugCheckData = 212LL;
        }
        goto LABEL_57;
      }
      KiBugCheckData = 209LL;
LABEL_87:
      v32 = 1;
      goto LABEL_58;
    case 0x4Cu:
      Format = (PCSTR)a4;
      LOBYTE(v74) = 1;
      v48 = &qword_140C2BD88;
      v78 = 1;
      v49 = a3 - (_QWORD)&qword_140C2BD88;
      KiBugCheckData = (unsigned int)a2;
      v93 = (PCSTR)a5;
      do
      {
        *v48 = *(__int64 *)((char *)v48 + v49);
        ++v48;
      }
      while ( (__int64)v48 < (__int64)qword_140C2BDA8 );
      goto LABEL_57;
  }
  if ( v30 != 80 )
  {
    if ( v30 == 123 )
    {
      v29 = 1LL;
      v75 = (a4 & 1) == 0;
      v32 = (a4 & 2) == 0;
      goto LABEL_58;
    }
    if ( v30 != 142 && v30 != 190 )
    {
      if ( v30 == 203 )
        v83 = a2;
      goto LABEL_57;
    }
    goto LABEL_123;
  }
  v41 = v77;
  v42 = 0LL;
  if ( !v77 )
  {
    if ( !a4 || (a4 & 3) != 0 )
    {
      v73[0] = 1;
      goto LABEL_83;
    }
    v41 = a4;
    v77 = a4;
  }
  v83 = *(_QWORD *)(v41 + 360);
  v43 = v83;
  qword_140C2BD98 = v83;
  v42 = sub_140568024(v83, &v85, 0LL, v73);
  if ( *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
  {
    v44 = (unsigned __int64)(v43 - qword_140C50630) < 0x8000000000LL;
    v23 = (__int64)CurrentPrcb;
    if ( v44 )
    {
      v45 = (unsigned __int8)v74;
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        v45 = 1;
      v74 = v45;
    }
  }
  else
  {
    v23 = (__int64)CurrentPrcb;
  }
LABEL_83:
  v46 = sub_140592348(a2);
  v29 = 1LL;
  if ( v46 == 1 )
  {
    v47 = 213LL;
    if ( v73[0] == 1 )
      v47 = 204LL;
    KiBugCheckData = v47;
    goto LABEL_87;
  }
  if ( v83 == a2
    && (unsigned __int64)(a2 - qword_140C50630) < 0x8000000000LL
    && (unsigned __int64)(*((_QWORD *)CurrentThread + 30) - 1LL) > 0xFFFF7FFFFFFFFFFEuLL )
  {
    KiBugCheckData = 207LL;
    goto LABEL_87;
  }
  if ( !v42 )
  {
    qword_140D01150 = sub_1405909B0(a2);
    if ( qword_140D01150 )
      KiBugCheckData = 206LL;
    goto LABEL_57;
  }
  LOBYTE(v33) = v74;
  v34 = v77;
LABEL_135:
  v32 = 1;
LABEL_60:
  if ( !stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters )
  {
    sub_14064331C();
    if ( (unsigned __int8)sub_1406528CC(&xmmword_140C10CA0) )
      sub_140652CAC();
  }
  v35 = KiBugCheckData;
  dword_140D01894 = KiBugCheckData != 265;
  if ( v32 )
  {
    LOBYTE(v29) = v20;
    sub_140567630(KiBugCheckData, v29);
  }
  v36 = (__int64)v88;
  if ( v76 )
  {
    qword_140C2BDD0 = (__int64)v88;
    qword_140C2BDC0 = (__int64)v95;
    qword_140C2BDC8 = (__int64)CurrentThread;
    qword_140C2BDD8 = v34;
    byte_140C2BDE0 = v33;
    sub_1405788B0();
  }
  v37 = 1;
  byte_140C31E24 = 1;
  sub_14042A5E0(v35, v29);
  dword_140D0689C &= 0x2000u;
  sub_140552B40(96);
  IsEmptyAffinity = KeIsEmptyAffinityEx(asc_140C0CC00);
  sub_14042A5E0(IsEmptyAffinity == 0, v39);
  sub_1403EB11C(&v81, (__int64)&KiBugCheckData);
  if ( qword_140D00A80 )
    v37 = !v32;
  sub_1405434E0(KiBugCheckData, qword_140C2BD88, qword_140C2BD90, qword_140C2BD98, qword_140C2BDA0, v37);
  if ( qword_140D01150 )
  {
    sub_140567544(qword_140D01150, v96);
  }
  else if ( v83 )
  {
    LOBYTE(v40) = 1;
    sub_140567C08(v96, &v83, 1LL, v40);
  }
  if ( !byte_140C09804 )
    qword_140C021B8 = (__int64)v95;
  if ( (unsigned __int8)sub_1405674E0(v81, 0LL) )
  {
    if ( !*(_BYTE *)(v23 + 32422) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
        KiBugCheckData,
        (const void *)qword_140C2BD88,
        (const void *)qword_140C2BD90,
        (const void *)qword_140C2BD98,
        (const void *)qword_140C2BDA0);
      if ( qword_140D01150 )
        DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", v96);
      if ( v78 )
      {
        if ( Format )
          DbgPrintEx(0x65u, 0, Format);
        if ( v93 )
          DbgPrintEx(0x65u, 0, v93);
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      sub_1405672C0(3u);
  }
  v28 = v72;
LABEL_154:
  _disable();
  v53 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v53 <= 0xFu )
  {
    v54 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v54 + 20) |= (-1 << (v53 + 1)) & 0xFFFC;
  }
  if ( v28 )
  {
    if ( (unsigned int)dword_140D06884 > 1 && !byte_140D0194C )
    {
      sub_1402DA760(v23);
      v94[0] = 2097153;
      memset(&v94[1], 0, 0x104uLL);
      sub_140300030((__int64)v94, 0x20u, (unsigned __int16 *)dword_140D06E40);
      KeRemoveProcessorAffinityEx((unsigned __int16 *)v94, *(_DWORD *)(v23 + 36));
      sub_1402DA81C((__int64)v94, 0);
      KeStallExecutionProcessor(0xF4240u);
    }
    sub_140552D54(KiBugCheckData);
    sub_140552B40(1);
    if ( v20 )
    {
      v57 = v75;
    }
    else
    {
      v56 = v82;
      if ( v37 )
        v56 = v82 | 4;
      v57 = v75;
      v58 = v56 | 2;
      if ( v76 )
        v58 = v56;
      v59 = v58 | 1;
      if ( v75 )
        v59 = v58;
      sub_140567874(v59);
    }
    sub_140547AF4(1LL, v55);
    if ( !v20 )
    {
      sub_140567F5C(1LL, 0LL, 0LL);
      sub_140567F5C(8LL, 0LL, 0LL);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !byte_140C09804 )
      sub_1405655BC(0);
    v60 = *(_OWORD **)(v23 + 35264);
    v61 = v95;
    v62 = 9LL;
    do
    {
      *v60 = *v61;
      v60[1] = v61[1];
      v60[2] = v61[2];
      v60[3] = v61[3];
      v60[4] = v61[4];
      v60[5] = v61[5];
      v60[6] = v61[6];
      v60 += 8;
      v63 = v61[7];
      v61 += 8;
      *(v60 - 1) = v63;
      --v62;
    }
    while ( v62 );
    *v60 = *v61;
    v60[1] = v61[1];
    v60[2] = v61[2];
    v60[3] = v61[3];
    v60[4] = v61[4];
    if ( v32 )
    {
      sub_140564FF8();
      qword_140C2BDC8 = (__int64)CurrentThread;
      qword_140C2BDD8 = v77;
      byte_140C2BDE0 = v74;
      qword_140C2BDC0 = (__int64)v95;
      qword_140C2BDD0 = v36;
      sub_140567588(&qword_140C2BDC0);
    }
  }
  else
  {
    v64 = dword_140C31E20;
    sub_14057938C((unsigned int)dword_140C31E20);
    if ( v89 != v64 >> 4 )
    {
      while ( 1 )
      {
        if ( HIWORD(KeGetPcr()[87].Unused0[2]) && *((_DWORD *)KeGetCurrentPrcb() + 2914) == 5 )
          sub_14029AF90(0LL, 0LL);
        _mm_pause();
      }
    }
    if ( byte_140D0194C || (v64 & 0xC) >= 8 )
    {
      while ( 1 )
        sub_14042A5E0(v66, v65);
    }
    sub_140552F34(0x20000);
    _InterlockedExchangeAdd(&dword_140C31E20, 4u);
    if ( (v64 & 0xC) != 0 )
      sub_1405672C0(4u);
    v57 = v75;
  }
  sub_140547EA8(0LL, v62);
  sub_140552B40(99);
  if ( !v20 )
    sub_140568220();
  sub_14042A5E0(v68, v67);
  sub_140552B40(4);
  if ( v76 )
  {
    byte_140D01160 = 1;
    sub_1402DA5B0(0);
    sub_1405675F4();
    sub_14042A5E0(0LL, v69);
    if ( byte_140C22263 && !byte_140C22262 || byte_140C22261 || v80 || (v70 = 3, !v57) )
      v70 = 1;
    HalReturnToFirmware(v70);
  }
  return sub_1405672C0(4u);
}
