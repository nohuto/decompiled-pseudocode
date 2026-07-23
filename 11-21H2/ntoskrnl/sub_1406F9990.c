/*
 * XREFs of sub_1406F9990 @ 0x1406F9990
 * Callers:
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 *     sub_14096CE14 @ 0x14096CE14 (sub_14096CE14.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_14025E274 @ 0x14025E274 (sub_14025E274.c)
 *     sub_140270A00 @ 0x140270A00 (sub_140270A00.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_140287380 @ 0x140287380 (sub_140287380.c)
 *     sub_140287450 @ 0x140287450 (sub_140287450.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14030B420 @ 0x14030B420 (sub_14030B420.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030BA20 @ 0x14030BA20 (sub_14030BA20.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 *     sub_140593E88 @ 0x140593E88 (sub_140593E88.c)
 *     sub_140595D80 @ 0x140595D80 (sub_140595D80.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 *     sub_1406A2588 @ 0x1406A2588 (sub_1406A2588.c)
 *     sub_1406D0AD8 @ 0x1406D0AD8 (sub_1406D0AD8.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_1406DDB48 @ 0x1406DDB48 (sub_1406DDB48.c)
 *     sub_1406F74A8 @ 0x1406F74A8 (sub_1406F74A8.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_1406F84B0 @ 0x1406F84B0 (sub_1406F84B0.c)
 *     sub_1406F8804 @ 0x1406F8804 (sub_1406F8804.c)
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 *     sub_1406F9060 @ 0x1406F9060 (sub_1406F9060.c)
 *     sub_1406FC03C @ 0x1406FC03C (sub_1406FC03C.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_1406FCFF0 @ 0x1406FCFF0 (sub_1406FCFF0.c)
 *     sub_14079EC14 @ 0x14079EC14 (sub_14079EC14.c)
 *     sub_1407B83C0 @ 0x1407B83C0 (sub_1407B83C0.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_1407B97B0 @ 0x1407B97B0 (sub_1407B97B0.c)
 *     sub_14096CCF8 @ 0x14096CCF8 (sub_14096CCF8.c)
 *     sub_14096CDB8 @ 0x14096CDB8 (sub_14096CDB8.c)
 *     sub_140982DE4 @ 0x140982DE4 (sub_140982DE4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406F9990(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  unsigned int *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r15
  int v12; // edx
  int v13; // edx
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  unsigned int v17; // ebx
  __int16 v18; // r10
  __int16 v19; // ax
  int v20; // eax
  int v21; // edx
  __int64 result; // rax
  int v23; // ecx
  int v24; // edi
  unsigned int *v25; // rax
  SIZE_T v26; // rdx
  ULONG v27; // r8d
  _OWORD *v28; // rax
  _OWORD *v29; // rdi
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // eax
  int v35; // ecx
  __int64 v36; // rax
  int v37; // ecx
  unsigned int v38; // ecx
  struct _KTHREAD *CurrentThread; // r13
  int v40; // eax
  unsigned __int64 v41; // rsi
  __int64 v42; // r10
  int v43; // ecx
  __int64 v44; // rsi
  unsigned __int64 v45; // r13
  unsigned int v46; // r8d
  ULONG_PTR v47; // rdx
  _QWORD *v48; // r9
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  int v51; // r12d
  __int64 *v52; // rdi
  int v53; // eax
  int v54; // r11d
  void *v55; // rdi
  __int64 v56; // r8
  unsigned __int64 v57; // r12
  int v58; // ecx
  unsigned int v59; // ebx
  __int64 v60; // r12
  __int64 v61; // r8
  unsigned int v62; // ecx
  unsigned int v63; // edx
  int v64; // r8d
  __int64 v65; // rdi
  __int64 v66; // r13
  unsigned __int64 v67; // rsi
  __int64 v68; // r13
  unsigned __int64 v69; // r13
  _OWORD *v70; // rax
  __int64 v71; // r13
  __int16 v72; // dx
  __int16 v73; // cx
  int v74; // r8d
  __int16 v75; // ax
  unsigned int v76; // eax
  int v77; // eax
  int v78; // r13d
  void *v79; // rcx
  __int16 v80; // ax
  void *v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  unsigned __int64 v84; // r8
  char v85; // r9
  __int64 v86; // rdi
  unsigned __int64 v87; // rdi
  unsigned __int64 v88; // rdi
  unsigned int v89; // eax
  void *v90; // rcx
  unsigned __int64 v91; // rax
  __int64 v92; // rcx
  __int16 v93; // cx
  unsigned __int64 v94; // rdx
  int v95; // r9d
  _QWORD *v96; // rax
  __int64 v97; // [rsp+28h] [rbp-D8h]
  unsigned int v98; // [rsp+50h] [rbp-B0h]
  int v99; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+58h] [rbp-A8h]
  __int64 v101; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v102; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h]
  unsigned __int16 *Objecta; // [rsp+70h] [rbp-90h]
  __int64 v105; // [rsp+78h] [rbp-88h]
  unsigned __int64 v106; // [rsp+80h] [rbp-80h] BYREF
  __int64 v107; // [rsp+88h] [rbp-78h]
  __int16 v108; // [rsp+90h] [rbp-70h]
  __int64 v109; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v110; // [rsp+A0h] [rbp-60h]
  __int64 v111; // [rsp+A8h] [rbp-58h]
  __int64 v112; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h]
  __int128 v114; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v115; // [rsp+D0h] [rbp-30h]
  __int128 v116; // [rsp+E0h] [rbp-20h]
  __int64 v117; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v118[11]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v120; // [rsp+1A8h] [rbp+A8h]

  v9 = (unsigned int *)a1;
  memset(v118, 0, 0x48uLL);
  v10 = *(_QWORD *)v9;
  v11 = *(_QWORD *)(a2 + 88);
  v12 = *(_DWORD *)(a2 + 40) >> 22;
  v117 = 0LL;
  v13 = v12 & 2;
  v99 = 0;
  v105 = v10;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v14 = *(_QWORD *)(v10 + 56);
  v111 = v14;
  if ( dword_140C4F448
    && dword_140C4F44C == *(_DWORD *)(v14 + 60)
    && dword_140C4F450 == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
  {
    __debugbreak();
  }
  v15 = *(_QWORD *)(v10 + 32);
  v16 = *(_QWORD *)(v10 + 48);
  Object = (PVOID)v15;
  if ( (v9[14] & 0x20000000) != 0 || (v17 = v13, (*(_DWORD *)(v11 + 2172) & 0x2000) != 0) )
  {
    v17 = v13;
    if ( (*(_BYTE *)(v10 + 15) & 1) == 0 )
    {
      v17 = v13 | 5;
      v99 = 1;
    }
  }
  v18 = *(_WORD *)(v11 + 2412);
  v19 = *(_WORD *)(a2 + 58);
  v108 = v18;
  v120 = v19;
  if ( !v19 )
  {
    v20 = *(_DWORD *)(v11 + 2172);
    if ( (v20 & 0x1000) != 0 || (v20 & 1) != 0 )
    {
      v120 = *(_WORD *)(v14 + 48);
      goto LABEL_10;
    }
    v19 = v18;
    v120 = v18;
  }
  if ( v19 != *(_WORD *)(v14 + 48) )
  {
    if ( (unsigned int)PsGetHostSilo() )
    {
      v17 |= 4u;
      v99 = v74 | 2;
    }
    else
    {
      if ( v72 )
        return 3221225659LL;
      v120 = v73;
    }
  }
  v15 = (unsigned __int64)Object;
LABEL_10:
  v21 = *(_DWORD *)(a2 + 40);
  v107 = *(_QWORD *)(a2 + 16);
  if ( (v21 & 0x20000000) != 0 )
  {
    if ( v15 < 0x100000000LL || v17 >= 4 )
      return 3221225496LL;
    v17 = v17 & 0xFFFFFFFC | 1;
    v99 = 0;
    if ( (*(_BYTE *)(v14 + 44) & 1) != 0 )
      return 3221226089LL;
    v107 = 0x200000LL;
  }
  if ( !a5 || (*(_DWORD *)(a5 + 56) & 0x80000) != 0 || (v21 & 0x40000) != 0 )
  {
    if ( a7 != 1 )
      return 3221225541LL;
    v17 |= 0x400u;
  }
  if ( v17 >= 0x400 )
    goto LABEL_133;
  result = sub_1406F884C(v11, a5, (__int64)v9, v14);
  if ( (int)result < 0 )
    return result;
  v23 = *(_DWORD *)(v11 + 2512);
  if ( (v23 & 0x10) == 0 || (*(_BYTE *)(v111 + 51) & 4) != 0 )
    goto LABEL_21;
  if ( (*(_BYTE *)(v111 + 44) & 1) != 0 )
  {
    if ( (v23 & 8) == 0 )
      goto LABEL_21;
    return 3221226089LL;
  }
  v17 |= 1u;
  if ( v17 >= 0x400 )
  {
LABEL_133:
    v17 = v17 & 0xFFFFFFFC | 1;
    goto LABEL_22;
  }
LABEL_21:
  if ( (*(_BYTE *)(v10 + 15) & 1) != 0 && (v23 & 0x40) == 0 )
    goto LABEL_133;
LABEL_22:
  if ( (a8 & 4) != 0 || v11 == qword_140D06A30 )
  {
    v24 = 0;
    v99 = 0;
    v17 &= 0xFFFFFFF9;
  }
  else
  {
    v24 = v99;
  }
  if ( *(_QWORD *)(*((_QWORD *)v9 + 12) + 32LL) && (v9[14] & 0x800) == 0 )
    goto LABEL_27;
  if ( (v17 & 4) != 0 )
    return 3221225496LL;
  v24 = 0;
  v99 = 0;
  v17 &= ~2u;
LABEL_27:
  v110 = 0LL;
  if ( v17 >= 0x400 )
    goto LABEL_31;
  v25 = v9 + 32;
  if ( v9 == (unsigned int *)-128LL )
    goto LABEL_31;
  while ( (v25[8] & 0xE) < 0xC )
  {
    v25 = (unsigned int *)*((_QWORD *)v25 + 2);
    if ( !v25 )
      goto LABEL_31;
  }
  result = sub_14079EC14(*(_QWORD *)(a2 + 96));
  if ( (int)result >= 0 )
  {
LABEL_31:
    BugCheckParameter2 = (ULONG_PTR)(v9 + 32);
    sub_140287450((__int64)v9);
    v102 = *(_QWORD *)(a2 + 24);
    if ( v24 )
    {
      v27 = 1231315286;
      v26 = 8
          * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)v9 + 8LL) >> 6)
           + ((*(_DWORD *)(*(_QWORD *)v9 + 8LL) & 0x3F) != 0)
           + 21LL);
    }
    else
    {
      v26 = 136LL;
      v27 = 543449430;
    }
    v28 = sub_1402828F0(64, v26, v27);
    v29 = v28;
    if ( !v28 )
    {
      sub_14025E274((__int64)v9);
      return 3221225626LL;
    }
    if ( v99 )
      v17 |= 8u;
    v30 = v28[4] & 0xFBFFFFFF;
    *(_QWORD *)v28 = -2LL;
    *((_QWORD *)v28 + 1) = -2LL;
    *((_QWORD *)v28 + 2) = -2LL;
    v31 = 0;
    if ( a6 == 1 )
      v31 = 0x4000000;
    v32 = v31 | v30;
    v33 = *((_DWORD *)v29 + 12);
    *((_DWORD *)v29 + 16) = v32;
    v34 = v33 & 0xFFFFFF8F | 0x20;
    *((_DWORD *)v29 + 12) = v34;
    v35 = v34 ^ (v34 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x7F000;
    *((_DWORD *)v29 + 12) = v35;
    if ( a5 )
    {
      v36 = sub_1406FC03C(a5);
      v37 = *((_DWORD *)v29 + 16);
      *((_QWORD *)v29 + 16) = v36;
      LODWORD(v36) = v37 & 0xF7FFFFFF | (*(_DWORD *)(a5 + 60) >> 4) & 0x8000000;
      v35 = *((_DWORD *)v29 + 12);
      *((_DWORD *)v29 + 16) = v36;
    }
    *((_QWORD *)v29 + 5) = 0LL;
    v38 = v35 & 0xFFFFF07F | 0x80;
    *((_DWORD *)v29 + 12) = v38;
    if ( v17 < 0x400 )
    {
      *((_DWORD *)v29 + 12) = v38 | 0x380;
      if ( (*(_BYTE *)(v11 + 992) & 1) != 0 )
        *((_DWORD *)v29 + 16) |= 0x10000000u;
      *((_DWORD *)v29 + 13) ^= (*((_DWORD *)v29 + 13) ^ v16) & 0x7FFFFFFF;
      *((_BYTE *)v29 + 34) = v16 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v40 = *(_DWORD *)(a2 + 60);
    v109 = 0LL;
    v98 = 0;
    v101 = (__int64)CurrentThread;
    if ( (v40 & 1) == 0 || v107 == 0x200000 )
    {
      v41 = (unsigned __int64)Object + *a4;
      v106 = v41;
      if ( v107 == 0x200000 )
      {
        v102 = (*(_QWORD *)(a2 + 24) + 0x1FFFFFLL) & 0xFFFFFFFFFFE00000uLL;
        v77 = (*((_DWORD *)v29 + 13) ^ (v102 >> 12)) & 0x7FFFFFFF;
        *((_BYTE *)v29 + 34) = v102 >> 43;
        *((_DWORD *)v29 + 13) ^= v77;
        *((_DWORD *)v29 + 16) |= 0x1000000u;
        v78 = sub_140982DE4(v11, v29, 0LL, 0LL);
        if ( v78 < 0 )
        {
          v79 = (void *)*((_QWORD *)v29 + 16);
          if ( v79 )
            ObfDereferenceObject(v79);
          sub_14025E274((__int64)v9);
          ExFreePoolWithTag(v29, 0);
          return (unsigned int)v78;
        }
        CurrentThread = (struct _KTHREAD *)v101;
      }
    }
    else
    {
      v41 = *a3;
      v106 = *a3;
    }
    v112 = 0LL;
    if ( dword_140C533A0 )
    {
      v80 = *(_WORD *)(v111 + 48);
      if ( (v80 == -31132 || v80 == 332 || v80 == -21916)
        && v17 < 0x400
        && (v29[4] & 0x1000000) == 0
        && v102 < 0x7FFFFFFF
        && (*(_BYTE *)(v11 + 992) & 1) == 0
        && (v102 >> 12) + ((v102 & 0xFFF) != 0) == *(_DWORD *)(v105 + 8) )
      {
        if ( v102 + (unsigned int)dword_140C533A0 < v102 )
        {
          v81 = (void *)*((_QWORD *)v29 + 16);
          if ( v81 )
            ObfDereferenceObject(v81);
          sub_14025E274((__int64)v9);
          ExFreePoolWithTag(v29, 0);
          return 3221225503LL;
        }
        v102 += (unsigned int)dword_140C533A0;
      }
    }
    if ( (v29[3] & 0xF80) == 0x380
      && *(_QWORD *)(v11 + 1088)
      && (*(_DWORD *)(v11 + 2172) & 0x1000) == 0
      && v11 != qword_140D06A30
      && ((dword_140D3CA20 & 1) != 0 || (xmmword_140D06900[0] & 4) != 0) )
    {
      v17 |= 0x800u;
    }
    LODWORD(v118[8]) = 32;
    sub_14030B820((__int64)CurrentThread, v11);
    if ( (*(_DWORD *)(v11 + 1124) & 0x20) != 0 )
    {
      v44 = (__int64)v29;
      v51 = -1073741558;
      v52 = (__int64 *)a1;
LABEL_224:
      if ( (v17 & 0x100) != 0 )
      {
        v89 = sub_140287F30(v11);
        sub_1406DDA18(v52, v89);
      }
      if ( (v17 & 0x200) != 0 )
        sub_14058C0E4((__int64)v52);
      if ( (v17 & 0x80u) != 0 )
        sub_1406FC2F0(v52, v11, 0LL);
      sub_140281A58((__int64)CurrentThread, v11);
      if ( (v17 & 0x40) != 0 )
        sub_140595D80(v44, v118);
      if ( v44 )
      {
        if ( v107 == 0x200000 )
          sub_1407B97B0(v44, 0LL);
        v90 = *(void **)(v44 + 128);
        if ( v90 )
          ObfDereferenceObjectWithTag(v90, 0x63536D4Du);
        ExFreePoolWithTag((PVOID)v44, 0);
      }
      sub_14025E274((__int64)v52);
      return (unsigned int)v51;
    }
    v42 = v107;
    if ( (*(_DWORD *)(a2 + 60) & 1) != 0 && v107 != 0x200000 )
    {
      if ( !sub_1406F8804(v11, v41, v102, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        v44 = (__int64)v29;
        v51 = -1073741800;
        v52 = (__int64 *)a1;
        goto LABEL_224;
      }
LABEL_58:
      v44 = (__int64)v29;
      if ( (PVOID)(v106 - *a4) != Object )
      {
        v98 = 1073741827;
        if ( (v17 & 2) != 0 )
        {
          if ( (v17 & 8) != 0 )
            goto LABEL_131;
          v70 = sub_1402828F0(
                  64,
                  8
                * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)v9 + 8LL) >> 6)
                 + ((*(_DWORD *)(*(_QWORD *)v9 + 8LL) & 0x3F) != 0)
                 + 21LL),
                  0x49646156u);
          v71 = (__int64)v70;
          if ( v70 )
          {
            *v70 = *v29;
            v70[1] = v29[1];
            v70[2] = v29[2];
            v70[3] = v29[3];
            v70[4] = v29[4];
            v70[5] = v29[5];
            v70[6] = v29[6];
            v70[7] = v29[7];
            *((_QWORD *)v70 + 16) = *((_QWORD *)v29 + 16);
            ExFreePoolWithTag(v29, 0);
            v17 |= 8u;
            v44 = v71;
          }
          if ( (v17 & 8) != 0 )
LABEL_131:
            v98 = 1073741878;
        }
      }
      v100 = v106 >> 12;
      v45 = (v102 + v106 - 1) >> 12;
      sub_14030B420(v44, v106 >> 12);
      *(_DWORD *)(v44 + 28) = v45;
      v47 = (ULONG_PTR)(v9 + 32);
      *(_BYTE *)(v44 + 33) = BYTE4(v45);
      v49 = v9[43];
      v50 = *v48 >> 12;
      if ( v50 >= v49 )
      {
        do
        {
          v47 = *(_QWORD *)(v47 + 16);
          v50 -= v49;
          v49 = *(unsigned int *)(v47 + 44);
        }
        while ( v50 >= v49 );
        BugCheckParameter2 = v47;
      }
      *(_QWORD *)(v44 + 72) = v47;
      *(_QWORD *)(v44 + 80) = *(_QWORD *)(v47 + 8) + 8 * v50;
      *(_QWORD *)(v44 + 88) = *(_QWORD *)(v105 + 64) + 8 * (*(unsigned int *)(v105 + 8) - 1LL);
      if ( (v17 & 8) != 0 )
        sub_1406D0AD8(v44, v46);
      if ( *(_DWORD *)(a2 + 52) )
        *(_BYTE *)(*(_QWORD *)(v11 + 1680) + 340LL) = 1;
      if ( (v9[14] & 0x8000000) != 0 )
      {
        v76 = sub_140287F30(v11);
        v51 = sub_1406DDB48((__int64 *)v9, v76);
        if ( v51 < 0 )
          goto LABEL_166;
        v9 = (unsigned int *)a1;
        v17 |= 0x100u;
      }
      if ( (*(_DWORD *)(v44 + 64) & 0x10000000) != 0 )
      {
        v86 = *(unsigned int *)(v44 + 52);
        LODWORD(v86) = v86 & 0x7FFFFFFF;
        v87 = ((unsigned __int64)*(unsigned __int8 *)(v44 + 34) << 31) | v86;
        v88 = sub_140593E88(v11, v44, 0) + v87;
        *(_DWORD *)(v44 + 52) ^= (*(_DWORD *)(v44 + 52) ^ v88) & 0x7FFFFFFF;
        *(_BYTE *)(v44 + 34) = v88 >> 31;
        v118[1] = v101;
        sub_14030BA20(v44, v118, 0);
        v17 |= 0x40u;
      }
      v51 = sub_1406FC590(v9, v11, 0LL);
      if ( v51 >= 0 )
      {
        v17 |= 0x80u;
        v52 = (__int64 *)a1;
        v53 = sub_140287380(a1);
        if ( v53 )
        {
          if ( v53 == 2 )
          {
            v51 = sub_140286DE0((__int64 *)BugCheckParameter2, v54, 0x11u);
            if ( v51 < 0 )
              goto LABEL_223;
            v17 |= 0x200u;
          }
          v51 = sub_1407B88C0(v44, v11);
          if ( v51 >= 0 )
          {
            if ( (v17 & 8) != 0 )
              ++*(_QWORD *)(*(_QWORD *)(v11 + 1680) + 368LL);
            sub_14030E390(v44, v11, 0);
            v55 = 0LL;
            Objecta = 0LL;
            if ( v107 == 0x200000 )
            {
              sub_14030B7F0(v101, v44);
              v51 = sub_1405C2A4C(v44, 0, 0, 0LL);
              if ( v51 < 0 )
              {
                sub_140281A58(v101, v11);
                sub_14030EB64(v44);
LABEL_261:
                sub_1406F9060((unsigned int *)v44, 0LL, 0LL);
                v96 = *(_QWORD **)(a2 + 72);
                if ( v96 )
                  *v96 = 0LL;
                return (unsigned int)v51;
              }
              sub_140281C44(v101, v44);
            }
            v56 = v109;
            if ( v109 )
              sub_1406FCFF0(v100, v45);
            v57 = (v110 << 16) + v106;
            v106 = v57;
            *a3 = v57;
            if ( *(_BYTE *)(v111 + 50) && v120 != v108 )
            {
              v17 |= 0x1000u;
              if ( *(_QWORD *)(v11 + 1408) && *(_WORD *)(v111 + 48) == 0x8664 )
                v17 &= ~0x1000u;
              v58 = v98;
              if ( v17 >= 0x1000 )
                v58 = 1073741838;
              v98 = v58;
            }
            else
            {
              v58 = v98;
            }
            if ( (xmmword_140D06900[0] & 0x8000) != 0 )
            {
              sub_14096CDB8(v44, 1061LL, v56);
              v58 = v98;
            }
            v59 = v17 | 0x10;
            if ( (v59 & 0x400) != 0 )
            {
LABEL_93:
              if ( (v59 & 0x20) == 0 )
              {
                v66 = v101;
LABEL_109:
                if ( (v59 & 0x10) != 0 )
                  sub_140281A58(v66, v11);
                if ( (v59 & 0x400) == 0 && a5 && (*(_BYTE *)(v11 + 992) & 1) == 0 )
                  *(_DWORD *)(a2 + 60) |= 4u;
                return v98;
              }
              sub_14030B7F0(v101, v44);
              sub_140281A58(v101, v11);
              LOWORD(v59) = v59 & 0xFFEF;
              if ( (*(_DWORD *)(v44 + 64) & 0x10000000) != 0 )
              {
                sub_140593E88(v11, v44, 1);
                sub_140595D80(v44, v118);
                LOWORD(v59) = v59 & 0xFFBF;
              }
              if ( (v59 & 0x400) == 0 )
              {
                v64 = *(_DWORD *)(a2 + 120);
                if ( v64 )
                {
                  v51 = sub_1406F74A8(v44, 0LL, v64);
                  if ( v51 < 0 )
                    goto LABEL_259;
                }
              }
              if ( !*(_QWORD *)(a2 + 72) )
              {
                v65 = v112;
                goto LABEL_101;
              }
              v95 = *(_DWORD *)(a2 + 68);
              if ( v95 == 4 || (unsigned int)(v95 - 1) <= 1 || v95 == -2147483647 )
              {
                v51 = sub_1406A2588(v44, v106, *(_QWORD *)(a2 + 24), v95, 0, &v112);
                if ( v51 >= 0 )
                {
                  v65 = 0LL;
                  **(_QWORD **)(a2 + 72) = v112 ^ qword_140C50680 ^ v11;
LABEL_101:
                  if ( (v59 & 0x800) == 0
                    || (v65 = sub_1407B9190(v44, (_DWORD)v100 << 12, ((_DWORD)v45 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
                  {
                    if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
                      sub_140270A00(v44);
                    v66 = v101;
                    sub_140281C44(v101, v44);
                    if ( (v59 & 0x800) != 0 )
                    {
                      sub_1406F84B0(Objecta + 44, v11, (__int64)&v114, (__int64)Objecta);
                      ObfDereferenceObjectWithTag(Objecta, 0x63536D4Du);
                    }
                    if ( v65 )
                      MmUnsecureVirtualMemory((HANDLE)(v65 ^ qword_140C50680 ^ v11));
                    goto LABEL_109;
                  }
                  v55 = Objecta;
                  v51 = -1073741670;
                }
              }
              else
              {
                v51 = -1073741755;
              }
LABEL_259:
              sub_14030EB64(v44);
              if ( v55 )
                ObfDereferenceObjectWithTag(v55, 0x63536D4Du);
              goto LABEL_261;
            }
            if ( (NtGlobalFlag & 0x40000) == 0
              || (v91 = (unsigned int)(v58 - 1073741827), (unsigned int)v91 <= 0x33)
              && (v92 = 0x8000000000801LL, _bittest64(&v92, v91)) )
            {
              v60 = a1;
            }
            else
            {
              v61 = v105;
              if ( (*(_BYTE *)(v101 + 1384) & 0x20) != 0
                || (v93 = *(_WORD *)(v105 + 12), (v93 & 0x2000) != 0)
                || *(char *)(v105 + 14) >= 0 )
              {
                v60 = a1;
                goto LABEL_85;
              }
              v94 = v57;
              v60 = a1;
              *(_WORD *)(v105 + 12) = v93 | 0x2000;
              sub_14096CCF8(a1, v94, v11);
            }
            v61 = v105;
LABEL_85:
            if ( (v59 & 0x800) != 0 )
            {
              BYTE8(v114) = 3;
              if ( (*(_DWORD *)(v44 + 64) & 0x8000000) != 0 )
              {
                v63 = DWORD2(v114) & 0xFFF80FFF;
              }
              else
              {
                v62 = DWORD2(v114) & 0xFFFF0FFF | ((*(_BYTE *)(v61 + 15) & 0xF0) << 8);
                v63 = v62 ^ (v62 ^ (*(unsigned __int8 *)(v61 + 15) << 15)) & 0x70000;
              }
              DWORD2(v114) = v63 ^ ((unsigned __int16)v63 ^ (unsigned __int16)(v59 >> 1)) & 0x800;
              *(_QWORD *)&v115 = v106;
              *(_QWORD *)&v116 = *(_QWORD *)(a2 + 24);
              if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64(
                                             (volatile signed __int64 *)(v61 + 24),
                                             -1LL,
                                             -1LL) )
                DWORD2(v114) |= 0x80000u;
              DWORD2(v115) = 0;
              DWORD2(v116) = 0;
              v55 = (void *)sub_140281750(v60);
              Objecta = (unsigned __int16 *)v55;
              LOWORD(v59) = v59 | 0x20;
            }
            if ( *(_DWORD *)(a2 + 120)
              || (*(_DWORD *)(v44 + 64) & 0x10000000) != 0
              || *(_QWORD *)(a2 + 72)
              || (*(_DWORD *)(a2 + 64) & 2) != 0 )
            {
              LOWORD(v59) = v59 | 0x20;
            }
            goto LABEL_93;
          }
        }
        else
        {
          v51 = -1073740277;
        }
LABEL_223:
        CurrentThread = (struct _KTHREAD *)v101;
        goto LABEL_224;
      }
LABEL_166:
      v52 = (__int64 *)a1;
      goto LABEL_223;
    }
    v43 = v102;
    if ( v102 > 0x7FFFFFFF0000LL )
    {
      v44 = (__int64)v29;
      v51 = -1073741801;
      v52 = (__int64 *)a1;
      goto LABEL_224;
    }
    if ( (v17 & 1) == 0 )
    {
      if ( sub_1406F8804(v11, v41, v102, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
        goto LABEL_58;
      v43 = v102;
    }
    v67 = *(_QWORD *)(a2 + 8);
    v68 = 0LL;
    if ( (unsigned __int64)Object < 0x100000000LL && v67 >= 0x100000000LL && (*(_BYTE *)(v105 + 15) & 1) == 0 )
      v67 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v105 + 14) & 0x40) != 0 )
    {
      if ( !*(_QWORD *)(v11 + 1408) || (v75 = *(_WORD *)(v11 + 2412), v75 != 332) && v75 != 452 )
        v68 = 0x100000000LL;
    }
    if ( *(_QWORD *)a2 >= v67 )
    {
      v51 = -1073741801;
    }
    else
    {
      v51 = sub_1407B83C0(
              *(_DWORD *)(a2 + 40),
              *(_QWORD *)a2,
              v67,
              v43,
              v42,
              v68,
              (*((_DWORD *)v29 + 12) >> 7) & 0x1F,
              0,
              (__int64)&v109,
              (__int64)&v106);
      if ( v51 >= 0 )
      {
        v69 = v102;
LABEL_124:
        if ( v107 == 0x200000 )
        {
          if ( v69 - *(_QWORD *)(a2 + 24) >= 0x10000 )
            v110 = (unsigned int)sub_140363220(1) % ((v69 - *(_QWORD *)(a2 + 24)) >> 16);
          v83 = sub_1402EE0C8((__int64)v29, 16LL);
          *(_QWORD *)(v83 + 16) = v84 >> 12;
          *(_BYTE *)(v83 + 8) = v85;
        }
        v9 = (unsigned int *)a1;
        goto LABEL_58;
      }
    }
    v82 = *(_QWORD *)(a2 + 8);
    if ( v67 == v82 )
    {
      v69 = v102;
    }
    else
    {
      v97 = v68;
      v69 = v102;
      v51 = sub_1407B83C0(
              *(_DWORD *)(a2 + 40),
              *(_QWORD *)a2,
              v82,
              v102,
              v107,
              v97,
              (*((_DWORD *)v29 + 12) >> 7) & 0x1F,
              0,
              (__int64)&v109,
              (__int64)&v106);
    }
    v44 = (__int64)v29;
    if ( v51 < 0 )
      goto LABEL_166;
    goto LABEL_124;
  }
  return result;
}
