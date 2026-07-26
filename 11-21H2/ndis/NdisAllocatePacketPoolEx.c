/*
 * XREFs of NdisAllocatePacketPoolEx @ 0x1C002D880
 * Callers:
 *     ?ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z @ 0x1C00AD130 (-ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z.c)
 *     NdisAllocatePacketPool @ 0x1C00C0EC0 (NdisAllocatePacketPool.c)
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     NdisFreePacket @ 0x1C002DAD0 (NdisFreePacket.c)
 *     NdisAllocatePacket @ 0x1C002DB90 (NdisAllocatePacket.c)
 *     NdisPacketSize @ 0x1C002DE10 (NdisPacketSize.c)
 */

void __stdcall NdisAllocatePacketPoolEx(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT NumberOfOverflowDescriptors,
        UINT ProtocolReservedLength)
{
  PVOID v5; // rdi
  int v10; // esi
  UINT v11; // edi
  UINT v12; // eax
  unsigned __int16 v13; // bp
  __int64 Pool2; // rax
  __int64 v15; // rbx
  UINT v16; // eax
  KIRQL v17; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v19; // rdi
  int v20; // eax
  KIRQL v21; // al
  _LIST_ENTRY *v22; // r8
  _LIST_ENTRY **v23; // rdx
  int v24; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  PNDIS_PACKET Packet; // [rsp+68h] [rbp+10h] BYREF

  v5 = *PoolHandle;
  Packet = 0LL;
  v10 = 1886405710;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xAu,
      (struct _GUID *)&WPP_6bf195b864a83f4f583394206a2d0b8f_Traceguids);
  *PoolHandle = 0LL;
  if ( ((((unsigned int)v5 & 0xFFFFFF) - 5260366LL) & 0xFFFFFFFFFFDFFFFFuLL) == 0 )
    v10 = (unsigned int)v5 & 0x7FFFFFFF;
  if ( NumberOfDescriptors > 0xFFFF )
    goto LABEL_27;
  v11 = NumberOfDescriptors + NumberOfOverflowDescriptors;
  if ( NumberOfDescriptors + NumberOfOverflowDescriptors < NumberOfDescriptors )
  {
    *Status = -1073741811;
    return;
  }
  if ( v11 > 0xFFFF )
    v11 = 0xFFFF;
  v12 = NdisPacketSize(ProtocolReservedLength);
  v13 = v12;
  if ( v12 - 1 > 0xFFFE || (Pool2 = ExAllocatePool2(64LL, 112LL, v10), (v15 = Pool2) == 0) )
  {
LABEL_27:
    *Status = -1073741670;
    return;
  }
  *(_WORD *)(Pool2 + 4) = v13;
  *(_DWORD *)Pool2 = v10;
  *(_WORD *)(Pool2 + 6) = 0xFC0u / v13;
  if ( 0xFC0u / v13 )
  {
    *(_DWORD *)(Pool2 + 20) = 4096;
    *(_WORD *)(Pool2 + 8) = (0xFC0u / v13 + v11 - 1) / (0xFC0u / v13);
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 32));
  v16 = *(unsigned __int16 *)(v15 + 6);
  if ( v16 > v11 || !(_WORD)v16 )
  {
    v20 = v11 * *(unsigned __int16 *)(v15 + 4);
    *(_WORD *)(v15 + 6) = v11;
    *(_DWORD *)(v15 + 20) = v20 + 64;
    *(_WORD *)(v15 + 8) = 1;
  }
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 80) = v15 + 72;
  *(_QWORD *)(v15 + 72) = v15 + 72;
  *(_QWORD *)(v15 + 48) = v15 + 40;
  *(_QWORD *)(v15 + 40) = v15 + 40;
  *(_QWORD *)(v15 + 64) = v15 + 56;
  *(_QWORD *)(v15 + 56) = v15 + 56;
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalPacketPoolListLock);
  Flink = ndisGlobalPacketPoolList.Flink;
  v19 = (_LIST_ENTRY *)(v15 + 88);
  if ( ndisGlobalPacketPoolList.Flink->Blink != &ndisGlobalPacketPoolList )
    goto LABEL_26;
  v19->Flink = ndisGlobalPacketPoolList.Flink;
  *(_QWORD *)(v15 + 96) = &ndisGlobalPacketPoolList;
  Flink->Blink = v19;
  ndisGlobalPacketPoolList.Flink = (_LIST_ENTRY *)(v15 + 88);
  KeReleaseSpinLock(&ndisGlobalPacketPoolListLock, v17);
  NdisAllocatePacket(Status, &Packet, (NDIS_HANDLE)v15);
  if ( !*Status )
  {
    NdisFreePacket(Packet);
    *PoolHandle = (PVOID)v15;
    *(_QWORD *)(v15 + 24) = retaddr;
    goto LABEL_18;
  }
  v21 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalPacketPoolListLock);
  v22 = v19->Flink;
  if ( v19->Flink->Blink != v19 || (v23 = *(_LIST_ENTRY ***)(v15 + 96), *v23 != v19) )
LABEL_26:
    __fastfail(3u);
  *v23 = v22;
  v22->Blink = (_LIST_ENTRY *)v23;
  KeReleaseSpinLock(&ndisGlobalPacketPoolListLock, v21);
  ExFreePoolWithTag((PVOID)v15, 0);
LABEL_18:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v24 = *Status;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xBu,
      (struct _GUID *)&WPP_6bf195b864a83f4f583394206a2d0b8f_Traceguids,
      v24);
  }
}
