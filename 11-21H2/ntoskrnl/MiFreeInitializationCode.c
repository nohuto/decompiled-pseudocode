/*
 * XREFs of MiFreeInitializationCode @ 0x14075F23C
 * Callers:
 *     MiFreeDriverInitialization @ 0x14075F194 (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140B252DC (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140B2FE74 (MmDiscardDriverSection.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiUnlockLoaderEntry @ 0x1402D94D8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402D96AC (MiLockLoaderEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetControlAreaPartition @ 0x14030EC14 (MiGetControlAreaPartition.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     KeReservePrivilegedPages @ 0x1403A147C (KeReservePrivilegedPages.c)
 *     MiVaToPfnEx @ 0x1403B8520 (MiVaToPfnEx.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403CB284 (MiFreeLargeInitializationCodePages.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiBadRefCount @ 0x1405AD67C (MiBadRefCount.c)
 *     MiFreeBootDriverPages @ 0x140B05620 (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiFreeInitializationCode(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 PteAddress; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char *AnyMultiplexedVm; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // rbx
  __int64 result; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  _OWORD v23[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v24; // [rsp+50h] [rbp-48h]
  __int64 v25; // [rsp+60h] [rbp-38h]
  ULONG_PTR *ControlAreaPartition; // [rsp+A8h] [rbp+10h]

  v6 = a1;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 0LL;
  if ( a4 )
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 48);
    v7 = a1 + 160;
    v8 = a1;
  }
  v9 = (__int64)(a3 - a2) >> 3;
  v10 = (__int64)(a2 << 25) >> 16;
  v11 = v9 + 1;
  if ( !a4 )
  {
    MiLockLoaderEntry(v7, 0LL);
    PteAddress = MiGetPteAddress(v6);
    RtlClearBits(*(PRTL_BITMAP *)(v7 + 112), (__int64)(a2 - PteAddress) >> 3, v11);
    MiUnlockLoaderEntry(v7, 0);
  }
  ControlAreaPartition = &MiSystemPartition;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    v19 = (__int64)(a2 << 25) >> 16;
    if ( v9 != -1 )
    {
      do
      {
        v20 = MiVaToPfnEx(v19);
        v21 = 48 * v20 - 0x220000000000LL;
        if ( *(_WORD *)(v21 + 32) != 1 )
          MiBadRefCount(v21);
        v22 = v11;
        if ( 512 - (v20 & 0x1FF) <= v11 )
          v22 = 512 - (v20 & 0x1FF);
        MiFreeLargeInitializationCodePages(v21, v20, v22);
        v19 += v22 << 12;
        v11 -= v22;
      }
      while ( v11 );
    }
  }
  else if ( a4 )
  {
    MiFreeBootDriverPages(v6, a2, v9 + 1, 1, 0LL);
    if ( v6 == PsNtosImageBase )
      MxKernelFreedGapCharges += v11;
    else
      MxHalFreedGapCharges += v11;
  }
  else
  {
    v13 = *(_QWORD *)(v8 + 112);
    if ( v13 )
    {
      v14 = MiSectionControlArea(v13);
      ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v14);
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v16, a2, v9 + 1, 1, v23);
  }
  v17 = v24;
  if ( (_QWORD)v24 )
  {
    *(_QWORD *)(v7 + 40) -= v24;
    *(_QWORD *)(v7 + 48) -= v17;
    if ( v6 == PsHalImageBase || v6 == PsNtosImageBase )
      qword_140C53528 -= v24;
    else
      _InterlockedExchangeAdd(&dword_140C53550, -(int)v17);
    MiReturnResident((__int64)ControlAreaPartition, v17);
    MiReturnCommit((__int64)ControlAreaPartition, v17 - *((_QWORD *)&v23[0] + 1));
  }
  result = (unsigned int)MiFlags;
  if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 )
  {
    result = KeReservePrivilegedPages();
    if ( (int)result < 0 )
      KeBugCheckEx(0x1Au, 0x1211AuLL, v10, v9 + 1, (int)result);
  }
  return result;
}
