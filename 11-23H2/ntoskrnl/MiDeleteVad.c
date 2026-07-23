/*
 * XREFs of MiDeleteVad @ 0x1406FA630
 * Callers:
 *     MiFreeVadRange @ 0x140309E30 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x140309F64 (MiDeletePartialVad.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14071F4A4 (MiUnmapVad.c)
 *     MiCleanVad @ 0x14071F590 (MiCleanVad.c)
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748764 (MiMapLockedPagesInUserSpace.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076EE74 (MiFreeToSubAllocatedRegion.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407E6430 (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30F90 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A322E8 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x140A3D91C (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47FA8 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x140A48F68 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiDereferenceControlArea @ 0x14020B890 (MiDereferenceControlArea.c)
 *     MiControlAreaRequiresCharge @ 0x140214CC4 (MiControlAreaRequiresCharge.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiDrainSystemAccessLog @ 0x140286F64 (MiDrainSystemAccessLog.c)
 *     MiIsVadLargePrivate @ 0x140288300 (MiIsVadLargePrivate.c)
 *     MiLockAddressSpaceToo @ 0x1402897BC (MiLockAddressSpaceToo.c)
 *     MiDeleteVirtualAddresses @ 0x140289A9C (MiDeleteVirtualAddresses.c)
 *     MiSetVadDeleted @ 0x140289B14 (MiSetVadDeleted.c)
 *     MiFinishVadDeletion @ 0x140289FA0 (MiFinishVadDeletion.c)
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiUnmapViewSubsections @ 0x14029CEA0 (MiUnmapViewSubsections.c)
 *     MiManageSubsectionView @ 0x1402A0790 (MiManageSubsectionView.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReturnFullProcessCharges @ 0x1402DF3C0 (MiReturnFullProcessCharges.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     MiDereferenceExtendInfo @ 0x140366904 (MiDereferenceExtendInfo.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061DDC8 (MiLogPerfMemoryRangeEvent.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14062624C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x14063CC44 (MiDecrementLargeSubsections.c)
 *     MiInitPerfMemoryFlags @ 0x140641B3C (MiInitPerfMemoryFlags.c)
 *     MiRemoveSharedCommitNode @ 0x1407225A0 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5E98 (MiDereferencePerSessionProtos.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140A42328 (MiRemoveUserPhysicalPagesView.c)
 *     MiFreeLargePageView @ 0x140A49D50 (MiFreeLargePageView.c)
 *     MiDeleteEnclavePages @ 0x140AAD2D8 (MiDeleteEnclavePages.c)
 */

