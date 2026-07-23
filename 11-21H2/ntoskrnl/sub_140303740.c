/*
 * XREFs of sub_140303740 @ 0x140303740
 * Callers:
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140303740(__int64 a1, unsigned int a2, __int64 a3, char a4, unsigned __int16 *a5)
{
  int v5; // r12d
  unsigned int v6; // r13d
  __int64 v7; // r15
  __int64 v9; // rdx
  unsigned int i; // r8d
  __int64 v11; // r11
  unsigned int v12; // r9d
  unsigned __int16 v13; // cx
  __int64 result; // rax
  unsigned int v15; // ebp
  unsigned __int16 v16; // dx
  unsigned __int16 *v17; // r14
  unsigned __int16 v18; // cx
  __int64 *v19; // r8
  __int64 v20; // r9
  int v21; // esi
  unsigned __int16 *v22; // rdi
  int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // rdi
  unsigned int v28; // edi
  unsigned int v29; // ecx
  __int64 *v30; // r8
  __int64 v31; // rax
  unsigned __int16 v32; // si
  __int64 v33; // rax
  unsigned __int16 v34; // ax
  unsigned __int16 v35; // dx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r9d
  unsigned __int16 v39; // dx
  int *v40; // r10
  unsigned __int16 v41; // r8
  __int64 v42; // rcx
  unsigned int v43; // r8d
  unsigned __int16 *v44; // rdx
  __int64 v45; // rcx
  unsigned __int16 v46; // dx
  unsigned __int16 v47; // cx
  unsigned __int16 v48; // cx
  unsigned __int16 v49; // dx
  __int64 v50; // rax
  __int16 v51; // r12
  unsigned __int64 v52; // r9
  unsigned __int16 v53; // r8
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int16 v56; // cx
  unsigned __int64 v57; // r14
  __int64 v58; // rdi
  __int64 v59; // rcx
  unsigned int v60; // ecx
  __int64 v61; // rdx
  char v62; // bp
  unsigned __int16 v63; // di
  unsigned int v64; // ecx
  __int64 v65; // r9
  __int64 v66; // r8
  unsigned int *v67; // r14
  unsigned __int64 v68; // rsi
  BYTE v69; // r13
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int64 v71; // rdx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-528h] BYREF
  int v73; // [rsp+34h] [rbp-524h]
  _DWORD v74[2]; // [rsp+38h] [rbp-520h] BYREF
  __int64 v75; // [rsp+40h] [rbp-518h]
  __int128 v76; // [rsp+48h] [rbp-510h]
  int v77; // [rsp+58h] [rbp-500h]
  int v78; // [rsp+60h] [rbp-4F8h]
  int v79; // [rsp+64h] [rbp-4F4h]
  _DWORD v80[4]; // [rsp+68h] [rbp-4F0h] BYREF
  _DWORD v81[4]; // [rsp+78h] [rbp-4E0h] BYREF
  _DWORD v82[2]; // [rsp+88h] [rbp-4D0h] BYREF
  __int128 v83; // [rsp+90h] [rbp-4C8h]
  __int64 v84; // [rsp+A0h] [rbp-4B8h]
  __int64 v85; // [rsp+A8h] [rbp-4B0h]
  __int128 v86; // [rsp+B0h] [rbp-4A8h] BYREF
  int v87; // [rsp+C0h] [rbp-498h]
  _QWORD v88[34]; // [rsp+D0h] [rbp-488h] BYREF
  int v89; // [rsp+1E0h] [rbp-378h] BYREF
  _DWORD v90[67]; // [rsp+1E4h] [rbp-374h] BYREF
  unsigned __int16 v91; // [rsp+2F0h] [rbp-268h]
  unsigned __int16 v92; // [rsp+2F2h] [rbp-266h]
  _DWORD v93[67]; // [rsp+2F4h] [rbp-264h] BYREF
  _BYTE v94[264]; // [rsp+400h] [rbp-158h] BYREF
  int v95; // [rsp+550h] [rbp-8h]

  v5 = a3;
  v75 = a3;
  v6 = a2;
  v74[0] = a2;
  v7 = a1;
  v85 = a1;
  memset(&v90[1], 0, 0x100uLL);
  if ( dword_140D050B4 == 2 )
    goto LABEL_10;
  v89 = 2097153;
  memset(v90, 0, 0x104uLL);
  memset(&v90[1], 0, 8uLL);
  LOWORD(v9) = 1;
  for ( i = 0; i < (unsigned __int16)word_140D05000; ++i )
  {
    v11 = qword_140D31700[i];
    v12 = *(_DWORD *)(v11 + 16);
LABEL_4:
    LOWORD(v9) = v89;
    while ( v12 )
    {
      _BitScanForward((unsigned int *)&v24, v12);
      v73 = 0;
      v12 &= ~(1 << v24);
      v25 = *(_QWORD *)(v11 + 8 * v24 + 24);
      v26 = *(unsigned __int16 *)(v25 + 136);
      v27 = *(_QWORD *)(v25 + 64);
      if ( (unsigned __int16)v89 > (unsigned __int16)v26 )
        goto LABEL_27;
      if ( HIWORD(v89) > (unsigned __int16)v26 )
      {
        LOWORD(v89) = v26 + 1;
LABEL_27:
        *(_QWORD *)&v90[2 * v26 + 1] |= v27;
        goto LABEL_4;
      }
    }
  }
  v13 = 0;
  if ( !(_WORD)v9 )
    goto LABEL_10;
  while ( !*(_QWORD *)&v90[2 * v13 + 1] )
  {
    if ( ++v13 >= (unsigned __int16)v9 )
      goto LABEL_10;
  }
  v28 = a5[1];
  if ( (unsigned __int16)v9 > (unsigned __int16)v28 )
    LOWORD(v9) = a5[1];
  v29 = 0;
  if ( (_WORD)v9 )
  {
    v30 = (__int64 *)&v90[1];
    v29 = (unsigned __int16)v9;
    v9 = (unsigned __int16)v9;
    do
    {
      v31 = *v30++;
      *(__int64 *)((char *)v30 + (char *)a5 - (char *)&v90[1]) = ~v31;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)a5 + 1) = 0;
  v32 = v28;
  *a5 = v28;
  a5[1] = v28;
  if ( v29 < v28 )
  {
    do
    {
      v33 = v29++;
      *(_QWORD *)&a5[4 * v33 + 4] = -1LL;
      v28 = a5[1];
    }
    while ( v29 < v28 );
    v32 = *a5;
  }
  memset(v94, 0, sizeof(v94));
  a5[1] = v28;
  v34 = dword_140D06E40[0];
  if ( v32 < LOWORD(dword_140D06E40[0]) )
    v34 = v32;
  *a5 = v34;
  if ( v34 > (unsigned __int16)v28 )
  {
    *a5 = v28;
    v34 = v28;
  }
  v35 = 0;
  if ( v34 )
  {
    do
    {
      v36 = v35++;
      *(_QWORD *)&a5[4 * v36 + 4] &= *(_QWORD *)&dword_140D06E40[2 * v36 + 2];
    }
    while ( v35 < *a5 );
  }
  if ( a5 != (unsigned __int16 *)v94 )
  {
    for ( *((_DWORD *)a5 + 1) = 0; v35 < a5[1]; *(_QWORD *)&a5[4 * v37 + 4] = 0LL )
      v37 = v35++;
  }
  if ( a4 )
    sub_1402FEC10((char *)a5, asc_140C0B690, a5, a5[1]);
  if ( !dword_140D05038 )
  {
    v62 = dword_140C4E93C;
    v89 = 2097153;
    v63 = 0;
    memset(v90, 0, 0x104uLL);
    while ( 1 )
    {
      LOBYTE(v64) = v62 - 1;
      v65 = qword_140D07E98[2 * v63];
      do
      {
        v64 = (unsigned __int8)(v64 + 1);
        v66 = *(_QWORD *)(((unsigned __int64)v64 << 6) + v65);
        if ( (unsigned __int16)v89 > v63 )
          goto LABEL_105;
        if ( HIWORD(v89) > v63 )
        {
          LOWORD(v89) = v63 + 1;
LABEL_105:
          *(_QWORD *)&v90[2 * v63 + 1] |= v66;
        }
      }
      while ( v64 != (unsigned __int8)v5 );
      if ( ++v63 >= (unsigned __int16)word_140D05014 )
      {
        sub_1402FEC10((char *)a5, &v89, a5, a5[1]);
        break;
      }
    }
  }
  v38 = *a5;
  v39 = dword_140D06E40[0];
  if ( (unsigned __int16)v38 < LOWORD(dword_140D06E40[0]) )
  {
    v40 = dword_140D06E40;
    v39 = *a5;
  }
  else
  {
    v40 = (int *)a5;
  }
  v41 = 0;
  if ( v39 )
  {
    while ( *(_QWORD *)&a5[4 * v41 + 4] == *(_QWORD *)&dword_140D06E40[2 * v41 + 2] )
    {
      if ( ++v41 >= v39 )
        goto LABEL_112;
    }
  }
  else
  {
LABEL_112:
    if ( v41 >= *(_WORD *)v40 )
    {
LABEL_10:
      result = a5[1];
      v15 = 1;
      v16 = dword_140D06E40[0];
      v73 = 1;
      v17 = 0LL;
      if ( LOWORD(dword_140D06E40[0]) > (unsigned __int16)result )
        v16 = result;
      *a5 = v16;
      v18 = 0;
      *((_DWORD *)a5 + 1) = 0;
      if ( v16 )
      {
        v19 = qword_140D06E48;
        v20 = v16;
        v18 = v16;
        do
        {
          *(__int64 *)((char *)v19 + (char *)a5 - (char *)qword_140D06E48 + 8) = *v19;
          ++v19;
          --v20;
        }
        while ( v20 );
        result = a5[1];
      }
      if ( v18 < (unsigned __int16)result )
      {
        do
        {
          result = v18++;
          *(_QWORD *)&a5[4 * result + 4] = 0LL;
        }
        while ( v18 < a5[1] );
      }
      goto LABEL_18;
    }
    while ( !*(_QWORD *)&v40[2 * v41 + 2] )
    {
      if ( ++v41 >= *(_WORD *)v40 )
        goto LABEL_10;
    }
  }
  result = 0x140000000uLL;
  v42 = dword_140D0E5E0[*(unsigned int *)(v7 + 36)] >> 6;
  v43 = dword_140D0E5E0[*(unsigned int *)(v7 + 36)] & 0x3F;
  if ( v38 > (unsigned int)v42 )
  {
    v44 = &a5[4 * v42];
    result = v43;
    v45 = *((_QWORD *)v44 + 1);
    _bittestandreset64(&v45, v43);
    *((_QWORD *)v44 + 1) = v45;
  }
  if ( dword_140D050B4 )
  {
    result = KeCountSetBitsAffinityEx(a5);
    if ( (unsigned int)result > 3 )
      goto LABEL_10;
  }
  v46 = *a5;
  v15 = 0;
  v73 = 0;
  v17 = a5;
  v47 = 0;
  if ( !v46 )
    goto LABEL_95;
  while ( 1 )
  {
    result = v47;
    if ( *(_QWORD *)&a5[4 * v47 + 4] )
      break;
    if ( ++v47 >= v46 )
      goto LABEL_95;
  }
LABEL_18:
  if ( byte_140D06889 )
    goto LABEL_95;
  v87 = 0;
  v86 = 0LL;
  if ( v15 )
  {
    v17 = (unsigned __int16 *)*((_QWORD *)&v86 + 1);
    v21 = 4;
  }
  else
  {
    if ( !v17 || (v56 = 0, !*v17) )
    {
LABEL_125:
      v23 = -1073741811;
LABEL_126:
      KeBugCheckEx(0x5Cu, 0x201uLL, qword_140C54A88, v23, v15);
    }
    while ( !*(_QWORD *)&v17[4 * v56 + 4] )
    {
      if ( ++v56 >= *v17 )
        goto LABEL_125;
    }
    v21 = 2;
    *((_QWORD *)&v86 + 1) = v17;
  }
  memset(v88, 0, 0x108uLL);
  v22 = (unsigned __int16 *)v88;
  LODWORD(v84) = 0;
  v83 = 0LL;
  if ( v21 != 4 )
  {
    v22 = v17;
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x20) == 0 || byte_140D016DE )
  {
    LODWORD(v88[0]) = 2097153;
    memset((char *)v88 + 4, 0, 0x104uLL);
    sub_140300030((__int64)v88, 0x20u, (unsigned __int16 *)dword_140D06E40);
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v88, HIDWORD(KeGetPcr()[1].LockArray));
LABEL_60:
    v86 = 0LL;
    memset(v93, 0, 0x104uLL);
    v77 = 0;
    v23 = 0;
    v76 = 0LL;
    if ( qword_140C4C528 )
    {
      result = sub_14042A5E0(v22, 210LL);
      v23 = result;
      goto LABEL_93;
    }
    v92 = 32;
    memset(&v93[1], 0, 0x100uLL);
    v48 = dword_140C4DD60;
    if ( (unsigned __int16)dword_140C4DD60 >= *v22 )
      v48 = *v22;
    result = v92;
    v91 = v48;
    if ( v48 > v92 )
    {
      v91 = v92;
      v48 = v92;
    }
    v49 = 0;
    if ( v48 )
    {
      do
      {
        v50 = v49++;
        *(_QWORD *)&v93[2 * v50 + 1] = *(_QWORD *)&v22[4 * v50 + 4] & qword_140C4DD68[v50];
      }
      while ( v49 < v91 );
      result = v92;
    }
    v93[0] = 0;
    if ( v49 < (unsigned __int16)result )
    {
      do
      {
        result = v49++;
        *(_QWORD *)&v93[2 * result + 1] = 0LL;
      }
      while ( v49 < v92 );
    }
    v51 = v95;
    if ( byte_140C4ADB4 )
    {
      v67 = (unsigned int *)qword_140D016F0;
      ProcNumber = 0;
      if ( qword_140D016F0 < (unsigned __int64)qword_140D016F8 )
      {
        do
        {
          result = KeAndGroupAffinityEx(v22, (__int64)(v67 + 2), (char *)&v86);
          if ( (_DWORD)result )
          {
            v68 = v86;
            v69 = 0;
            LODWORD(v76) = 6;
            *((_QWORD *)&v76 + 1) = *v67;
            ProcNumber.Group = WORD4(v86);
            for ( ProcNumber.Number = 0; v68; ProcNumber.Number = v69 )
            {
              if ( (v68 & 1) != 0 )
              {
                ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                HIDWORD(v76) |= *(_DWORD *)(qword_140C54A80 + 24LL * ProcessorIndexFromNumber + 12);
              }
              ++v69;
              v68 >>= 1;
            }
            v78 = -1;
            v80[1] = *(_DWORD *)(qword_140C54B50 + 20);
            v80[0] = *(_DWORD *)(qword_140C54B50 + 16);
            v79 = 1;
            _disable();
            result = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v80);
            v23 = result;
            if ( (v51 & 0x200) != 0 )
              _enable();
            if ( (int)result < 0 )
              goto LABEL_91;
          }
          v67 += 6;
        }
        while ( (unsigned __int64)v67 < qword_140D016F8 );
      }
    }
    else if ( !byte_140D011A0 )
    {
      v52 = *((_QWORD *)v22 + 1);
      v53 = 0;
      LODWORD(v76) = 5;
      DWORD2(v76) = 0;
      while ( v52 )
      {
LABEL_74:
        _BitScanForward64(&v54, v52);
        v52 &= ~(1LL << v54);
        v55 = (unsigned __int8)v54 + (v53 << 6);
        result = qword_140C54A80;
        if ( *(_DWORD *)(qword_140C54A80 + 24LL * (unsigned int)dword_140D105E0[v55]) == 5 )
        {
          result = *(unsigned int *)(qword_140C54A80 + 24LL * (unsigned int)dword_140D105E0[v55] + 8);
          DWORD2(v76) |= result;
        }
      }
      while ( ++v53 < *v22 )
      {
        result = v53;
        v52 = *(_QWORD *)&v22[4 * v53 + 4];
        if ( v52 )
          goto LABEL_74;
      }
      if ( DWORD2(v76) )
      {
        v80[2] = -1;
        v80[3] = 1;
        v81[1] = *(_DWORD *)(qword_140C54B50 + 20);
        v81[0] = *(_DWORD *)(qword_140C54B50 + 16);
        _disable();
        result = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v81);
        v23 = result;
        if ( (v51 & 0x200) != 0 )
          _enable();
        if ( (int)result < 0 )
          goto LABEL_92;
      }
    }
    v57 = *(_QWORD *)&v93[1];
    LOWORD(v58) = 0;
    while ( v57 )
    {
LABEL_140:
      _BitScanForward64(&v71, v57);
      LODWORD(v76) = 4;
      v57 &= ~(1LL << v71);
      DWORD2(v76) = *(_DWORD *)(qword_140C54A80
                              + 24LL * (unsigned int)dword_140D105E0[64 * (unsigned __int16)v58 + (unsigned __int8)v71]
                              + 8);
      v82[1] = *(_DWORD *)(qword_140C54B50 + 20);
      v82[0] = *(_DWORD *)(qword_140C54B50 + 16);
      v81[2] = -1;
      v81[3] = 1;
      _disable();
      result = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v82);
      v23 = result;
      if ( (v51 & 0x200) != 0 )
        _enable();
      if ( (int)result < 0 )
        goto LABEL_90;
    }
    while ( 1 )
    {
      v58 = (unsigned __int16)(v58 + 1);
      if ( (unsigned int)v58 >= v91 )
        break;
      v57 = *(_QWORD *)&v93[2 * v58 + 1];
      if ( v57 )
        goto LABEL_140;
    }
LABEL_90:
    v15 = v73;
LABEL_91:
    v6 = v74[0];
LABEL_92:
    v5 = v75;
    goto LABEL_93;
  }
  LODWORD(v83) = 2;
  v75 = 0x1FFFFFFFFLL;
  v74[1] = *(_DWORD *)(qword_140C54B50 + 20);
  v74[0] = *(_DWORD *)(qword_140C54B50 + 16);
  _disable();
  result = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v74);
  v23 = result;
  if ( (v95 & 0x200) != 0 )
    _enable();
LABEL_93:
  if ( v23 < 0 )
    goto LABEL_126;
  v7 = v85;
  dword_140C4E93C = v5;
LABEL_95:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v59 = (unsigned int)dword_140C4E934;
    result = (unsigned int)(dword_140C4E934 + 1);
    dword_140C4E938 = dword_140C4E934;
    dword_140C4E934 = result;
    if ( (unsigned int)result >= v6 )
      dword_140C4E934 = 0;
    if ( (_DWORD)v59 != *(_DWORD *)(v7 + 36) )
    {
      v60 = dword_140D0E5E0[v59];
      result = *a5;
      v61 = v60 >> 6;
      if ( (unsigned int)v61 >= (unsigned int)result || ((*(_QWORD *)&a5[4 * v61 + 4] >> (v60 & 0x3F)) & 1) == 0 )
        dword_140C4E938 = *(_DWORD *)(v7 + 36);
    }
  }
  return result;
}
