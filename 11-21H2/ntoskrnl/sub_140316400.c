/*
 * XREFs of sub_140316400 @ 0x140316400
 * Callers:
 *     sub_1402011DC @ 0x1402011DC (sub_1402011DC.c)
 *     sub_1402019FC @ 0x1402019FC (sub_1402019FC.c)
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_14045C52A @ 0x14045C52A (sub_14045C52A.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_140274148 @ 0x140274148 (sub_140274148.c)
 *     sub_1402746C0 @ 0x1402746C0 (sub_1402746C0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402E5B0C @ 0x1402E5B0C (sub_1402E5B0C.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_140339370 @ 0x140339370 (sub_140339370.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033A4C0 @ 0x14033A4C0 (sub_14033A4C0.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405BA498 @ 0x1405BA498 (sub_1405BA498.c)
 */

__int64 __fastcall sub_140316400(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, ULONG_PTR a3, int a4)
{
  ULONG_PTR v7; // rdi
  __int64 v8; // r15
  unsigned int v9; // r14d
  BOOL v10; // r12d
  __int64 v11; // rsi
  unsigned int v12; // eax
  int v13; // ecx
  __int64 v14; // r13
  unsigned int v15; // esi
  bool v16; // zf
  unsigned __int64 v17; // rdi
  unsigned __int8 v18; // cl
  int v19; // eax
  char v20; // di
  __int64 v21; // rax
  int v22; // eax
  signed __int32 v23; // eax
  __int64 v24; // r14
  volatile LONG *v25; // rcx
  volatile LONG *v26; // rdi
  unsigned __int64 v27; // rdi
  ULONG_PTR v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // r8
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v38; // eax
  unsigned int v39; // edi
  unsigned int v40; // edx
  __int16 v41; // di
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 v46; // rbx
  unsigned __int64 v47; // rdx
  __int64 *v48; // rdi
  __int64 v49; // rbx
  _QWORD *v50; // rax
  ULONG_PTR v51; // rdx
  int v53; // eax
  __int64 v54; // r14
  char v55; // al
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 **v61; // r14
  unsigned int v62; // eax
  unsigned int v63; // ecx
  char v64; // al
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 *v69; // rcx
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+34h] [rbp-CCh]
  __int64 v72; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v73; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+38h] [rbp-C8h]
  unsigned int v75; // [rsp+40h] [rbp-C0h]
  unsigned int v76; // [rsp+40h] [rbp-C0h]
  int v77; // [rsp+44h] [rbp-BCh] BYREF
  int v78; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v80; // [rsp+58h] [rbp-A8h]
  __int64 v81; // [rsp+60h] [rbp-A0h] BYREF
  int v82; // [rsp+68h] [rbp-98h] BYREF
  BOOL v83; // [rsp+6Ch] [rbp-94h]
  int v84; // [rsp+70h] [rbp-90h]
  __int64 **v85; // [rsp+78h] [rbp-88h] BYREF
  __int64 v86; // [rsp+80h] [rbp-80h]
  unsigned __int64 v87; // [rsp+88h] [rbp-78h]
  __int64 v88; // [rsp+90h] [rbp-70h]
  __int128 v89; // [rsp+98h] [rbp-68h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v91; // [rsp+B0h] [rbp-50h]
  __int128 v92; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v93; // [rsp+C8h] [rbp-38h]
  __int128 v94; // [rsp+D8h] [rbp-28h]
  __int128 v95; // [rsp+E8h] [rbp-18h]
  __int64 v96; // [rsp+F8h] [rbp-8h]
  signed __int64 v97; // [rsp+100h] [rbp+0h]
  __int128 v98; // [rsp+108h] [rbp+8h]
  __int128 v99; // [rsp+118h] [rbp+18h]
  __int128 v100; // [rsp+128h] [rbp+28h]
  _QWORD v101[18]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v102[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v103; // [rsp+1E0h] [rbp+E0h] BYREF
  __int16 v104; // [rsp+1E4h] [rbp+E4h]
  __int16 v105; // [rsp+1E6h] [rbp+E6h]
  __int64 v106; // [rsp+1E8h] [rbp+E8h]
  __int64 v107; // [rsp+1F0h] [rbp+F0h]
  __int64 v108; // [rsp+1F8h] [rbp+F8h]
  _BYTE v109[152]; // [rsp+200h] [rbp+100h] BYREF

  v80 = a2;
  BugCheckParameter2a = BugCheckParameter2;
  v78 = a4;
  v105 = 0;
  v89 = 0LL;
  memset(v109, 0, sizeof(v109));
  v7 = *(_QWORD *)a2;
  v92 = 0LL;
  v93 = 0LL;
  v77 = sub_140317A80(a2);
  if ( v77
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v57 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v57 )
    {
      v58 = *(_QWORD *)(v57 + 8 * ((a2 >> 3) & 0x1FF));
      if ( (v58 & 0x20) != 0 )
        v7 |= 0x20uLL;
      if ( (v58 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v81 = v7;
  v91 = ((unsigned __int64)sub_140317A10(&v81) >> 12) & 0xFFFFFFFFFFLL;
  v8 = 48 * v91 - 0x220000000000LL;
  v85 = 0LL;
  v9 = 0;
  v10 = (v7 & 0x200) == 0;
  v72 = *(_QWORD *)(v8 + 8);
  v87 = v72 | 0x8000000000000000uLL;
  v11 = *((_QWORD *)KeGetCurrentThread() + 23);
  v86 = v11;
  v12 = sub_14027B080(BugCheckParameter2);
  if ( v12 == 1 )
  {
    v14 = sub_14027B520();
    v15 = (v7 & 0x200) == 0;
    if ( ((v72 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) != 0 && v72 )
      v15 = v10 | 2;
    v70 = 2;
  }
  else if ( v12 == 12 )
  {
    v70 = 0;
    v14 = (__int64)sub_14026DFC0(1);
    v15 = (v7 & 0x200) == 0;
    if ( ((v72 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) != 0 && v72 )
      v15 = v10 | 2;
  }
  else
  {
    if ( v12 <= 0x10 )
    {
      v13 = 82432;
      if ( _bittest(&v13, v12) )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 2uLL);
    }
    if ( v12 == 6 )
    {
      v70 = 0;
      v15 = v10 | 2;
      v14 = (__int64)sub_14026DFC0(2);
      if ( ((v72 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) == 0 || !v72 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2a, v7, BugCheckParameter4);
    }
    else
    {
      if ( v12 == 5 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v7, 1uLL);
      if ( *(_QWORD *)(v11 + 1248) )
        return 3221226548LL;
      v14 = v11 + 1664;
      v70 = 1;
      v15 = (v7 & 0x200) == 0;
      if ( ((v72 >= 0) & !_bittest64((const signed __int64 *)(v8 + 40), 0x28u)) != 0 && v72 )
        v15 = v10 | 2;
      memset(v101, 0, 0x88uLL);
      v101[0] = BugCheckParameter2a;
      v101[7] = v14;
      v9 = sub_140339370(v101, 0LL, &v85);
    }
  }
  v75 = 0;
  v16 = (*(_BYTE *)v8 & 1) == 0;
  v88 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v14 + 174));
  v83 = !v16;
  v73 = ((BugCheckParameter2a >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = *(_QWORD *)v73;
  if ( (unsigned int)sub_140317A80(v73)
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v17 & 1) != 0
    && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
  {
    v59 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v59 )
    {
      v60 = *(_QWORD *)(v59 + 8 * ((v73 >> 3) & 0x1FF));
      if ( (v60 & 0x20) != 0 )
        v17 |= 0x20uLL;
      if ( (v60 & 0x42) != 0 )
        v17 |= 0x42uLL;
    }
  }
  v18 = HIBYTE(v17) & 0xF | (16 * ((v17 >> 60) & 7));
  v84 = v78 & 1;
  if ( (v78 & 1) != 0 || (HIBYTE(v17) & 0xF) == 0xA )
  {
    v19 = v70;
  }
  else
  {
    v19 = v70;
    if ( (HIBYTE(v17) & 0xF) == 9 )
    {
      v18 = (16 * ((v17 >> 60) & 7)) | 0xA;
    }
    else if ( v70 != 1 && (*(_BYTE *)(v8 + 35) & 8) != 0 )
    {
      v18 = (16 * ((v17 >> 60) & 7)) | 0xA;
    }
  }
  v20 = v18 & 0xF;
  if ( (v18 & 0xF) == 0xA )
    goto LABEL_21;
  if ( v20 == 8 && v19 != 2 )
  {
    v75 = 1;
    if ( (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
      v75 = 2;
  }
  LODWORD(v21) = sub_14033A4C0(BugCheckParameter2a, v18);
  if ( !(_DWORD)v21 )
LABEL_21:
    v21 = (*(_QWORD *)(v8 + 16) >> 5) & 0x1FLL;
  v22 = dword_140015AB0[(unsigned int)v21];
  v71 = v22;
  if ( a3 != -1LL )
  {
LABEL_25:
    if ( v75 )
    {
      if ( v75 >= 2 )
      {
        v54 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
        sub_14028CE10(v54, 1LL);
        if ( v70 == 1 )
          _InterlockedDecrement64((volatile signed __int64 *)(v54 + 17520));
      }
      sub_1402E5B0C(48 * (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1);
      v22 = v71;
    }
    if ( v22 == 24 )
    {
      v61 = v85;
      LOBYTE(v71) = 1;
      if ( v85 || (sub_1402ED128(1), v85 = sub_1403126F0(BugCheckParameter2a), v61 = v85, sub_1402806E0(1, 0x11u), v61) )
      {
        v62 = (*((_DWORD *)v61 + 12) >> 7) & 0x1F;
        v63 = v62 >> 3;
        if ( v62 >> 3 == 3 )
        {
          if ( (v62 & 7) != 0 )
            LOBYTE(v71) = 25;
        }
        else
        {
          v64 = 1;
          if ( v63 == 1 )
            v64 = 9;
          LOBYTE(v71) = v64;
        }
      }
    }
    v24 = 48 * a3 - 0x220000000000LL;
    *(_QWORD *)(v24 + 16) = sub_1402CCC50(32LL * (v71 & 0x1F));
    if ( v20 == 10 )
    {
      v29 = v80;
    }
    else
    {
      v25 = (volatile LONG *)&unk_140C53D00;
      if ( (*(_BYTE *)(v14 + 184) & 7) != 2 )
        v25 = (volatile LONG *)(v14 + 192);
      v26 = (volatile LONG *)(v14 + 192);
      ExAcquireSpinLockSharedAtDpcLevel(v25 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 152), 1uLL);
      if ( BugCheckParameter2a < 0xFFFFF68000000000uLL || BugCheckParameter2a > 0xFFFFF6FFFFFFFFFFuLL )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 136), 1uLL);
      if ( (*(_BYTE *)(v14 + 184) & 7) == 2 )
        v26 = (volatile LONG *)&unk_140C53D00;
      ExReleaseSpinLockSharedFromDpcLevel(v26 + 16);
      v27 = *(_QWORD *)v73;
      if ( !(unsigned int)sub_140317A80(v73)
        || (dword_140D06880 & 0xC00000) == 0
        || *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) == 1
        || (v27 & 1) == 0
        || (v27 & 0x20) != 0 && (v27 & 0x42) != 0 )
      {
        v28 = v73;
      }
      else
      {
        v28 = v73;
      }
      sub_14033A510(v28, 0x80000000LL);
      v29 = v80;
      v30 = *(_QWORD *)v80;
      if ( v77
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        v65 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v65 )
        {
          v66 = *(_QWORD *)(v65 + 8 * ((v80 >> 3) & 0x1FF));
          if ( (v66 & 0x20) != 0 )
            v30 |= 0x20uLL;
          if ( (v66 & 0x42) != 0 )
            v30 |= 0x42uLL;
        }
      }
      v81 = v30;
    }
    *(_WORD *)(v24 + 32) = 1;
    v74 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v31 = *(_QWORD *)v74;
    if ( (unsigned int)sub_140317A80(v74)
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v67 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v67 )
      {
        v68 = *(_QWORD *)(v67 + 8 * ((v74 >> 3) & 0x1FF));
        if ( (v68 & 0x20) != 0 )
          v31 |= 0x20uLL;
        if ( (v68 & 0x42) != 0 )
          v31 |= 0x42uLL;
      }
    }
    v90 = v31;
    v32 = ((unsigned __int64)sub_140317A10(&v90) >> 12) & 0xFFFFFFFFFFLL;
    v34 = 0xFFFFFF0000000000uLL;
    v35 = *(_QWORD *)(v24 + 40);
    v96 = 0LL;
    v97 = v35;
    v94 = 0LL;
    v95 = 0LL;
    v98 = 0LL;
    v99 = 0LL;
    v100 = 0LL;
    v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 40), v32 | v35 & 0xFFFFFF0000000000uLL, v35);
    for ( *((_QWORD *)&v100 + 1) = v36; v97 != v36; *((_QWORD *)&v100 + 1) = v36 )
    {
      v97 = v36;
      v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 40), v32 | v36 & 0xFFFFFF0000000000uLL, v36);
    }
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)CurrentThread + 346) & 0x100) != 0 )
    {
      v39 = (*((_DWORD *)CurrentThread + 346) & 0xE00u) >> 9;
      v76 = v39;
    }
    else
    {
      v38 = sub_14033D720(CurrentThread);
      LOBYTE(v39) = v38;
      v76 = v38;
    }
    if ( (DWORD1(xmmword_140D06900) & 0x8000001) != 0 )
      v15 |= 4u;
    v82 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v82, v32, v34, v33);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
    if ( v83 )
      *(_QWORD *)v24 |= 1uLL;
    *(_BYTE *)(v24 + 34) |= 0x10u;
    if ( v70 || (((v78 & 1) == 0) & (*(_BYTE *)(v8 + 35) >> 3)) == 0 )
      *(_BYTE *)(v24 + 35) &= ~8u;
    else
      *(_BYTE *)(v24 + 35) |= 8u;
    v40 = *(unsigned __int8 *)(v8 + 34) >> 6;
    if ( *(unsigned __int8 *)(v24 + 34) >> 6 != v40 )
      sub_140267E78(48 * a3 - 0x220000000000LL, v40, 1);
    sub_14033C33C(48 * a3 - 0x220000000000LL, 0LL, 1LL);
    *(_QWORD *)(v24 + 24) = *(_QWORD *)(v24 + 24) & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v24 + 35) ^= (*(_BYTE *)(v24 + 35) ^ v39) & 7;
    *(_QWORD *)(v24 + 8) = v80;
    *(_BYTE *)(v24 + 34) = *(_BYTE *)(v24 + 34) & 0xF8 | 6;
    if ( v15 >= 4 )
    {
      sub_1402B1E40((__m128i *)(48 * a3 - 0x220000000000LL), &v92);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *((_QWORD *)&v93 + 1) |= 8uLL;
      v102[0] = &v92;
      v102[1] = 32LL;
      sub_14035EDE4((unsigned int)v102, 1, 671088641, 642, 289413892);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    __incgsdword(0x2E94u);
    v41 = 1;
    if ( (v71 & 2) != 0 )
    {
      if ( (dword_140D06880 & 0x20000) == 0 && (dword_140D06880 & 0x8000) != 0 )
      {
        if ( BugCheckParameter2a >= 0xFFFF800000000000uLL )
        {
          v41 = 17;
          if ( (v78 & 2) != 0 )
            v41 = 49;
LABEL_58:
          sub_1402E7D60(a3, v91, 0LL, v41);
          if ( dword_140C52B68 && v76 >= dword_140C52B6C )
            sub_140333040(v14, v80);
          v45 = v81;
          if ( (v15 & 1) == 0 )
          {
            if ( v81 < 0 || v70 != 1 )
              v45 = v81 | 0x42;
            v45 = v45 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
          }
          v106 = 20LL;
          v103 = v70;
          v46 = v45 ^ (v45 ^ (a3 << 12)) & 0xFFFFFFFFFF000LL;
          v104 = 0;
          v107 = 0LL;
          v108 = 0LL;
          if ( (v78 & 8) != 0 && !sub_140274148((__int64 *)v80, v46, 4) )
            v15 |= 8u;
          v81 = v46;
          if ( v15 >= 8 )
          {
LABEL_70:
            v49 = v86;
            if ( v70 == 1 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 1272), 1uLL);
            v77 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v77, v42, v43, v44);
              while ( *(__int64 *)(v8 + 24) < 0 );
            }
            if ( !v70 && !v84 )
            {
              v55 = *(_BYTE *)(v8 + 35);
              if ( (v55 & 8) != 0 )
                *(_BYTE *)(v8 + 35) = v55 & 0xF7;
            }
            sub_140273FD0(v8, v42, v43, v44);
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (v15 & 2) != 0 )
            {
              v53 = sub_1402399A8(v14, v87);
            }
            else
            {
              if ( (*(_BYTE *)(v14 + 184) & 7) != 0 )
                return 0LL;
              v50 = sub_140234F14(v49, v87);
              if ( !v50 )
                return 0LL;
              v53 = sub_1405BA498((ULONG_PTR)v50, v51);
            }
            if ( v53 == 3 )
              sub_14032A4B0(v88, 1LL, 4LL);
            return 0LL;
          }
          sub_1402CF280((__int64)&v103, BugCheckParameter2a & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
          if ( (v41 & 0x20) != 0 || (v46 & 0x42) == 0 )
          {
            sub_1402746C0((volatile __int64 *)v80, v46);
            sub_14032F1B0(&v103);
            goto LABEL_70;
          }
          v47 = v46 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v77 && (unsigned int)sub_140229550() )
          {
            v48 = (__int64 *)v80;
            v69 = (__int64 *)v80;
            *(_QWORD *)v80 = v47;
            sub_1402294F0((__int64)v69, v47);
            sub_14032F1B0(&v103);
          }
          else
          {
            v48 = (__int64 *)v80;
            *(_QWORD *)v80 = v47;
            sub_14032F1B0(&v103);
            v42 = v46;
            if ( !v77 )
              goto LABEL_69;
          }
          if ( (unsigned int)sub_140229550() )
          {
            if ( !HIBYTE(word_140C51864) && (v42 & 1) != 0 )
              v46 = v42 | 0x8000000000000000uLL;
            *v48 = v46;
            sub_1402294F0((__int64)v48, v46);
            goto LABEL_70;
          }
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v42 & 1) != 0 )
            v46 = v42 | 0x8000000000000000uLL;
LABEL_69:
          *v48 = v46;
          goto LABEL_70;
        }
LABEL_56:
        if ( (*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 992LL) & 1) != 0 )
          v41 |= 0x10u;
        goto LABEL_58;
      }
    }
    else
    {
      v41 = 9;
    }
    if ( BugCheckParameter2a >= 0xFFFF800000000000uLL )
      goto LABEL_58;
    goto LABEL_56;
  }
  sub_140339C20(v14, v9, &v89);
  v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v89, 1u);
  a3 = sub_1403250B0(v88, DWORD2(v89) & (unsigned int)v23 | HIDWORD(v89), 0LL);
  if ( a3 != -1LL )
  {
    v22 = v71;
    goto LABEL_25;
  }
  return 3221225495LL;
}
