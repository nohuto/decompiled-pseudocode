/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x1402DEDD0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  _QWORD *v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  bool v16; // r11
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r15
  unsigned int v20; // r15d
  unsigned int v21; // edx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r10
  unsigned __int8 CurrentIrql; // r15
  __int64 v26; // rax
  signed __int64 v27; // rax
  signed __int64 v28; // rax
  char v29; // al
  _DWORD *SchedulerAssist; // r8
  __int64 v31; // r10
  int v32; // edx
  bool v33; // zf
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 **Address; // rbp
  unsigned int v37; // edx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v39; // rcx
  signed __int64 v40; // rdx
  unsigned __int8 v41; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v43; // r9
  int v44; // eax
  char v46; // [rsp+20h] [rbp-D8h]
  __int64 v47; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v48; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C0h]
  int v50; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B0h]
  __int64 v52; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-A0h]
  __int128 v54; // [rsp+60h] [rbp-98h]
  __int128 v55; // [rsp+70h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-78h]
  signed __int64 v57; // [rsp+88h] [rbp-70h]
  __int128 v58; // [rsp+90h] [rbp-68h]
  __int128 v59; // [rsp+A0h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-48h]
  signed __int64 v61; // [rsp+B8h] [rbp-40h]
  unsigned int v63; // [rsp+108h] [rbp+10h]

  v6 = 0LL;
  v51 = 0LL;
  v7 = 0LL;
  v47 = 0x3FFFFFFFFFLL;
  v9 = a2;
  v10 = (unsigned __int64)&a2[a3];
  v11 = a1;
  v53 = v10;
  v12 = 0x3FFFFFFFFFLL;
  if ( (unsigned __int64)a2 < v10 )
  {
    v13 = 1;
    v48 = 0xFFFFFF0000000000uLL;
    do
    {
      LOBYTE(v10) = 0;
      v14 = 48LL * *v9 - 0x220000000000LL;
      if ( v14 != qword_140C69700 )
      {
        LOBYTE(v10) = *(_BYTE *)(v14 + 34) & 7;
        if ( (_BYTE)v10 != 7 || *(_QWORD *)(v14 + 8) != -3LL )
        {
          v15 = *(_QWORD *)a4;
          v16 = (a6 & 0x40) != 0;
          if ( (a6 & 0x40) != 0 )
          {
            v33 = !MiIsPrototypePteVadLookup(v15);
            v34 = v15;
            if ( v33 )
            {
              if ( qword_140C65B40 && (v15 & 0x10) == 0 )
                v34 = v15 & ~qword_140C65B40;
              v34 = *(_QWORD *)(48 * ((*(_QWORD *)(v34 >> 16) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16);
            }
            *(_QWORD *)(v14 + 16) = MiSwizzleInvalidPte(32LL * (MmMakeProtectNotWriteCopy[((unsigned __int64)v34 >> 5) & 0x1F] & 0x1F));
            v46 = v21;
          }
          else
          {
            if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
            {
              v17 = *(_QWORD *)a4;
              v18 = *(_QWORD *)a4;
            }
            else
            {
              v35 = *(_QWORD *)a4;
              if ( qword_140C65B40 && (v15 & 0x10) == 0 )
                v35 = v15 & ~qword_140C65B40;
              v17 = *(_QWORD *)(48 * ((v35 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16);
              v18 = v17;
            }
            v19 = v17 >> 5;
            *(_QWORD *)(v14 + 16) = v18;
            if ( (a6 & 0x10) != 0 )
              *(_QWORD *)(v14 + 40) |= 0x8000000000000000uLL;
            v20 = v19 & 0x1F;
            v46 = v20;
            v21 = v20;
            if ( v20 == 24 )
            {
              v46 = 24;
              if ( v11 <= 0x7FFFFFFEFFFFLL )
              {
                MiLockVadTree(1);
                Address = MiLocateAddress(a1);
                MiUnlockVadTree(1, 0x11u);
                v37 = *((_DWORD *)Address + 12);
                v13 = 1;
                v6 = v51;
                v12 = v47;
                v16 = (a6 & 0x40) != 0;
                v21 = (v37 >> 7) & 0x1F;
                v46 = 24;
              }
            }
          }
          v63 = v13;
          if ( v21 )
          {
            if ( v21 == 31 )
            {
              v63 = v13;
            }
            else if ( v21 >> 3 == 3 )
            {
              if ( (v21 & 7) != 0 )
                v63 = 2;
            }
            else if ( v21 >> 3 == 1 )
            {
              v63 = 0;
            }
          }
          else
          {
            v63 = 3;
          }
          if ( v12 == 0x3FFFFFFFFFLL )
          {
            v22 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v23 = *(_QWORD *)v22;
            if ( v22 >= 0xFFFFF6FB7DBED000uLL
              && v22 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v23 & 1) != 0
              && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v39 = *((_QWORD *)&Flink->Flink + ((v22 >> 3) & 0x1FF));
                if ( (v39 & 0x20) != 0 )
                  v23 |= 0x20uLL;
                if ( (v39 & 0x42) != 0 )
                  v23 |= 0x42uLL;
              }
            }
            v52 = v23;
            v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52) >> 12) & 0xFFFFFFFFFFLL;
            v47 = v12;
            v16 = (a6 & 0x40) != 0;
            v7 = 48 * v12 - 0x220000000000LL;
          }
          v49 = a4;
          v24 = a4;
          if ( (a6 & 0x20) != 0 )
          {
            v24 = a4 & 0x7FFFFFFFFFFFFFFFLL;
            v49 = a4 & 0x7FFFFFFFFFFFFFFFLL;
          }
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 2 )
              LODWORD(v31) = 4;
            else
              v31 = (-1LL << (CurrentIrql + 1)) & 4;
            v32 = v31 | SchedulerAssist[5];
            v24 = v49;
            SchedulerAssist[5] = v32;
          }
          v50 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v50);
              while ( *(__int64 *)(v14 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
            v12 = v47;
            v16 = (a6 & 0x40) != 0;
            v24 = v49;
          }
          *(_BYTE *)(v14 + 34) |= 0x20u;
          v26 = a5;
          if ( a5 )
            v26 = a5 + 32;
          *(_QWORD *)v14 = v26;
          if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v63 )
          {
            MiChangePageAttribute(v14, v63, 1LL);
            v12 = v47;
            v16 = (a6 & 0x40) != 0;
            v24 = v49;
          }
          *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
          *(_WORD *)(v14 + 32) = 1;
          if ( (a6 & 8) != 0 )
            *(_BYTE *)(v14 + 35) ^= (*(_BYTE *)(v14 + 35) ^ a6) & 7;
          v27 = *(_QWORD *)(v14 + 40);
          v56 = 0LL;
          v57 = v27;
          v60 = 0LL;
          v61 = v12 & 0xFFFFFFFFFFLL | v48 & v27;
          v54 = 0LL;
          v55 = 0LL;
          v58 = 0LL;
          v59 = 0LL;
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 40), v61, v27);
          v61 = v28;
          if ( v57 != v28 )
          {
            do
            {
              v57 = v28;
              v40 = v28;
              v61 = v12 & 0xFFFFFFFFFFLL | v48 & v28;
              v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 40), v61, v28);
              v61 = v28;
            }
            while ( v40 != v28 );
          }
          v29 = *(_BYTE *)(v14 + 34);
          *(_QWORD *)(v14 + 8) = v24;
          *(_BYTE *)(v14 + 34) = v29 & 0xF8 | 2;
          if ( a6 < 0 )
            *(_BYTE *)(v14 + 35) |= 0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v41 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v43 = CurrentPrcb->SchedulerAssist;
              v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v33 = (v44 & v43[5]) == 0;
              v43[5] &= v44;
              if ( v33 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                v16 = (a6 & 0x40) != 0;
              }
              v12 = v47;
            }
          }
          LOBYTE(v10) = CurrentIrql;
          __writecr8(CurrentIrql);
          if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
          {
            v10 = 32 * (((*v9 & 0xFFFFFFFFFFLL) << 7) | v46 & 0x1F | 0x40);
            if ( qword_140C65B40 )
            {
              if ( (qword_140C65B40 & v10) != 0 )
                v10 |= 0x10uLL;
              else
                v10 |= qword_140C65B40;
            }
            *(_QWORD *)a4 = v10;
          }
          v11 = a1;
          v13 = 1;
          if ( !v16 )
            v51 = ++v6;
        }
      }
      ++v9;
      a4 += 8LL;
    }
    while ( (unsigned __int64)v9 < v53 );
    if ( v6 )
    {
      LODWORD(v48) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v48);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      LOBYTE(v10) = -1;
      *(_QWORD *)(v7 + 24) ^= (*(_QWORD *)(v7 + 24) ^ (*(_QWORD *)(v7 + 24) + v6)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return v10;
}