void __fastcall MiDeleteVad(unsigned int *P, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  _KPROCESS *Process; // r12
  int v9; // r15d
  void *v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // esi
  unsigned __int64 v19; // r15
  unsigned int v20; // ecx
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  int v24; // ebx
  __int64 v25; // rsi
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r15
  __int64 VadEvent; // rax
  int v32; // edx
  unsigned __int64 v33; // rcx
  unsigned int inited; // eax
  __int64 *v35; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-48h]
  __int128 v37; // [rsp+40h] [rbp-40h] BYREF
  __int128 v38; // [rsp+50h] [rbp-30h]
  __int128 v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+70h] [rbp-10h]
  unsigned __int64 v41; // [rsp+C0h] [rbp+40h]
  __int64 *v42; // [rsp+D8h] [rbp+58h] BYREF

  v40 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v35 = 0LL;
  v42 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v41 = (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12;
  v36 = ((P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF;
  v9 = 64;
  if ( MiIsVadLargePrivate((__int64)P) )
    v4 = 64;
  if ( (P[12] & 0x200000) == 0 )
  {
    v10 = (void *)*((_QWORD *)P + 16);
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( (P[12] & 0x6200000) == 0x4200000 )
    MiDeleteEnclavePages(Process, P);
  if ( (P[12] & 0x70) == 0x30 )
    *((_QWORD *)&v39 + 1) = MiRemoveUserPhysicalPagesView(P);
  v11 = P[13];
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v11) == 0x7FFFFFFFDLL && *((_QWORD *)P + 2) == -2LL )
    v4 |= 0x80u;
  if ( v4 < 0x80 )
    MiSetVadDeleted((__int64)P);
  v12 = P[12];
  if ( (v12 & 0x200000) != 0 )
  {
    v13 = P[12] & 0x70;
    if ( v13 == 48 )
    {
      v9 = 0;
      if ( (v12 & 0x6200000) != 0x4200000 )
        v9 = 16;
    }
    else if ( v13 == 16 )
    {
      if ( (v12 & 0x10000000) == 0 )
        v9 = 32;
    }
    else
    {
      v9 = 0;
      if ( v13 == 64 )
      {
        v9 = 8;
        goto LABEL_21;
      }
    }
    if ( (v12 & 0xA200000) == 0x8200000 )
      v9 |= 0x400u;
  }
  else
  {
    v9 = ((a3 >> 31) & 1) + 2;
    if ( (a3 & 1) != 0 )
      v9 |= 4u;
  }
LABEL_21:
  if ( MiIsVadLargePrivate((__int64)P) )
    v9 |= 0x800u;
  v18 = v9 | 0x1000;
  if ( (P[12] & 0x2200000) != 0x2200000 )
    v18 = v9;
  v19 = v36;
  if ( v4 < 0x80 )
  {
    MiDeleteVirtualAddresses(v15, v41, v36, v18, &v37);
    if ( (v18 & 0x800) != 0 )
    {
      v27 = P[13];
      LODWORD(v27) = v27 & 0x7FFFFFFF;
      v28 = v40;
      v29 = v27 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31);
      if ( v40 )
      {
        v40 = 0LL;
        MiReturnFullProcessCharges((__int64)Process, v28);
      }
      v14 = *((_QWORD *)&v38 + 1);
      v30 = v29 - *((_QWORD *)&v38 + 1);
      P[13] ^= (P[13] ^ v30) & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v30 >> 31;
      if ( v30 )
      {
        VadEvent = MiLocateVadEvent((__int64)P, 16LL);
        MiFreeLargePageView(Process, P, VadEvent, (unsigned int)(v32 - 15));
        v14 = *((_QWORD *)&v38 + 1);
      }
      v33 = *((_QWORD *)&v37 + 1);
      P[13] ^= (P[13] ^ DWORD2(v37)) & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v33 >> 31;
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Spare2[39], v33 - v14);
      v19 = v36;
      *((_QWORD *)&v38 + 1) = 0LL;
    }
  }
  if ( (v18 & 2) != 0 )
  {
    v20 = P[12];
    v5 = **((_QWORD **)P + 9);
    if ( (v20 & 0x70) == 0x20 )
    {
      if ( (P[16] & 0x1000000) != 0 )
        v4 |= 0x18u;
    }
    else if ( *(_QWORD *)(v5 + 64) )
    {
      v21 = v20 & 0xF80;
      if ( v21 == 512 || v21 == 768 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 92));
      MiGetProtoPteAddress(
        (__int64)P,
        P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        0,
        (__int64 *)&v35);
      if ( (P[16] & 0x1000000) != 0 )
        v4 |= 0x20u;
      MiGetProtoPteAddress(
        (__int64)P,
        P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
        0,
        (__int64 *)&v42);
    }
    if ( (v4 & 8) == 0 )
    {
      if ( (P[12] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v14, v16, v17);
        v22 = P[12];
        if ( (v22 & 0x70) == 0x20 )
        {
          if ( (*(_DWORD *)(v5 + 56) & 0x8000000) != 0 )
            v4 |= 2u;
          v4 |= 4u;
        }
        else if ( (v22 & 0x200000) == 0 && !*(_QWORD *)(v5 + 64) )
        {
          MiGetProtoPteAddress(
            (__int64)P,
            P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
            0,
            (__int64 *)&v35);
          MiGetProtoPteAddress(
            (__int64)P,
            P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
            0,
            (__int64 *)&v42);
        }
      }
      v23 = v4;
      v24 = v4 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v24 = v23;
      v4 = v24 | 8;
    }
  }
  MiLockAddressSpaceToo((__int64)Process, (__int64)P, a2);
  if ( v4 < 0x80 )
  {
    if ( a2 )
    {
      MiRemoveVad((__int64)P, 1, a2);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 40));
      KeAbPostRelease(a2 + 40);
    }
    else
    {
      MiRemoveVad((__int64)P, 1, 0LL);
    }
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v37 + 1);
  *(_QWORD *)P = *((_QWORD *)&v38 + 1);
  if ( (v4 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(0, 13);
    v25 = v41;
    MiLogPerfMemoryRangeEvent(
      v41,
      LODWORD(Process[1].Header.WaitListHead.Flink),
      inited,
      (P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
    - (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
    + 1);
  }
  else
  {
    v25 = v41;
  }
  if ( (v4 & 1) != 0 )
    MiDereferenceExtendInfo((__int64)P, v5);
  if ( (v4 & 8) != 0 )
  {
    if ( (v4 & 2) != 0 )
    {
      MmGetSessionIdEx((__int64)Process);
      MiDereferencePerSessionProtos(v5);
    }
    if ( (v4 & 4) != 0 && (MiControlAreaRequiresCharge(v5, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v5);
    MiRemoveSharedCommitNode(v5, Process, 0LL);
    MiManageSubsectionView(*((__int64 **)P + 9), (_QWORD *)P + 12, 4);
  }
  v26 = a2 || v4 >= 0x80;
  MiFinishVadDeletion(P, v25, v19, v26);
  if ( v5 )
  {
    if ( (v4 & 0x10) != 0 )
    {
      MiDereferenceControlArea(v5);
    }
    else
    {
      if ( v35 )
      {
        if ( (v4 & 0x20) != 0 )
          MiDecrementLargeSubsections(v35, v42);
      }
      MiUnmapViewSubsections(v5, (ULONG_PTR)v35);
    }
  }
}
