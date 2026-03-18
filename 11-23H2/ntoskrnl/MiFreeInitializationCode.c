/*
 * XREFs of MiFreeInitializationCode @ 0x140703AFC
 * Callers:
 *     MiFreeDriverInitialization @ 0x1407034D4 (MiFreeDriverInitialization.c)
 *     MiFreeKernelPadSections @ 0x140B67E1C (MiFreeKernelPadSections.c)
 *     MmDiscardDriverSection @ 0x140B74914 (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     RtlClearBits @ 0x14022DA00 (RtlClearBits.c)
 *     MiGetControlAreaPartition @ 0x1402756B0 (MiGetControlAreaPartition.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402848B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlSetBitsEx @ 0x14028B3C0 (RtlSetBitsEx.c)
 *     MiUnlockLoaderEntry @ 0x1402920D8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140292164 (MiLockLoaderEntry.c)
 *     MiReturnResident @ 0x140292E10 (MiReturnResident.c)
 *     MiSectionControlArea @ 0x14029F880 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiVaToPfnEx @ 0x14038A270 (MiVaToPfnEx.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403953EC (MiFreeLargeInitializationCodePages.c)
 *     KeReservePrivilegedPages @ 0x1403D70F0 (KeReservePrivilegedPages.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     MiBadRefCount @ 0x14064D640 (MiBadRefCount.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiFreeInitializationCode(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  ULONG_PTR v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int16 *ControlAreaPartition; // rbp
  char *AnyMultiplexedVm; // rax
  char v18; // dl
  __int64 v19; // r10
  unsigned __int64 v20; // rbx
  __int64 result; // rax
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r13
  __int64 v24; // rbp
  __int64 v25; // r14
  int v26; // eax
  _OWORD v27[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v28; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+10h]

  v29 = 0LL;
  v6 = a1;
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
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
  v9 = (__int64)(a2 << 25) >> 16;
  BugCheckParameter3 = ((__int64)(a3 - a2) >> 3) + 1;
  v10 = BugCheckParameter3;
  v11 = (__int64)(a2 - MiGetPteAddress(v6)) >> 3;
  if ( !a4 )
  {
    MiLockLoaderEntry(v7, 0);
    RtlClearBits(*(PRTL_BITMAP *)(v7 + 112), v11, BugCheckParameter3);
    MiUnlockLoaderEntry(v7, 0);
  }
  v12 = 0LL;
  v13 = &qword_140C65918;
  while ( *(_QWORD *)(*v13 + 48) != v6 )
  {
    v12 = (unsigned int)(v12 + 1);
    ++v13;
    if ( (_DWORD)v12 )
      goto LABEL_8;
  }
  RtlSetBitsEx((__int64)&unk_140C65920 + 16 * v12, (unsigned int)v11, BugCheckParameter3);
LABEL_8:
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    v22 = (__int64)(a2 << 25) >> 16;
    if ( BugCheckParameter3 )
    {
      do
      {
        v23 = MiVaToPfnEx(v22);
        v24 = 48 * v23 - 0x220000000000LL;
        if ( *(_WORD *)(v24 + 32) != 1 )
          MiBadRefCount(v24);
        v25 = v10;
        if ( 512 - (v23 & 0x1FF) <= v10 )
          v25 = 512 - (v23 & 0x1FF);
        if ( (MiFlags & 0xC000) == 0xC000 )
        {
          v26 = KeReservePrivilegedPages();
          if ( v26 < 0 )
            KeBugCheckEx(0x1Au, 0x1211BuLL, v22, v25, v26);
        }
        MiFreeLargeInitializationCodePages(v24, v23, v25);
        v22 += v25 << 12;
        v10 -= v25;
      }
      while ( v10 );
    }
    ControlAreaPartition = MiSystemPartition;
  }
  else if ( a4 )
  {
    MiFreeBootDriverPages(v6, a2, BugCheckParameter3, 1, 0LL);
    ControlAreaPartition = MiSystemPartition;
    if ( v6 == PsNtosImageBase )
      MxKernelFreedGapCharges += BugCheckParameter3;
    else
      MxHalFreedGapCharges += BugCheckParameter3;
  }
  else
  {
    v14 = *(_QWORD *)(v8 + 112);
    if ( v14 )
    {
      v15 = MiSectionControlArea(v14);
      ControlAreaPartition = (unsigned __int16 *)MiGetControlAreaPartition(v15);
    }
    else
    {
      ControlAreaPartition = MiSystemPartition;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v19, a2, BugCheckParameter3, v18, (struct _KTHREAD *)v27);
  }
  v20 = v28;
  if ( (_QWORD)v28 )
  {
    *(_QWORD *)(v7 + 40) -= v28;
    *(_QWORD *)(v7 + 48) -= v20;
    if ( v6 == PsHalImageBase || v6 == PsNtosImageBase )
      qword_140C699A8 -= v28;
    else
      _InterlockedExchangeAdd(&dword_140C699D0, -(int)v20);
    MiReturnResident((__int64)ControlAreaPartition, v20);
    MiReturnCommit((__int64)ControlAreaPartition, v20 - *((_QWORD *)&v27[0] + 1));
  }
  result = (unsigned __int16)MiFlags & 0xC000;
  if ( (_DWORD)result == 49152 )
  {
    result = MI_IS_PHYSICAL_ADDRESS(v9);
    if ( !(_DWORD)result )
    {
      result = KeReservePrivilegedPages();
      if ( (int)result < 0 )
        KeBugCheckEx(0x1Au, 0x1211AuLL, v9, BugCheckParameter3, (int)result);
    }
  }
  return result;
}
