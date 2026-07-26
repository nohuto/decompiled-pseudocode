/*
 * XREFs of NdisMCmCreateVc @ 0x1C00BADB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisMCmCreateVc(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE MiniportVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  __int64 Pool2; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rax
  _LIST_ENTRY *v12; // rbx
  bool v13; // cf
  _QWORD *v14; // rcx
  _LIST_ENTRY *v15; // rax
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  NDIS_STATUS v24; // ebp
  __int64 v25; // r9
  _LIST_ENTRY *v26; // rcx
  _LIST_ENTRY *Flink; // rax
  unsigned __int8 v28; // dl
  void (__fastcall *v29)(void *, struct _NDIS_PACKET **, unsigned int); // rcx
  void (__fastcall *v30)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v31)(int, void *, struct _NDIS_PACKET *); // rdx
  void (__fastcall *v32)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r8
  void (__fastcall *v33)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r9

  if ( !NdisAfHandle )
    return -1073741823;
  *NdisVcHandle = 0LL;
  Pool2 = ExAllocatePool2(64LL, 144LL, 1868776526);
  v10 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 8));
  v11 = ExAllocatePool2(64LL, 344LL, 1868776526);
  v12 = (_LIST_ENTRY *)v11;
  if ( !v11 )
  {
    ExFreePoolWithTag(v10, 0);
    return -1073741670;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(v11 + 16));
  v13 = *((_BYTE *)MiniportAdapterHandle + 32) < 6u;
  v14 = (_QWORD *)*((_QWORD *)MiniportAdapterHandle + 470);
  v12[12].Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  if ( v13 )
  {
    v15 = (_LIST_ENTRY *)v14[35];
    v12[15].Flink = 0LL;
    v12[13].Flink = v15;
  }
  else
  {
    v12[15].Flink = (_LIST_ENTRY *)v14[67];
  }
  v12[13].Blink = (_LIST_ENTRY *)v14[64];
  v12[14].Flink = (_LIST_ENTRY *)v14[65];
  v12[14].Blink = (_LIST_ENTRY *)v14[66];
  v16 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 46);
  v12[8].Blink = 0LL;
  v10[15] = MiniportAdapterHandle;
  v10[16] = MiniportVcContext;
  v12[12].Blink = (_LIST_ENTRY *)MiniportVcContext;
  v12[4].Blink = (_LIST_ENTRY *)v10;
  v12->Blink = (_LIST_ENTRY *)((char *)v10 + 4);
  v12[4].Flink = (_LIST_ENTRY *)NdisAfHandle;
  LODWORD(v12->Flink) = 1;
  v12[5].Flink = v16;
  v10[2] = v16;
  Blink = v16[1].Blink;
  if ( LOBYTE(Blink[3].Blink) < 6u )
  {
    v10[6] = Blink[19].Flink;
    v10[7] = v16[1].Blink[19].Blink;
  }
  else
  {
    v10[8] = Blink[13].Blink;
    v10[9] = v16[1].Blink[13].Flink;
  }
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v18 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 44);
    v19 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 41);
    v20 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 36);
  }
  else
  {
    v18 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 25);
    v19 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 22);
    v20 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 17);
  }
  v12[7].Flink = v20;
  v12[7].Blink = v19;
  v12[8].Flink = v18;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
    v21 = (_QWORD *)*((_QWORD *)NdisAfHandle + 4);
  else
    v21 = (_QWORD *)*((_QWORD *)NdisAfHandle + 3);
  v12[10].Blink = (_LIST_ENTRY *)v21[12];
  v12[11].Flink = (_LIST_ENTRY *)v21[13];
  v12[11].Blink = (_LIST_ENTRY *)v21[14];
  v22 = *((_QWORD *)NdisAfHandle + 46);
  v23 = *((_QWORD *)NdisAfHandle + 47);
  v12[9].Flink = (_LIST_ENTRY *)MiniportVcContext;
  v10[11] = MiniportVcContext;
  v24 = (*(__int64 (__fastcall **)(__int64, _LIST_ENTRY *, _LIST_ENTRY **))(v22 + 1040))(v23, v12, &v12[1].Blink);
  if ( v24 )
  {
    ExFreePoolWithTag(v10, 0);
    ExFreePoolWithTag(v12, 0);
    v12 = 0LL;
  }
  else
  {
    v25 = *((_QWORD *)NdisAfHandle + 46);
    v26 = v12[1].Blink;
    v10[3] = v26;
    v12[6].Blink = v26;
    v12[6].Flink = *(_LIST_ENTRY **)(v25 + 1048);
    ExInterlockedInsertHeadList((PLIST_ENTRY)(v25 + 1104), v12 + 2, (PKSPIN_LOCK)(v25 + 232));
    Flink = v12[12].Flink;
    v10[5] = v12;
    v28 = (unsigned __int8)Flink[2].Flink;
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 56LL) < 6u )
    {
      if ( v28 < 6u )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x13u,
            0x19u,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        v12[15].Blink = 0LL;
        v12[16].Flink = 0LL;
        v12[16].Blink = (_LIST_ENTRY *)ndisCoSendPacketsToNdisPackets;
        v12[17].Flink = (_LIST_ENTRY *)ndisMCoSendCompleteToNdisPacket;
        v12[17].Blink = (_LIST_ENTRY *)ndisMCoIndicateReceiveNdisPacketToNdisPacket;
        v30 = 0LL;
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x13u,
            0x18u,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        v12[15].Blink = 0LL;
        v12[17].Flink = 0LL;
        v12[17].Blink = 0LL;
        v12[16].Flink = (_LIST_ENTRY *)ndisMCoSendNetBufferListsCompleteToNdisPackets;
        v12[16].Blink = (_LIST_ENTRY *)ndisCoSendPacketsToNetBufferLists;
        v30 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
      }
    }
    else
    {
      if ( v28 < 6u )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x13u,
            0x17u,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        v30 = 0LL;
        v29 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
        v32 = 0LL;
        v31 = ndisMCoSendCompleteToNetBufferLists;
        v33 = ndisCoSendNetBufferListsToNdisPacket;
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x13u,
            0x16u,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        v29 = 0LL;
        v30 = ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
        v31 = 0LL;
        v32 = ndisMCoSendNetBufferListsCompleteToNetBufferLists;
        v33 = ndisCoSendNetBufferListsToNetBufferLists;
      }
      v12[15].Blink = (_LIST_ENTRY *)v33;
      v12[16].Flink = (_LIST_ENTRY *)v32;
      v12[16].Blink = 0LL;
      v12[17].Flink = (_LIST_ENTRY *)v31;
      v12[17].Blink = (_LIST_ENTRY *)v29;
    }
    v12[18].Flink = (_LIST_ENTRY *)v30;
  }
  *NdisVcHandle = v12;
  return v24;
}
