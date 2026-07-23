/*
 * XREFs of MiBuildMappedCluster @ 0x14021C0D0
 * Callers:
 *     MiGatherMappedPages @ 0x140297FB4 (MiGatherMappedPages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x1402F49E0 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402F4B68 (MiReleaseWriteInProgressCharges.c)
 *     MiReferencePageForModifiedWrite @ 0x140349F80 (MiReferencePageForModifiedWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiBuildMappedCluster(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // r9
  __int64 v6; // r13
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  __int64 *v16; // r14
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  __int64 result; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  ULONG_PTR v28; // rsi
  unsigned __int64 v29; // rax
  int v30; // ecx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 Pool; // rax
  __int64 v34; // rbx
  unsigned __int64 *v35; // rsi
  unsigned __int64 *v36; // r14
  __int64 v37; // rcx
  unsigned __int64 v38; // r12
  unsigned __int64 *v39; // r15
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rax
  ULONG_PTR v42; // r14
  int v43; // eax
  unsigned __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rsi
  unsigned __int64 v47; // rsi
  unsigned __int64 *v48; // r15
  ULONG_PTR v49; // rbx
  unsigned __int64 v50; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v54; // eax
  bool v55; // zf
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // r15
  __int64 v58; // r14
  unsigned __int64 v59; // r12
  ULONG_PTR v60; // rbx
  unsigned __int64 v61; // r15
  unsigned __int8 v62; // cl
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  unsigned __int64 v66; // [rsp+28h] [rbp-59h]
  __int64 v67; // [rsp+28h] [rbp-59h]
  __int64 v68; // [rsp+28h] [rbp-59h]
  unsigned __int64 v69; // [rsp+30h] [rbp-51h]
  unsigned __int64 *v70; // [rsp+30h] [rbp-51h]
  unsigned __int64 v71; // [rsp+38h] [rbp-49h]
  unsigned __int64 v72; // [rsp+40h] [rbp-41h]
  unsigned __int64 v73; // [rsp+48h] [rbp-39h]
  unsigned __int64 *v74; // [rsp+50h] [rbp-31h]
  __int64 v75; // [rsp+58h] [rbp-29h]
  unsigned __int64 v76; // [rsp+60h] [rbp-21h]
  int v77; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int64 v78; // [rsp+70h] [rbp-11h]
  unsigned __int64 *v79; // [rsp+78h] [rbp-9h]
  unsigned __int64 v80; // [rsp+80h] [rbp-1h]
  unsigned __int64 v81; // [rsp+88h] [rbp+7h]
  unsigned __int64 v82; // [rsp+90h] [rbp+Fh]
  __int64 v84; // [rsp+F0h] [rbp+6Fh] BYREF
  int v85; // [rsp+F8h] [rbp+77h]
  unsigned __int8 v86; // [rsp+100h] [rbp+7Fh] BYREF

  v85 = a3;
  v84 = a2;
  v4 = a2;
  v86 = 0;
  v5 = a1[5];
  v6 = a1[1];
  v7 = a1[2];
  v79 = (unsigned __int64 *)(a2 + 48);
  v74 = (unsigned __int64 *)(a2 + 48);
  v8 = v6 | 0x8000000000000000uLL;
  v80 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  v82 = v8;
  v9 = v8 & 0xFFFFFFFFFFFFF000uLL;
  v69 = v8;
  v75 = *(_QWORD *)(qword_140C673C8 + 8 * ((v5 >> 43) & 0x3FF));
  if ( qword_140C65B40 && (v7 & 0x10) == 0 )
    v7 &= ~qword_140C65B40;
  v10 = v7 >> 16;
  if ( v9 < *(_QWORD *)(v10 + 8) )
    v9 = *(_QWORD *)(v10 + 8);
  v11 = v9;
  if ( v9 < v8 - 120 )
    v11 = v8 - 120;
  v78 = v5 & 0xFFFFFFFFFFLL;
  v12 = MiMapPageInHyperSpaceWorker(v5 & 0xFFFFFFFFFFLL, &v86, 0x80000000);
  v66 = v12;
  v71 = v8;
  v81 = v8 & 0xFFF;
  v13 = v8;
  v14 = v81 + v12;
  if ( a3 && v8 > v9 )
  {
    do
    {
      v14 -= 8LL;
      if ( (*(_QWORD *)v14 & 0xC01LL) != 0x800 )
        break;
      v32 = ((*(_QWORD *)v14 & (unsigned __int64)~qword_140C65B40) >> 12) & 0xFFFFFFFFFFLL;
      if ( v32 > qword_140C65BA0
        || !_bittest64((const signed __int64 *)(48 * v32 - 0x21FFFFFFFFD8LL), 0x36u)
        || (*(_BYTE *)(48 * v32 - 0x220000000000LL + 34) & 0x10) == 0
        || *(_WORD *)(48 * v32 - 0x220000000000LL + 32)
        || v75 != *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(48 * v32 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)) )
      {
        break;
      }
      v8 -= 8LL;
      if ( v8 >= v11 )
        v13 = v8;
    }
    while ( v8 > v9 );
    v4 = v84;
    v71 = v13;
    v82 = v8;
  }
  v15 = *(unsigned int *)(v10 + 44);
  v16 = (__int64 *)(((unsigned __int16)v14 ^ (unsigned __int16)v13) & 0xFFF ^ v14);
  v17 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v17 > *(_QWORD *)(v10 + 8) + 8 * v15 )
    v17 = *(_QWORD *)(v10 + 8) + 8 * v15;
  v76 = v17;
  v18 = v17;
  if ( v17 > v13 + 128 )
    v18 = v13 + 128;
  v73 = v18;
  if ( !v85 )
  {
    v73 = v13 + 8;
    v17 = v13 + 8;
    v76 = v13 + 8;
  }
  v19 = v13;
  v72 = v13;
  v20 = 1;
  v85 = 1;
  if ( v13 < v17 )
  {
    v21 = v69;
    while ( v19 != v21 )
    {
      if ( v20 != 3 || (__int64)(((unsigned __int64)v74 - v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
      {
        v26 = *v16;
        if ( (*v16 & 0xC01) == 0x800 )
        {
          v27 = ((v26 & (unsigned __int64)~qword_140C65B40) >> 12) & 0xFFFFFFFFFFLL;
          if ( v27 > qword_140C65BA0 || !_bittest64((const signed __int64 *)(48 * v27 - 0x21FFFFFFFFD8LL), 0x36u) )
          {
            --v16;
            v19 = v72 - 8;
            goto LABEL_20;
          }
          v28 = 48 * v27 - 0x220000000000LL;
          v77 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v77);
            while ( *(__int64 *)(v28 + 24) < 0 );
          }
          if ( v26 != MI_READ_PTE_LOCK_FREE(v16) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            --v16;
            v12 = v66;
            v19 = v72 - 8;
            v21 = v69;
            goto LABEL_21;
          }
          if ( (*(_BYTE *)(v28 + 34) & 0x10) != 0
            && !*(_WORD *)(v28 + 32)
            && v75 == *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FFLL)) )
          {
            if ( v72 >= v73 )
              goto LABEL_40;
            if ( v66 )
            {
              MiUnmapPageInHyperSpaceWorker(v66, 2u);
              v85 = MiReferencePageForModifiedWrite(v28);
              v29 = MiMapPageInHyperSpaceWorker(v78, 0LL, 0x80000000);
              v30 = v85;
              v16 = (__int64 *)(v29 + ((unsigned __int16)v16 & 0xFFF));
              v66 = v29;
              v12 = v29;
            }
            else
            {
              v45 = MiReferencePageForModifiedWrite(v28);
              v12 = 0LL;
              v30 = v45;
              v85 = v45;
            }
            if ( v30 )
            {
              *v74++ = ((v26 & (unsigned __int64)~qword_140C65B40) >> 12) & 0xFFFFFFFFFFLL;
LABEL_40:
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v19 = v72;
              v12 = v66;
LABEL_20:
              v21 = v69;
              goto LABEL_21;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v12 = v66;
          }
        }
        v19 = v72;
      }
      if ( v12 )
        MiUnmapPageInHyperSpaceWorker(v12, v86);
      v31 = v69;
      if ( v19 >= v69 )
        goto LABEL_24;
      v46 = ((__int64)v74 - v4 - 48) >> 3;
      v68 = v46;
      if ( v46 )
      {
        if ( (unsigned __int64)v74 > v4 + 48 )
        {
          v47 = (unsigned __int64)v79;
          v48 = v74;
          do
          {
            v49 = 48 * *--v48 - 0x220000000000LL;
            v50 = (unsigned __int8)MiLockPageInline(v49);
            MiWriteCompletePfn(v49);
            _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (_DWORD)KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                && CurrentIrql <= 0xFu
                && (unsigned __int8)v50 <= 0xFu
                && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
                v55 = (v54 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v54;
                if ( v55 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v50);
          }
          while ( (unsigned __int64)v48 > v47 );
          v46 = v68;
          v8 = v82;
          v17 = v76;
          v74 = v48;
          v4 = v84;
        }
        MiReleaseWriteInProgressCharges(v75, v46, 1LL);
        v31 = v69;
      }
      v56 = v73;
      if ( v73 == v71 + 8 )
      {
        v17 = v31 + 8;
        v76 = v31 + 8;
        v73 = v31 + 8;
      }
      else
      {
        if ( v17 > v31 + 128 )
          v56 = v31 + 128;
        v73 = v56;
      }
      v71 = v31;
      v12 = MiMapPageInHyperSpaceWorker(v78, &v86, 0x80000000);
      v66 = v12;
      v16 = (__int64 *)(v12 + v81 - 8);
      v21 = v69;
      v19 = v69 - 8;
LABEL_21:
      v20 = v85;
      v19 += 8LL;
      ++v16;
      v72 = v19;
      if ( v19 >= v17 )
        goto LABEL_22;
    }
    *v74++ = v80;
    goto LABEL_20;
  }
LABEL_22:
  if ( v12 )
    MiUnmapPageInHyperSpaceWorker(v12, v86);
LABEL_24:
  v22 = v73;
  if ( v19 <= v73 )
    v22 = v19;
  v23 = (__int64)(v22 - v71) >> 3;
  if ( v85 == 3 || v19 <= v73 && v8 >= v71 )
    goto LABEL_29;
  Pool = MiAllocatePool(64LL, 8 * ((__int64)(v19 - v8) >> 3) + 48, 1700228429LL);
  v67 = Pool;
  v34 = Pool;
  if ( !Pool )
    goto LABEL_29;
  v35 = (unsigned __int64 *)(Pool + 48);
  v36 = v79;
  v70 = v79;
  v81 = Pool + 48;
  v37 = a1[5] & 0xFFFFFFFFFFLL;
  v85 = 1;
  v38 = MiMapPageInHyperSpaceWorker(v37, &v86, 0x80000000);
  v39 = (unsigned __int64 *)(v38 + (v8 & 0xFFF));
  while ( v8 < v72 )
  {
    if ( v8 < v73 && v8 >= v71 )
    {
      v44 = *v36++;
      v70 = v36;
      *v35 = v44;
      goto LABEL_75;
    }
    if ( v85 != 3 || (__int64)(((unsigned __int64)v35 - v34 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v40 = *v39;
      if ( (*v39 & 0xC01) == 0x800 )
      {
        v41 = ((v40 & ~qword_140C65B40) >> 12) & 0xFFFFFFFFFFLL;
        if ( v41 > qword_140C65BA0 || !_bittest64((const signed __int64 *)(48 * v41 - 0x21FFFFFFFFD8LL), 0x36u) )
          goto LABEL_76;
        v42 = 48 * v41 - 0x220000000000LL;
        LODWORD(v84) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v84);
          while ( *(__int64 *)(v42 + 24) < 0 );
        }
        if ( v40 != MI_READ_PTE_LOCK_FREE(v39) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v36 = v70;
          goto LABEL_76;
        }
        if ( (*(_BYTE *)(v42 + 34) & 0x10) != 0
          && !*(_WORD *)(v42 + 32)
          && v75 == *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v42 + 40) >> 43) & 0x3FFLL)) )
        {
          if ( v38 )
          {
            MiUnmapPageInHyperSpaceWorker(v38, 2u);
            v85 = MiReferencePageForModifiedWrite(v42);
            v38 = MiMapPageInHyperSpaceWorker(v78, 0LL, 0x80000000);
            v39 = (unsigned __int64 *)(v38 + ((unsigned __int16)v39 & 0xFFF));
            v43 = v85;
          }
          else
          {
            v43 = MiReferencePageForModifiedWrite(v42);
            v85 = v43;
          }
          if ( v43 )
          {
            *v35 = (v40 >> 12) & ((unsigned __int64)~qword_140C65B40 >> 12) & 0xFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v36 = v70;
LABEL_75:
            ++v39;
            v8 += 8LL;
            ++v35;
            goto LABEL_76;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v34 = v67;
    }
    if ( v38 )
      MiUnmapPageInHyperSpaceWorker(v38, v86);
    v57 = v71;
    if ( v8 >= v71 )
      goto LABEL_85;
    v58 = ((__int64)v35 - v34 - 48) >> 3;
    v80 = v58;
    if ( v58 )
    {
      v59 = v81;
      if ( (unsigned __int64)v35 > v81 )
      {
        do
        {
          v60 = 48 * *--v35 - 0x220000000000LL;
          v61 = (unsigned __int8)MiLockPageInline(v60);
          MiWriteCompletePfn(v60);
          _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v62 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v62 <= 0xFu && (unsigned __int8)v61 <= 0xFu && v62 >= 2u )
            {
              v63 = KeGetCurrentPrcb();
              v64 = v63->SchedulerAssist;
              v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
              v55 = (v65 & v64[5]) == 0;
              v64[5] &= v65;
              if ( v55 )
                KiRemoveSystemWorkPriorityKick(v63);
            }
          }
          __writecr8(v61);
        }
        while ( (unsigned __int64)v35 > v59 );
        v58 = v80;
        v57 = v71;
      }
      MiReleaseWriteInProgressCharges(v75, v58, 1LL);
    }
    v36 = v79;
    v8 = v57;
    v70 = v79;
    v38 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFFLL, &v86, 0x80000000);
    v39 = (unsigned __int64 *)(v38 + (v57 & 0xFFF));
LABEL_76:
    v34 = v67;
  }
  if ( v38 )
    MiUnmapPageInHyperSpaceWorker(v38, v86);
LABEL_85:
  v4 = v34;
  v23 = ((__int64)v35 - v34 - 48) >> 3;
LABEL_29:
  v24 = v23 << 12;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_WORD *)(v4 + 8) = 8 * ((v24 >> 12) + 6);
  *(_WORD *)(v4 + 10) = 2;
  result = v4;
  *(_QWORD *)(v4 + 40) = (unsigned int)v24;
  return result;
}
