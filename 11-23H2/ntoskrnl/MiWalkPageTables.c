/*
 * XREFs of MiWalkPageTables @ 0x14025BF90
 * Callers:
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiDeleteSystemPageTables @ 0x140212D0C (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x140214310 (MiMakeZeroedPageTablesEx.c)
 *     MiAgeWorkingSet @ 0x14025BA00 (MiAgeWorkingSet.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x140273BA0 (MiCountSharedPages.c)
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E5680 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiOutSwapWorkingSet @ 0x1403429A4 (MiOutSwapWorkingSet.c)
 *     MiDeleteEmptyPageTables @ 0x140357940 (MiDeleteEmptyPageTables.c)
 *     MiTrimWorkingSet @ 0x14035D864 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14035DB4C (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140361D70 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiGetWorkingSetInfoEx @ 0x14036354C (MiGetWorkingSetInfoEx.c)
 *     MiEmptyWorkingSetInitiate @ 0x14036DD94 (MiEmptyWorkingSetInitiate.c)
 *     MmRemoveExecuteGrants @ 0x14036E20C (MmRemoveExecuteGrants.c)
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     MiWalkResetCommitPages @ 0x140619B98 (MiWalkResetCommitPages.c)
 *     MmAddRangeToCrashDump @ 0x140630690 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140630C2C (MmRemoveSystemCacheFromDump.c)
 *     MmUpdateOldWorkingSetPages @ 0x140635C2C (MmUpdateOldWorkingSetPages.c)
 *     MiCombineWorkingSet @ 0x140653968 (MiCombineWorkingSet.c)
 *     MmUnlockPhysicalPagesByVa @ 0x140A2DAB0 (MmUnlockPhysicalPagesByVa.c)
 *     MiConvertHiberPhasePages @ 0x140AABEDC (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x140AAC118 (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x140AAC268 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140AAC304 (MiMarkNonPagedHiberPhasePages.c)
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 *     MiAddLoaderHalIoMappings @ 0x140B44B90 (MiAddLoaderHalIoMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140B456F8 (MiCreateInitialSystemWsles.c)
 *     MxZeroPageTablePfns @ 0x140B57DE4 (MxZeroPageTablePfns.c)
 *     MiMarkLargePageMappings @ 0x140B57F98 (MiMarkLargePageMappings.c)
 *     MxCreatePfns @ 0x140B5804C (MxCreatePfns.c)
 *     MiCountBootDriverRegions @ 0x140B6F12C (MiCountBootDriverRegions.c)
 *     MiFillPfnGaps @ 0x140B75174 (MiFillPfnGaps.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 *     MiInitializeWalkBounds @ 0x14025D67C (MiInitializeWalkBounds.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x14038DD18 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     MiPerformSafePdeWrite @ 0x1403C6678 (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiWalkPageTables(__m128i *a1)
{
  __m128i *v1; // rdi
  unsigned __int64 v2; // rax
  int v3; // r8d
  int v4; // r10d
  unsigned int v5; // eax
  unsigned int v6; // r10d
  unsigned int v7; // ecx
  __m128i *p_si128; // r13
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbp
  __int32 v24; // eax
  __int64 v25; // r9
  unsigned __int64 v26; // r14
  _KPROCESS *Process; // rcx
  __int64 v28; // r9
  __int64 i; // rsi
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  int v32; // ebx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v38; // [rsp+28h] [rbp-D0h]
  __m128i *v39; // [rsp+30h] [rbp-C8h]
  __int64 v40; // [rsp+38h] [rbp-C0h]
  __int64 v41; // [rsp+40h] [rbp-B8h]
  __m128i si128; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+60h] [rbp-98h]
  unsigned __int64 v45; // [rsp+68h] [rbp-90h]
  unsigned __int64 v46; // [rsp+70h] [rbp-88h]
  unsigned __int64 v47; // [rsp+78h] [rbp-80h]
  __int64 v48; // [rsp+80h] [rbp-78h]
  _QWORD v49[14]; // [rsp+88h] [rbp-70h] BYREF
  int v51; // [rsp+108h] [rbp+10h]
  unsigned int v52; // [rsp+110h] [rbp+18h]
  unsigned int v53; // [rsp+118h] [rbp+20h]

  v1 = a1;
  if ( (a1->m128i_i32[0] & 0x10000) == 0 )
    a1[4].m128i_i64[1] = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1[1].m128i_i64[1] + 174));
  if ( !a1->m128i_i8[6] )
    a1->m128i_i8[6] = 15;
  v2 = a1[3].m128i_u64[1];
  if ( !v2 )
  {
    si128 = a1[2];
LABEL_47:
    v4 = 1;
    goto LABEL_13;
  }
  if ( v2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v2 = 0xFFFFF6FB7DBEDF70uLL;
    a1[3].m128i_i64[1] = 0xFFFFF6FB7DBEDF70uLL;
  }
  v3 = -1;
  if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
    a1[3].m128i_i64[1] = 0LL;
    goto LABEL_47;
  }
  do
  {
    ++v3;
    v2 = (__int64)(v2 << 25) >> 16;
  }
  while ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL );
  si128.m128i_i64[0] = v2;
  v51 = 1;
  si128.m128i_i64[1] = -1LL;
  if ( v3 == -1 )
    goto LABEL_14;
  v43 = 0LL;
  v44 = v2 - 1;
  v4 = 2;
LABEL_13:
  v51 = v4;
LABEL_14:
  v5 = MiInitializeWalkBounds(a1, v49);
  v7 = 0;
  v52 = v5;
  p_si128 = &si128;
  v53 = 0;
  v9 = v5;
  v39 = &si128;
  do
  {
    v10 = 0;
    if ( v9 )
    {
      v11 = p_si128->m128i_i64[0];
      v12 = p_si128->m128i_u64[1];
      v41 = p_si128->m128i_i64[0];
      v38 = v12;
      do
      {
        v13 = v11;
        v14 = v49[2 * v10 + 1];
        if ( v11 <= v14 )
        {
          v15 = v49[2 * v10];
          if ( v12 >= v15 )
          {
            if ( v11 < v15 )
              v13 = v49[2 * v10];
            v16 = v12;
            if ( v12 > v14 )
              v16 = v49[2 * v10 + 1];
            v17 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[5].m128i_i64[0] = v17;
            v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[5].m128i_i64[1] = v18;
            v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[6].m128i_i64[0] = v19;
            v20 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[6].m128i_i64[1] = v20;
            v21 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[7].m128i_i64[0] = v21;
            v22 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[7].m128i_i64[1] = v22;
            v23 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[8].m128i_i64[0] = v23;
            v1[8].m128i_i64[1] = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v24 = v1->m128i_i32[0];
            v1[4].m128i_i64[0] = 0LL;
            if ( (v24 & 0x10000) != 0 )
            {
              result = MiWalkPageTablesRecursivelyNoSynch(v1, v23, 3LL);
              if ( (int)result >= 4 )
                return result;
            }
            else
            {
              if ( (v24 & 4) != 0 )
              {
                v25 = v1[1].m128i_i64[1];
                v1->m128i_i8[4] |= 1u;
                v40 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v37 = v25;
                v45 = (((unsigned __int64)(v40 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v46 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v47 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v48 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v26 = 0xFFFFF6FB7DBEDF68uLL;
                MiLockPageTableInternal(v25, 0xFFFFF6FB7DBEDF68uLL, 0, v25);
                for ( i = 2LL; ; --i )
                {
                  v30 = *(&v45 + i);
                  v31 = *(_QWORD *)v30;
                  if ( v30 >= 0xFFFFF6FB7DBED000uLL && v30 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
                  {
                    Process = KeGetCurrentThread()->ApcState.Process;
                    if ( Process->AddressPolicy != 1 && (v31 & 1) != 0 && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
                    {
                      Process = KeGetCurrentThread()->ApcState.Process;
                      Flink = Process[1].ProcessListEntry.Flink;
                      if ( Flink )
                      {
                        v35 = *((_QWORD *)&Flink->Flink + ((v30 >> 3) & 0x1FF));
                        v36 = v31 | 0x20;
                        if ( (v35 & 0x20) == 0 )
                          v36 = *(_QWORD *)v30;
                        v31 = v36;
                        if ( (v35 & 0x42) != 0 )
                          v31 = v36 | 0x42;
                      }
                    }
                  }
                  if ( (v31 & 0x81) != 1 )
                    break;
                  if ( (v31 & 0x20) == 0 )
                    MiPerformSafePdeWrite(Process, *(&v45 + i), v31, 1LL);
                  if ( v30 != v26 )
                  {
                    MiLockPageTableInternal(v37, v30, 0, v28);
                    MiUnlockPageTableInternal(v37, v26);
                    v26 = v30;
                  }
                  if ( !i )
                    break;
                }
                v1 = a1;
                p_si128 = v39;
                if ( v26 == v40 )
                {
                  a1->m128i_i8[4] &= ~1u;
                  v9 = v52;
                  a1[3].m128i_i64[0] = v40;
                }
                else
                {
                  MiUnlockPageTableInternal(v37, v26);
                  v9 = v52;
                }
              }
              else
              {
                v1[3].m128i_i64[0] = 0LL;
                if ( (v24 & 0x400) != 0 )
                  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67024);
                v1->m128i_i8[4] &= ~1u;
              }
              v32 = MiWalkPageTablesRecursively(v1, v23, 3LL);
              if ( (v1->m128i_i32[0] & 0x400) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67024);
              if ( v32 >= 4 )
                return (unsigned int)v32;
            }
            v12 = v38;
          }
        }
        v11 = v41;
        ++v10;
      }
      while ( v10 < v9 );
      v6 = v51;
      v7 = v53;
    }
    ++v7;
    ++p_si128;
    v53 = v7;
    v39 = p_si128;
  }
  while ( v7 < v6 );
  return 4LL;
}
