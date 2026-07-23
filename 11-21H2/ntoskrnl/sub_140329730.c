/*
 * XREFs of sub_140329730 @ 0x140329730
 * Callers:
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_1403885EC @ 0x1403885EC (sub_1403885EC.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058B0C8 @ 0x14058B0C8 (sub_14058B0C8.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 * Callees:
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_1402394EC @ 0x1402394EC (sub_1402394EC.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_1402404A8 @ 0x1402404A8 (sub_1402404A8.c)
 *     sub_14026EF44 @ 0x14026EF44 (sub_14026EF44.c)
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287A8C @ 0x140287A8C (sub_140287A8C.c)
 *     sub_14028D2D8 @ 0x14028D2D8 (sub_14028D2D8.c)
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_14033E0D4 @ 0x14033E0D4 (sub_14033E0D4.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_140389084 @ 0x140389084 (sub_140389084.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140584530 @ 0x140584530 (sub_140584530.c)
 *     sub_140597FAC @ 0x140597FAC (sub_140597FAC.c)
 *     sub_1405980C8 @ 0x1405980C8 (sub_1405980C8.c)
 *     sub_1405983C0 @ 0x1405983C0 (sub_1405983C0.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 *     sub_14059EDEC @ 0x14059EDEC (sub_14059EDEC.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140329730(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int *a7)
{
  int v9; // ebx
  int v10; // edi
  __int64 v11; // r15
  struct _MDL *v12; // r13
  __int64 v13; // r8
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned int v16; // edi
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  ULONG_PTR v25; // rsi
  unsigned __int64 v26; // rbx
  char v27; // al
  unsigned int *p_ByteCount; // r14
  unsigned int v29; // ecx
  int v30; // r15d
  unsigned __int64 v31; // rbx
  ULONG_PTR *v32; // r10
  int v33; // eax
  BOOL v34; // r13d
  int v35; // r12d
  unsigned int v36; // r9d
  struct _KPRCB *v37; // rdx
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  int v40; // r15d
  int v41; // ecx
  char v42; // al
  unsigned int v43; // r8d
  unsigned int v44; // edx
  unsigned int ByteCount; // eax
  unsigned __int64 v46; // rsi
  __int64 v47; // r9
  __int64 v48; // r8
  unsigned int v49; // esi
  int v50; // eax
  __int64 v51; // r12
  __int64 result; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rsi
  int v55; // eax
  CSHORT MdlFlags; // ax
  __int64 *v57; // rax
  NTSTATUS v58; // ecx
  volatile LONG *v59; // rcx
  int v60; // eax
  __int64 v61; // rsi
  ULONG_PTR v62; // rax
  char *v63; // rax
  char *v64; // rdx
  char *v65; // rcx
  _QWORD *v66; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v69; // r8
  int v70; // eax
  bool v71; // zf
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  __int64 v74; // r9
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rax
  ULONG_PTR *v78; // r10
  unsigned __int64 v79; // r8
  struct _KPRCB *v80; // r9
  __int64 v81; // rdx
  signed __int32 v82; // eax
  __int64 v83; // rax
  int v84; // eax
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r9
  __int64 v87; // r8
  int v88; // eax
  int v89; // [rsp+44h] [rbp-204h]
  __int64 v90; // [rsp+48h] [rbp-200h]
  unsigned __int64 v91; // [rsp+50h] [rbp-1F8h]
  unsigned __int64 v92; // [rsp+58h] [rbp-1F0h]
  __int64 v93; // [rsp+68h] [rbp-1E0h]
  int v94; // [rsp+70h] [rbp-1D8h]
  unsigned int *MemoryDescriptorList; // [rsp+78h] [rbp-1D0h]
  int v96; // [rsp+80h] [rbp-1C8h]
  unsigned int v97; // [rsp+84h] [rbp-1C4h]
  char *v98; // [rsp+88h] [rbp-1C0h]
  __int64 v99; // [rsp+90h] [rbp-1B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-1B0h]
  __int64 v101; // [rsp+A8h] [rbp-1A0h]
  PVOID P; // [rsp+B0h] [rbp-198h]
  unsigned __int64 v103; // [rsp+B8h] [rbp-190h]
  int v105; // [rsp+C8h] [rbp-180h] BYREF
  __int64 v106; // [rsp+D0h] [rbp-178h]
  __int64 Object; // [rsp+D8h] [rbp-170h] BYREF
  _QWORD v108[2]; // [rsp+E0h] [rbp-168h] BYREF
  ULONG_PTR *v109; // [rsp+F0h] [rbp-158h]
  unsigned __int64 v110; // [rsp+F8h] [rbp-150h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-148h]
  ULONG_PTR BugCheckParameter1; // [rsp+108h] [rbp-140h]
  unsigned __int64 v113; // [rsp+110h] [rbp-138h]
  PEX_SPIN_LOCK SpinLock; // [rsp+118h] [rbp-130h]
  __int64 v115; // [rsp+120h] [rbp-128h] BYREF
  __int64 *v116; // [rsp+128h] [rbp-120h]
  __int64 v117; // [rsp+130h] [rbp-118h]
  _BYTE v118[192]; // [rsp+140h] [rbp-108h] BYREF

  v116 = a3;
  v117 = a2;
  BugCheckParameter1 = a1;
  memset(v118, 0, 0xB8uLL);
  v9 = a6;
  v10 = 0;
  if ( (a6 & 2) == 0 )
    v10 = 2;
  if ( a5 )
  {
    v9 = a6 | 4;
    a6 |= 4u;
  }
  v11 = *a3;
  v12 = (struct _MDL *)v118;
  P = 0LL;
  v98 = 0LL;
  MemoryDescriptorList = (unsigned int *)v118;
  v99 = *a3;
  if ( (*(_BYTE *)(*a3 + 62) & 0xC) != 0 )
  {
    v9 &= ~4u;
    a6 = v9;
  }
  if ( (v9 & 4) == 0 )
    goto LABEL_8;
  v63 = (char *)sub_1402828F0(64, 0xA00uLL, 0x61466D4Du);
  v64 = v63;
  P = v63;
  if ( a5 )
  {
    *(_QWORD *)(a5 + 40) = v63;
    if ( !v63 )
      return 3221225626LL;
  }
  else if ( !v63 )
  {
    goto LABEL_8;
  }
  *((_WORD *)v63 + 24) = 0;
  v65 = v63 + 48;
  v63[50] = 6;
  v12 = (struct _MDL *)(v63 + 80);
  v98 = v63;
  *((_DWORD *)v63 + 13) = 0;
  v66 = v63 + 56;
  v66[1] = v66;
  *v66 = v66;
  *(_DWORD *)v64 = 0;
  *((_QWORD *)v64 + 2) = 0LL;
  *((_QWORD *)v64 + 5) = a5;
  *((_QWORD *)v64 + 4) = v11;
  *((_QWORD *)v64 + 9) = v12;
  *((_QWORD *)v64 + 264) = v65;
  *((_WORD *)v64 + 156) = 0;
  v64[314] = 6;
  *((_DWORD *)v64 + 79) = 0;
  *((_QWORD *)v64 + 41) = v64 + 320;
  *((_QWORD *)v64 + 40) = v64 + 320;
  *((_QWORD *)v64 + 42) = v64 + 344;
  *((_DWORD *)v64 + 66) = 0;
  *((_QWORD *)v64 + 35) = 0LL;
  *((_QWORD *)v64 + 38) = a5;
  *((_QWORD *)v64 + 37) = v11;
  *((_QWORD *)v64 + 265) = v64 + 312;
  *((_WORD *)v64 + 288) = 0;
  v64[578] = 6;
  *((_DWORD *)v64 + 145) = 0;
  *((_QWORD *)v64 + 74) = v64 + 584;
  *((_QWORD *)v64 + 73) = v64 + 584;
  *((_QWORD *)v64 + 75) = v64 + 608;
  *((_DWORD *)v64 + 132) = 0;
  *((_QWORD *)v64 + 68) = 0LL;
  *((_QWORD *)v64 + 71) = a5;
  *((_QWORD *)v64 + 70) = v11;
  *((_QWORD *)v64 + 266) = v64 + 576;
  *((_WORD *)v64 + 420) = 0;
  v64[842] = 6;
  *((_DWORD *)v64 + 211) = 0;
  *((_QWORD *)v64 + 107) = v64 + 848;
  *((_QWORD *)v64 + 106) = v64 + 848;
  *((_QWORD *)v64 + 108) = v64 + 872;
  *((_DWORD *)v64 + 198) = 0;
  *((_QWORD *)v64 + 101) = 0LL;
  *((_QWORD *)v64 + 104) = a5;
  *((_QWORD *)v64 + 103) = v11;
  *((_QWORD *)v64 + 267) = v64 + 840;
  *((_WORD *)v64 + 552) = 0;
  v64[1106] = 6;
  *((_DWORD *)v64 + 277) = 0;
  *((_QWORD *)v64 + 140) = v64 + 1112;
  *((_QWORD *)v64 + 139) = v64 + 1112;
  *((_QWORD *)v64 + 141) = v64 + 1136;
  *((_DWORD *)v64 + 264) = 0;
  *((_QWORD *)v64 + 134) = 0LL;
  *((_QWORD *)v64 + 137) = a5;
  *((_QWORD *)v64 + 136) = v11;
  *((_QWORD *)v64 + 268) = v64 + 1104;
  *((_WORD *)v64 + 684) = 0;
  v64[1370] = 6;
  *((_DWORD *)v64 + 343) = 0;
  *((_QWORD *)v64 + 173) = v64 + 1376;
  *((_QWORD *)v64 + 172) = v64 + 1376;
  *((_DWORD *)v64 + 330) = 0;
  MemoryDescriptorList = (unsigned int *)v12;
  *((_QWORD *)v64 + 167) = 0LL;
  *((_QWORD *)v64 + 174) = v64 + 1400;
  *((_QWORD *)v64 + 170) = a5;
  *((_QWORD *)v64 + 169) = v11;
  *((_QWORD *)v64 + 269) = v64 + 1368;
  *((_WORD *)v64 + 816) = 0;
  v64[1634] = 6;
  *((_DWORD *)v64 + 409) = 0;
  *((_QWORD *)v64 + 206) = v64 + 1640;
  *((_QWORD *)v64 + 205) = v64 + 1640;
  *((_QWORD *)v64 + 207) = v64 + 1664;
  *((_DWORD *)v64 + 396) = 0;
  *((_QWORD *)v64 + 200) = 0LL;
  *((_QWORD *)v64 + 203) = a5;
  *((_QWORD *)v64 + 202) = v11;
  *((_QWORD *)v64 + 270) = v64 + 1632;
  *((_WORD *)v64 + 948) = 0;
  v64[1898] = 6;
  *((_DWORD *)v64 + 475) = 0;
  *((_QWORD *)v64 + 239) = v64 + 1904;
  *((_QWORD *)v64 + 238) = v64 + 1904;
  *((_QWORD *)v64 + 240) = v64 + 1928;
  *((_DWORD *)v64 + 462) = 0;
  *((_QWORD *)v64 + 233) = 0LL;
  *((_QWORD *)v64 + 236) = a5;
  *((_QWORD *)v64 + 235) = v11;
  *((_QWORD *)v64 + 271) = v64 + 1896;
LABEL_8:
  v113 = a2 + 8;
  v103 = sub_14027A794(v11, 1666411853LL);
  CurrentThread = KeGetCurrentThread();
  v96 = sub_14033D760(CurrentThread);
  if ( v96 < 2
    && (*(_DWORD *)(v13 + 116) & 0x400) == 0
    && *(_BYTE *)(v13 + 562) != 1
    && *((_QWORD *)KeGetCurrentThread() + 162) != 2LL )
  {
    v96 = 2;
  }
  if ( v9 < 0 )
    v10 |= 0x10u;
  BugCheckParameter2 = (ULONG_PTR)a3;
  *a7 = 0;
  v14 = (__int64)a3;
  v15 = BugCheckParameter1;
  v16 = v10 | 0x20;
  *((_QWORD *)a7 + 1) = 0LL;
  v12->Next = 0LL;
  v12->MdlFlags = 0;
  v12->StartVa = 0LL;
  *(_QWORD *)&v12->ByteCount = 0LL;
  --*(_WORD *)(v13 + 484);
  v89 = 16;
  v94 = 0;
  v93 = 0LL;
  v91 = v15;
  SpinLock = (PEX_SPIN_LOCK)(v11 + 72);
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
  if ( !*(_QWORD *)(v11 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v69 = *((_QWORD *)CurrentPrcb + 4375);
          v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v71 = (v70 & *(_DWORD *)(v69 + 20)) == 0;
          *(_DWORD *)(v69 + 20) &= v70;
          if ( v71 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      if ( a5 )
        *(_QWORD *)(a5 + 40) = 0LL;
    }
    sub_140230680((signed __int64 *)(v11 + 64), v103, 0x63536D4Du);
    sub_1402AC800((__int64)CurrentThread);
    result = 0LL;
    *a7 = 0;
    *((_QWORD *)a7 + 1) = 0LL;
    return result;
  }
  v18 = *(_QWORD *)(v11 + 120);
  v106 = 8 * v18;
  if ( 8 * v18 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v18 + 32)) <= 1 )
    __fastfail(0xEu);
  v101 = 0LL;
  v19 = a4;
  while ( 1 )
  {
LABEL_14:
    if ( v14 == v19 )
    {
      v20 = v113;
    }
    else
    {
      v20 = *(_QWORD *)(v14 + 8) + 8LL * (*(_DWORD *)(v14 + 44) - (*(_DWORD *)(v14 + 52) & 0x3FFFFFFFu));
      v19 = a4;
    }
    v92 = v20;
    if ( !v15 )
    {
      v15 = *(_QWORD *)(v14 + 8);
      v91 = v15;
    }
    if ( *(_DWORD *)(v14 + 104) && *(_QWORD *)(v14 + 8) )
      break;
    v51 = ((__int64)(v20 - v15) >> 3 << 12) + v93;
    v62 = *(_QWORD *)(v14 + 16);
    v93 = v51;
    if ( !v62 )
    {
      if ( v20 == *(_QWORD *)(v14 + 8) + 8LL * (*(_DWORD *)(v14 + 44) - (*(_DWORD *)(v14 + 52) & 0x3FFFFFFFu)) )
      {
        v84 = sub_14033E0D4(v14) & 0xFFF;
        if ( v84 )
          v51 -= (unsigned int)(4096 - v84);
      }
      goto LABEL_87;
    }
    if ( v19 == v14 )
      goto LABEL_87;
    v15 = *(_QWORD *)(v62 + 8);
    v14 = *(_QWORD *)(v14 + 16);
    v91 = v15;
    BugCheckParameter2 = v62;
  }
  sub_140286EC0((_QWORD *)v14, 0);
  if ( (*(_BYTE *)(v14 + 34) & 8) != 0 )
    sub_14026EF44(v14);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v72 = KeGetCurrentIrql();
      if ( v72 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v72 >= 2u )
      {
        v73 = KeGetCurrentPrcb();
        v74 = *((_QWORD *)v73 + 4375);
        v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v71 = (v75 & *(_DWORD *)(v74 + 20)) == 0;
        *(_DWORD *)(v74 + 20) &= v75;
        if ( v71 )
          sub_140418E4C(v73);
      }
    }
  }
  __writecr8((unsigned __int8)v17);
  v110 = v15;
  if ( v15 >= v20 )
    goto LABEL_82;
  while ( 2 )
  {
    v90 = sub_140337B00(v15);
    if ( !v90 )
    {
      p_ByteCount = &v12->ByteCount;
      v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v91 = v15;
      if ( !v12->ByteCount )
        goto LABEL_68;
      v46 = v92;
      goto LABEL_98;
    }
    v48 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)v15;
        v22 = *(_QWORD *)v15;
        if ( (*(_QWORD *)v15 & 1) != 0 )
          goto LABEL_33;
        if ( (*(_QWORD *)v15 & 0xC00LL) != 0x800 )
          goto LABEL_70;
        if ( !v21 || !qword_140C50780 || (v21 & qword_140C50780) != 0 )
        {
          v22 = *(_QWORD *)v15;
          if ( qword_140C50780 && (v21 & 0x10) == 0 )
            v22 = v21 & ~qword_140C50780;
LABEL_33:
          v23 = (v22 >> 12) & 0xFFFFFFFFFFLL;
          if ( v23 <= qword_140C50840 )
          {
            v24 = 6 * v23;
            if ( _bittest64((const signed __int64 *)(48 * v23 - 0x21FFFFFFFFD8LL), 0x36u) )
              break;
          }
        }
      }
      v25 = 48 * v23 - 0x220000000000LL;
      v105 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v105, v24, v48, v47);
          while ( *(__int64 *)(v25 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) );
        v48 = 0LL;
      }
      if ( *(_QWORD *)v15 == v21 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
      v25 = sub_14059A31C(v25, 0LL);
    if ( !v25 )
    {
LABEL_70:
      ByteCount = v12->ByteCount;
      p_ByteCount = &v12->ByteCount;
      if ( ByteCount )
        v16 |= 4u;
      goto LABEL_66;
    }
    v26 = *(_QWORD *)v15;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL
      && v15 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v26 & 1) != 0
      && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
    {
      v76 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v76 )
      {
        v77 = *(_QWORD *)(v76 + 8 * ((v15 >> 3) & 0x1FF));
        if ( (v77 & 0x20) != 0 )
          LOBYTE(v26) = v26 | 0x20;
        if ( (v77 & 0x42) != 0 )
          LOBYTE(v26) = v26 | 0x42;
      }
    }
    v27 = *(_BYTE *)(v25 + 34);
    p_ByteCount = &v12->ByteCount;
    if ( (v27 & 8) != 0 )
    {
      if ( *p_ByteCount )
        goto LABEL_140;
      if ( (v16 & 2) != 0 )
      {
        sub_140389084(v25, v11, v90, 17LL);
        goto LABEL_68;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 = v92;
      v16 |= 8u;
    }
    else
    {
      if ( (v27 & 0x10) != 0 )
      {
        v29 = *p_ByteCount;
        if ( (v27 & 0x20) != 0 )
        {
          if ( !v29 )
          {
            sub_140597FAC(v25, v90, 17LL);
            goto LABEL_68;
          }
LABEL_140:
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v46 = v92;
          goto LABEL_98;
        }
        v30 = 0;
        if ( !v29 )
        {
          v30 = 2;
          ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
          v59 = SpinLock;
          ++*(_DWORD *)(v99 + 76);
          ExReleaseSpinLockExclusiveFromDpcLevel(v59);
          v12->Next = 0LL;
          v12->MdlFlags = 0;
          v12->StartVa = 0LL;
          *p_ByteCount = 0;
          v12->ByteOffset = v89;
        }
        v31 = v26 & 1;
        v32 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL));
        v33 = *(_DWORD *)(v25 + 16);
        v109 = v32;
        v34 = (v33 & 0x400) != 0LL;
        v35 = v30 & 2;
        v36 = 4;
        if ( !v31 )
          v35 = v30;
        if ( !v35 )
          v36 = 8;
        v97 = v36;
        if ( v32 == &StartContext )
        {
          v37 = KeGetCurrentPrcb();
          v38 = *((_DWORD *)v37 + 8615);
          if ( v38 )
          {
            while ( v38 != -1 )
            {
              v39 = v38;
              v38 = _InterlockedCompareExchange((volatile signed __int32 *)v37 + 8615, v38 - 1, v38);
              if ( v39 == v38 )
              {
                v40 = 1;
                goto LABEL_56;
              }
              if ( !v38 )
                break;
            }
          }
        }
        v40 = sub_14028DC40((__int64)v32, 1uLL, (unsigned int)-(v35 != 0));
        if ( !v40 )
          goto LABEL_202;
        v36 = v97;
        v32 = v109;
LABEL_56:
        v41 = v34;
        if ( !v35 )
          v41 = v34;
        if ( v41 && !(unsigned int)sub_14032A4B0(v32, 1LL, v36) )
        {
          v78 = v109;
          v79 = 1LL;
          if ( v109 != &StartContext )
            goto LABEL_201;
          v80 = KeGetCurrentPrcb();
          v81 = *((int *)v80 + 8615);
          if ( (_DWORD)v81 == -1 )
            goto LABEL_201;
          if ( (unsigned __int64)(v81 + 1) <= 0x100 )
          {
            do
            {
              v82 = _InterlockedCompareExchange((volatile signed __int32 *)v80 + 8615, v81 + 1, v81);
              v71 = (_DWORD)v81 == v82;
              LODWORD(v81) = v82;
              if ( v71 )
                goto LABEL_202;
            }
            while ( v82 != -1 && (unsigned __int64)(v82 + 1LL) <= 0x100 );
          }
          if ( (int)v81 > 192
            && (_DWORD)v81 == _InterlockedCompareExchange((volatile signed __int32 *)v80 + 8615, 192, v81) )
          {
            v79 = (int)v81 - 192 + 1LL;
          }
          if ( v79 )
LABEL_201:
            _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 2120, v79);
LABEL_202:
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          sub_140334790(v90, 17LL);
          v15 = v91;
          v12 = (struct _MDL *)MemoryDescriptorList;
          v46 = v92;
          goto LABEL_98;
        }
        if ( !v31 )
        {
          sub_140326870(v25, 0);
          *(_QWORD *)(v25 + 24) &= 0xC000000000000000uLL;
        }
        v42 = *(_BYTE *)(v25 + 34);
        ++*(_WORD *)(v25 + 32);
        *(_BYTE *)(v25 + 34) = v42 | 8;
        *(_BYTE *)(v25 + 34) &= ~0x10u;
        if ( (*(_DWORD *)(v25 + 16) & 0x400LL) == 0 && (sub_140313B20(v25, 1, 0LL) & 0x10) != 0 )
          sub_14023CC50(v25, 28);
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 = (struct _MDL *)MemoryDescriptorList;
        *(_QWORD *)&MemoryDescriptorList[2 * *p_ByteCount + 12] = 0xAAAAAAAAAAAAAAABuLL
                                                                * ((__int64)(v25 + 0x220000000000LL) >> 4);
        v43 = MemoryDescriptorList[11];
        v44 = *p_ByteCount + 1;
        *p_ByteCount = v44;
        if ( v40 == 3 && (v44 >= 0x10 || (*((_DWORD *)KeGetCurrentThread() + 345) & 2) == 0) )
        {
          sub_140334790(v90, 17LL);
          v46 = v92;
          v15 = v91 + 8;
          v91 += 8LL;
          goto LABEL_98;
        }
        if ( v44 != v43 )
        {
          v15 = v91;
          ByteCount = v44;
          goto LABEL_66;
        }
        sub_140334790(v90, 17LL);
        if ( v89 == 1 || v91 + 8 >= v92 )
        {
          v46 = v92;
          v15 = v91 + 8;
          v91 += 8LL;
          goto LABEL_98;
        }
        v61 = sub_1402404A8(MemoryDescriptorList, (unsigned int)((__int64)(v92 - v91) >> 3) + v89 - 1);
        if ( !v61 )
        {
          v15 = v91 + 8;
          v46 = v92;
          v89 = MemoryDescriptorList[11];
          v91 += 8LL;
          goto LABEL_98;
        }
        if ( MemoryDescriptorList != (unsigned int *)v118
          && (!v98 || MemoryDescriptorList != (unsigned int *)(v98 + 80)) )
        {
          ExFreePoolWithTag(MemoryDescriptorList, 0);
        }
        MemoryDescriptorList = (unsigned int *)v61;
        v12 = (struct _MDL *)v61;
        if ( v98 )
          *((_QWORD *)v98 + 9) = v61;
        v15 = v91 + 8;
        v89 = *(_DWORD *)(v61 + 44);
        v91 += 8LL;
LABEL_68:
        v11 = v99;
        if ( v15 >= v92 )
          break;
        continue;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ByteCount = *p_ByteCount;
      if ( *p_ByteCount )
        v16 |= 4u;
LABEL_66:
      v46 = v92;
      v15 += 8LL;
      v91 = v15;
      if ( (v16 & 4) == 0 && (v15 != v92 || !ByteCount) )
        goto LABEL_68;
LABEL_98:
      v16 &= ~4u;
      *p_ByteCount <<= 12;
      v53 = sub_1402394EC((__int64)v12, BugCheckParameter2, a6);
      if ( v98 )
      {
        v83 = sub_1405980C8(v103, (_DWORD)v98, (_DWORD)P, a5, v53, (a6 >> 2) & 4, v96, v106);
        v98 = (char *)v83;
        if ( !v83 )
        {
          v11 = v99;
          v16 = v16 & 0xFFFFFFDE | 1;
          v15 = v46;
          break;
        }
        v12 = *(struct _MDL **)(v83 + 72);
        v89 = 16;
        goto LABEL_131;
      }
      v11 = v99;
      v54 = *(_QWORD *)(48 * (__int64)v12[1].Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
      if ( (*(_BYTE *)(v99 + 62) & 0xC) != 0 )
      {
        sub_14059EDEC(6 * (__int64)v12[1].Next, v12, v53);
      }
      else
      {
        v108[1] = v108;
        v108[0] = v108;
        v115 = v53;
        Object = 393216LL;
        v55 = sub_140340130(
                v103,
                (_DWORD)v12,
                (unsigned int)&v115,
                (unsigned int)&Object,
                (a6 >> 2) & 4,
                v106,
                (__int64)a7);
        if ( v55 < 0 )
          *a7 = v55;
        else
          KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      }
      MdlFlags = v12->MdlFlags;
      if ( (MdlFlags & 0x200) != 0 )
      {
        sub_140584530(v12);
        MdlFlags = v12->MdlFlags;
      }
      if ( (MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v12->MappedSystemVa, v12);
      sub_140334830(v12, a7);
      v57 = (__int64 *)sub_140287A8C(v99, 0);
      if ( v57 )
        sub_1402879F8(v57);
      v58 = *a7;
      if ( *a7 >= 0 )
      {
        v94 = 0;
        if ( v12 == (struct _MDL *)v118 )
        {
LABEL_110:
          v12->ByteCount = 0;
          goto LABEL_68;
        }
        v89 = 16;
        ExFreePoolWithTag(v12, 0);
        v12 = (struct _MDL *)v118;
LABEL_131:
        MemoryDescriptorList = (unsigned int *)v12;
        goto LABEL_110;
      }
      v91 = v54;
      v15 = v54;
      if ( v58 == -1073741740 && (v16 & 0x10) != 0 )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Interval);
        goto LABEL_222;
      }
      v49 = *p_ByteCount;
      if ( !sub_14028D2D8(v58, *p_ByteCount) )
        goto LABEL_79;
      if ( (--v94 & 0x1F) != 0 )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14000EEA8);
        goto LABEL_222;
      }
      if ( v89 == 1 || v49 <= 0x1000 )
      {
LABEL_79:
        v50 = 0;
      }
      else
      {
        v89 = 1;
LABEL_222:
        *a7 = 0;
        v50 = 32;
      }
      v16 = v50 | v16 & 0xFFFFFFDF;
      if ( v12 != (struct _MDL *)v118 )
      {
        if ( v89 != 1 )
          v89 = 16;
        ExFreePoolWithTag(v12, 0);
        v12 = (struct _MDL *)v118;
        MemoryDescriptorList = (unsigned int *)v118;
      }
      v12->ByteCount = 0;
      if ( (v16 & 0x20) != 0 )
        goto LABEL_68;
    }
    break;
  }
LABEL_82:
  v93 += (__int64)(v15 - v110) >> 3 << 12;
  LOBYTE(v17) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
  if ( *(_QWORD *)(BugCheckParameter2 + 16)
    || v15 != *(_QWORD *)(BugCheckParameter2 + 8)
            + 8LL * (*(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu)) )
  {
    v51 = v93;
  }
  else
  {
    v51 = v93;
    v60 = sub_14033E0D4(BugCheckParameter2) & 0xFFF;
    if ( v60 )
    {
      v51 = v93 - (unsigned int)(4096 - v60);
      v93 = v51;
    }
  }
  v101 += sub_1402869C0((_QWORD *)BugCheckParameter2, 0);
  if ( !*(_QWORD *)(BugCheckParameter2 + 96) && (*(_BYTE *)(BugCheckParameter2 + 34) & 1) == 0 )
    v101 += sub_140220AAC(BugCheckParameter2);
  if ( (v16 & 0x28) == 0x20 )
  {
    v19 = a4;
    if ( BugCheckParameter2 != a4 )
    {
      v14 = *(_QWORD *)(BugCheckParameter2 + 16);
      BugCheckParameter2 = v14;
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 8);
        v91 = v15;
        goto LABEL_14;
      }
    }
  }
LABEL_87:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v85 = KeGetCurrentIrql();
      if ( v85 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v85 >= 2u )
      {
        v86 = KeGetCurrentPrcb();
        v87 = *((_QWORD *)v86 + 4375);
        v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v71 = (v88 & *(_DWORD *)(v87 + 20)) == 0;
        *(_DWORD *)(v87 + 20) &= v88;
        if ( v71 )
          sub_140418E4C(v86);
      }
    }
  }
  __writecr8((unsigned __int8)v17);
  if ( P && !a5 )
  {
    if ( (int)sub_1405983C0(P) < 0 )
      LOBYTE(v16) = v16 | 1;
    ExFreePoolWithTag(P, 0);
  }
  sub_140230680((signed __int64 *)(v11 + 64), v103, 0x63536D4Du);
  if ( v101 )
    sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF)), 1LL, v101);
  if ( v106 )
    sub_140366814(v106);
  sub_1402AC800((__int64)CurrentThread);
  if ( (v16 & 1) != 0 )
    return sub_140329730(BugCheckParameter1, v117, v116, a4, a5, a6 & 0xFFFFFFFB, a7);
  if ( (v16 & 8) != 0 )
  {
    result = 3221226547LL;
    *a7 = -1073740749;
  }
  else
  {
    result = (unsigned int)*a7;
  }
  *((_QWORD *)a7 + 1) = v51;
  return result;
}
