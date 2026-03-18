/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1403219B0
 * Callers:
 *     MiZeroFault @ 0x1402AD610 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x14031FD60 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x140232E08 (MiAdvanceFaultList.c)
 *     MiGetLargePage @ 0x140267060 (MiGetLargePage.c)
 *     MiComputeZeroClusterMaximum @ 0x140284D20 (MiComputeZeroClusterMaximum.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14033FD38 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiGetClusterPage @ 0x1405C37D0 (MiGetClusterPage.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1)
{
  int v1; // edx
  unsigned __int64 v3; // r15
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r14
  struct _KTHREAD *v7; // r10
  int v8; // r12d
  unsigned __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rsi
  int v12; // ebx
  __int64 PageChain; // rbp
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v18; // edx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r9
  struct _LIST_ENTRY *v21; // rcx
  unsigned __int64 v22; // r10
  int v23; // r11d
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  bool v28; // zf
  unsigned int v29; // eax
  unsigned int v30; // r9d
  __int64 LargePage; // rax
  unsigned __int64 v32; // rdx
  unsigned int v33; // ecx
  int v34; // r9d
  __int64 ClusterPage; // rax
  struct _LIST_ENTRY *v36; // r8
  __int64 v37; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // [rsp+20h] [rbp-E8h]
  __int64 v42; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-C0h]
  _QWORD v44[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v45[13]; // [rsp+60h] [rbp-A8h] BYREF
  char v46; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  __int64 v49; // [rsp+128h] [rbp+20h]

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 7);
  if ( (*a1 & 2) != 0 )
  {
    v33 = a1[8];
    if ( v33 >> 3 == 3 )
    {
      if ( (v33 & 7) == 0 )
        goto LABEL_66;
    }
    else if ( v33 >> 3 != 1 )
    {
      goto LABEL_66;
    }
    if ( (v1 & 4) != 0 )
      goto LABEL_2;
LABEL_66:
    MiAdvanceFaultList((_QWORD *)v4);
    return 0LL;
  }
LABEL_2:
  if ( (v1 & 8) != 0 && (*(_DWORD *)(v4 + 56) & 8) != 0 )
    return 3221225495LL;
  v5 = *((_QWORD *)a1 + 1);
  v6 = *(_QWORD *)(v5 + 56);
  v43 = v6;
  v48 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v6 + 174));
  if ( (v1 & 0x40) == 0
    || (v7 = (struct _KTHREAD *)KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[10]) == 0LL
    || v7 == KeGetCurrentThread() )
  {
    v8 = 1;
    v9 = -1LL;
    v42 = 1LL;
    v49 = -1LL;
    v10 = *((_QWORD *)a1 + 8);
    v11 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = a1[12];
    PageChain = 0LL;
    v47 = 0;
    if ( !v10 )
    {
      if ( (v1 & 0x41) == 1 && (*(_BYTE *)(v6 + 184) & 7u) >= 2 )
      {
        v22 = MiComputeZeroClusterMaximum(v4, v6, 0LL);
        if ( v22 > 1 )
        {
          v47 = 1;
LABEL_36:
          v23 = a1[9];
          v24 = v11 + 8;
          v25 = 1LL;
          v26 = 0xFFFFF6FB7DBED000uLL;
          do
          {
            v27 = *(_QWORD *)v24;
            if ( v24 >= v26
              && v24 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v27 & 1) != 0
              && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v39 = *((_QWORD *)&Flink->Flink + ((v24 >> 3) & 0x1FF));
                v40 = v27 | 0x20;
                if ( (v39 & 0x20) == 0 )
                  v40 = *(_QWORD *)v24;
                v27 = v40;
                if ( (v39 & 0x42) != 0 )
                  v27 = v40 | 0x42;
              }
            }
            if ( v23 )
            {
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v27) )
                break;
              v28 = v23 == ((v32 >> 5) & 0x1F);
            }
            else
            {
              v28 = v27 == 0;
            }
            if ( !v28 )
              break;
            ++v25;
            v24 += 8LL;
          }
          while ( v25 < v22 );
          LODWORD(v6) = v43;
          v4 = v47;
LABEL_43:
          if ( (_DWORD)v4 == 2 )
          {
            if ( v25 == v22 )
            {
              v29 = MiProtectionToCacheAttribute((unsigned int)a1[8]);
              LODWORD(v14) = v48;
              LargePage = MiGetLargePage(v48, v3, 2u, v30, v29, 4, 0LL);
              PageChain = LargePage;
              if ( LargePage )
              {
                *a1 |= 0x80u;
                MiConvertEntireLargePageToSmall(LargePage, 2, 2, 1, 0LL, 0LL, 0LL);
              }
              goto LABEL_47;
            }
            v25 = 1LL;
          }
          LODWORD(v14) = v48;
LABEL_47:
          v42 = v25;
LABEL_8:
          v15 = *((_QWORD *)a1 + 9);
          if ( v15 )
            v14 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v15 + 544) + 1838LL));
          if ( PageChain )
            return MiCompletePrivateZeroFault(a1, PageChain, v42, v4);
          v16 = a1[8];
          if ( v16 )
          {
            if ( v16 != 31 )
            {
              if ( v16 >> 3 == 3 )
              {
                if ( (v16 & 7) != 0 )
                  v8 = 2;
              }
              else if ( v16 >> 3 == 1 )
              {
                v8 = 0;
              }
            }
          }
          else
          {
            v8 = 3;
          }
          PageChain = MiGetPageChain(v14, v6, *((_QWORD *)a1 + 2), v12, v8, 258, -1LL, (__int64)&v42);
          if ( PageChain )
            return MiCompletePrivateZeroFault(a1, PageChain, v42, v4);
          return 3221225495LL;
        }
      }
      goto LABEL_7;
    }
    if ( (v1 & 0x15) != 0 )
    {
      v9 = MiComputeZeroClusterMaximum(v4, v6, v10);
      v49 = v9;
      v47 = 1;
    }
    v18 = *(_DWORD *)(v10 + 48);
    v12 = (v18 >> 12) & 0x7F;
    if ( (v18 & 0x200000) == 0 || MiVadPageSizes[(v18 >> 19) & 3] != 16 )
    {
      if ( ((v3 >> 9) & 0x78) == 0
        && (*a1 & 0x15) == 0
        && (v18 & 0x200000) != 0
        && (v18 & 0x600000) != 0x600000
        && !a1[9]
        && v3 >= ((*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) + 16) << 12
        && ((v3 >> 9) & 0xFF8) != 0
        && (v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v19 = 0LL;
        v20 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
        do
        {
          v21 = *(struct _LIST_ENTRY **)v20;
          if ( v20 >= 0xFFFFF6FB7DBED000uLL
            && v20 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
          {
            if ( ((unsigned __int8)v21 & 1) == 0 )
              break;
            if ( ((unsigned __int8)v21 & 0x20) == 0 || ((unsigned __int8)v21 & 0x42) == 0 )
            {
              v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v36 )
              {
                v37 = *((_QWORD *)&v36->Flink + ((v20 >> 3) & 0x1FF));
                LOBYTE(v36) = (unsigned __int8)v21 | 0x20;
                if ( (v37 & 0x20) == 0 )
                  v36 = *(struct _LIST_ENTRY **)v20;
                LOBYTE(v21) = (_BYTE)v36;
                if ( (v37 & 0x42) != 0 )
                  LOBYTE(v21) = (unsigned __int8)v36 | 0x42;
              }
            }
          }
          if ( ((unsigned __int8)v21 & 1) == 0 )
            break;
          if ( ((unsigned __int8)v21 & 0x20) == 0 )
            break;
          ++v19;
          v20 -= 8LL;
        }
        while ( v19 < 0x10 );
        LODWORD(v6) = v43;
        if ( v19 == 16 )
        {
          memset(v45, 0, 0x60uLL);
          v44[1] = 0x10000LL;
          v45[2] = 1LL;
          v44[0] = v3 & 0xFFFFFFFFFFFFF000uLL;
          v45[3] = 0LL;
          v45[1] = v44;
          v45[4] = 0LL;
          if ( MiComputeZeroClusterMaximum((__int64)v45, v43, v10) >= 0x10 )
          {
            v22 = 16LL;
            v47 = 2;
            goto LABEL_36;
          }
LABEL_7:
          LODWORD(v14) = v48;
          goto LABEL_8;
        }
        goto LABEL_48;
      }
LABEL_49:
      v4 = v47;
      if ( v47 && !PageChain )
      {
        v25 = 1LL;
        v22 = v9;
        if ( v9 <= 1 )
          goto LABEL_43;
        goto LABEL_36;
      }
      goto LABEL_7;
    }
    v34 = a1[8];
    v41 = a1[9];
    v46 = 0;
    ClusterPage = MiGetClusterPage(v10, v3, 16, v34, v41, (__int64)&v46);
    PageChain = ClusterPage;
    if ( ClusterPage )
    {
      if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFFLL )
      {
        v9 = v49;
        if ( v46 )
          *a1 |= 4u;
        goto LABEL_49;
      }
      v3 &= 0xFFFFFFFFFFFF0000uLL;
      v42 = 16LL;
      *((_QWORD *)a1 + 2) = v3;
      v11 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
LABEL_48:
    v9 = v49;
    goto LABEL_49;
  }
  *(_DWORD *)(v5 + 80) |= 4u;
  return 0LL;
}
