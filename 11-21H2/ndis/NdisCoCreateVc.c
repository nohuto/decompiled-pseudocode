/*
 * XREFs of NdisCoCreateVc @ 0x1C00B9EB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisCoCreateVc(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  char v7; // r12
  _QWORD *v8; // r15
  NDIS_STATUS v9; // ebp
  _DWORD *v10; // rbx
  int v11; // r13d
  __int64 Pool2; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  LARGE_INTEGER *v15; // r9
  LARGE_INTEGER v16; // rcx
  __int64 v17; // rax
  _QWORD *QuadPart; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  NDIS_HANDLE *v29; // r12
  NDIS_HANDLE *v30; // r13
  __int64 (__fastcall **v31)(_QWORD, _QWORD, _QWORD); // rax
  _DWORD *v32; // r8
  NDIS_STATUS v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  KSPIN_LOCK *v38; // r8
  __int64 v39; // rax
  void (__fastcall *v40)(_QWORD); // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int8 v46; // dl
  bool v47; // cf
  void (__fastcall *v48)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v49)(void *, struct _NDIS_PACKET **, unsigned int); // rcx
  void (__fastcall *v50)(int, void *, struct _NDIS_PACKET *); // rdx
  void (__fastcall *v51)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r8
  void (__fastcall *v52)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r9
  KIRQL NewIrql; // [rsp+40h] [rbp-58h]
  int v55; // [rsp+44h] [rbp-54h]
  LARGE_INTEGER *v56; // [rsp+48h] [rbp-50h]
  char Increment; // [rsp+A0h] [rbp+8h]
  char v58; // [rsp+A8h] [rbp+10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xAu,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
  v56 = (LARGE_INTEGER *)*((_QWORD *)NdisBindingHandle + 2);
  if ( NdisAfHandle && (*((_DWORD *)NdisAfHandle + 2) & 1) != 0 )
  {
    v7 = 1;
    v58 = 1;
  }
  else
  {
    v7 = 0;
    v58 = 0;
    if ( !NdisAfHandle )
    {
LABEL_8:
      Increment = 0;
      goto LABEL_9;
    }
  }
  Increment = 1;
  if ( NdisBindingHandle != *((NDIS_HANDLE *)NdisAfHandle + 46) )
    goto LABEL_8;
LABEL_9:
  v8 = *NdisVcHandle;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_DWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 64LL) & 0x40000000;
  v55 = v11;
  if ( v8 && !v11 )
  {
    v9 = -1073741823;
    goto LABEL_118;
  }
  Pool2 = ExAllocatePool2(64LL, 344LL, 1868776526);
  v10 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_118;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 16));
  *((_QWORD *)v10 + 20) = v10 + 38;
  *((_QWORD *)v10 + 19) = v10 + 38;
  *((_QWORD *)v10 + 5) = v10 + 8;
  *((_QWORD *)v10 + 4) = v10 + 8;
  *((_QWORD *)v10 + 7) = v10 + 12;
  *((_QWORD *)v10 + 6) = v10 + 12;
  if ( v8 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x13u,
        0xCu,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
    v14 = v8[9];
    *((_QWORD *)v10 + 25) = v8[25];
LABEL_26:
    v15 = v56;
    goto LABEL_27;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xBu,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
  v13 = ExAllocatePool2(64LL, 144LL, 1868776526);
  v14 = v13;
  if ( !v13 )
  {
    v9 = -1073741670;
    ExFreePoolWithTag(v10, 0);
    v10 = 0LL;
    goto LABEL_118;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(v13 + 8));
  v15 = v56;
  *(_QWORD *)(v14 + 120) = v56;
  if ( !v7 )
  {
    v9 = (*((__int64 (__fastcall **)(LARGE_INTEGER, _DWORD *, _DWORD *))NdisBindingHandle + 128))(v56[3], v10, v10 + 50);
    if ( v9 )
    {
      ExFreePoolWithTag((PVOID)v14, 0);
      goto LABEL_118;
    }
    *((_BYTE *)v10 + 336) = 1;
    goto LABEL_26;
  }
LABEL_27:
  v47 = LOBYTE(v15[4].LowPart) < 6u;
  v16 = v15[470];
  *((_QWORD *)v10 + 26) = *(_QWORD *)(v16.QuadPart + 280);
  if ( v47 )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(v16.QuadPart + 536);
  *((_QWORD *)v10 + 30) = v17;
  if ( !v7 )
  {
    QuadPart = (_QWORD *)v15[470].QuadPart;
    *((_QWORD *)v10 + 27) = QuadPart[64];
    *((_QWORD *)v10 + 28) = QuadPart[65];
    *((_QWORD *)v10 + 29) = QuadPart[66];
  }
  *((_QWORD *)v10 + 24) = v15;
  *((_QWORD *)v10 + 9) = v14;
  *((_QWORD *)v10 + 8) = NdisAfHandle;
  *v10 = 1;
  *((_QWORD *)v10 + 1) = v14 + 4;
  if ( !NdisAfHandle )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x13u,
        0xDu,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
    *((_QWORD *)v10 + 3) = ProtocolVcContext;
    *((_QWORD *)v10 + 10) = NdisBindingHandle;
    *(_QWORD *)(v14 + 40) = v10;
    v41 = *((_QWORD *)v10 + 3);
    v10[22] = 1;
    *(_QWORD *)(v14 + 24) = v41;
    *(_QWORD *)(v14 + 16) = NdisBindingHandle;
    v42 = *((_QWORD *)NdisBindingHandle + 3);
    if ( *(_BYTE *)(v42 + 56) < 6u )
    {
      v43 = 0LL;
      *(_QWORD *)(v14 + 48) = *(_QWORD *)(v42 + 304);
      v44 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 312LL);
      *(_QWORD *)(v14 + 64) = 0LL;
    }
    else
    {
      *(_QWORD *)(v14 + 64) = *(_QWORD *)(v42 + 216);
      v43 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 208LL);
      v44 = 0LL;
      *(_QWORD *)(v14 + 48) = 0LL;
    }
    *(_QWORD *)(v14 + 72) = v43;
    *(_QWORD *)(v14 + 56) = v44;
    *((_QWORD *)v10 + 21) = *((_QWORD *)NdisBindingHandle + 132);
    v45 = *((_QWORD *)NdisBindingHandle + 133);
    *((_QWORD *)v10 + 18) = ProtocolVcContext;
    *((_QWORD *)v10 + 22) = v45;
    ExInterlockedInsertHeadList(
      (PLIST_ENTRY)NdisBindingHandle + 69,
      (PLIST_ENTRY)v10 + 2,
      (PKSPIN_LOCK)NdisBindingHandle + 29);
LABEL_96:
    if ( v9 )
      goto LABEL_118;
    goto LABEL_97;
  }
  v47 = *((_DWORD *)NdisAfHandle + 99) < 6u;
  *((_QWORD *)v10 + 10) = *((_QWORD *)NdisAfHandle + 46);
  *((_QWORD *)v10 + 17) = *((_QWORD *)NdisAfHandle + 5);
  if ( v47 )
  {
    v19 = *((_QWORD *)NdisAfHandle + 25);
    v20 = *((_QWORD *)NdisAfHandle + 22);
    v21 = *((_QWORD *)NdisAfHandle + 17);
  }
  else
  {
    v19 = *((_QWORD *)NdisAfHandle + 44);
    v20 = *((_QWORD *)NdisAfHandle + 41);
    v21 = *((_QWORD *)NdisAfHandle + 36);
  }
  *((_QWORD *)v10 + 14) = v21;
  *((_QWORD *)v10 + 15) = v20;
  *((_QWORD *)v10 + 16) = v19;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
    v22 = (_QWORD *)*((_QWORD *)NdisAfHandle + 4);
  else
    v22 = (_QWORD *)*((_QWORD *)NdisAfHandle + 3);
  *((_QWORD *)v10 + 21) = v22[12];
  *((_QWORD *)v10 + 22) = v22[13];
  *((_QWORD *)v10 + 23) = v22[14];
  if ( v8 )
    *(_DWORD *)(v14 + 4) |= 0x10u;
  if ( v11 )
  {
    if ( Increment )
    {
      if ( v8 )
      {
        *(_QWORD *)(v14 + 40) = v8;
        *((_DWORD *)v8 + 22) = 0;
      }
      else
      {
        *(_QWORD *)(v14 + 16) = *((_QWORD *)NdisAfHandle + 46);
        v26 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
        if ( *(_BYTE *)(v26 + 56) < 6u )
        {
          v28 = 0LL;
          *(_QWORD *)(v14 + 56) = *(_QWORD *)(v26 + 312);
          v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
          *(_QWORD *)(v14 + 64) = 0LL;
        }
        else
        {
          *(_QWORD *)(v14 + 64) = *(_QWORD *)(v26 + 216);
          v27 = 0LL;
          v28 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
          *(_QWORD *)(v14 + 56) = 0LL;
        }
        *(_QWORD *)(v14 + 72) = v28;
        *(_QWORD *)(v14 + 48) = v27;
      }
      *(_QWORD *)(v14 + 32) = v10;
    }
    else
    {
      *(_QWORD *)(v14 + 16) = *((_QWORD *)NdisAfHandle + 46);
      v34 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
      if ( *(_BYTE *)(v34 + 56) < 6u )
      {
        v36 = 0LL;
        *(_QWORD *)(v14 + 56) = *(_QWORD *)(v34 + 312);
        v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
        *(_QWORD *)(v14 + 64) = 0LL;
      }
      else
      {
        *(_QWORD *)(v14 + 64) = *(_QWORD *)(v34 + 216);
        v35 = 0LL;
        v36 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
        *(_QWORD *)(v14 + 56) = 0LL;
      }
      *(_QWORD *)(v14 + 72) = v36;
      *(_QWORD *)(v14 + 48) = v35;
      *(_QWORD *)(v14 + 40) = v10;
      if ( v8 )
      {
        *(_QWORD *)(v14 + 32) = v8;
        *((_DWORD *)v8 + 22) = 1;
        goto LABEL_57;
      }
    }
    v10[22] = 1;
    goto LABEL_57;
  }
  *(_QWORD *)(v14 + 16) = *((_QWORD *)NdisAfHandle + 46);
  v23 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
  if ( *(_BYTE *)(v23 + 56) < 6u )
  {
    v25 = 0LL;
    *(_QWORD *)(v14 + 56) = *(_QWORD *)(v23 + 312);
    v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
    *(_QWORD *)(v14 + 64) = 0LL;
  }
  else
  {
    *(_QWORD *)(v14 + 64) = *(_QWORD *)(v23 + 216);
    v24 = 0LL;
    v25 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
    *(_QWORD *)(v14 + 56) = 0LL;
  }
  *(_QWORD *)(v14 + 72) = v25;
  *(_QWORD *)(v14 + 48) = v24;
  v10[22] = 1;
  if ( Increment )
    *(_QWORD *)(v14 + 40) = v10;
  else
    *(_QWORD *)(v14 + 32) = v10;
LABEL_57:
  v29 = (NDIS_HANDLE *)(v10 + 36);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 2);
  v30 = (NDIS_HANDLE *)(v10 + 6);
  v31 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*((_QWORD *)NdisAfHandle + 46);
  if ( NdisBindingHandle == v31 )
  {
    v47 = *((_DWORD *)NdisAfHandle + 98) < 6u;
    v32 = v10 + 36;
    *v30 = ProtocolVcContext;
    if ( v47 )
      v33 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 3) + 8LL))(
              *((_QWORD *)NdisAfHandle + 6),
              v10,
              v32);
    else
      v33 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 4) + 8LL))(
              *((_QWORD *)NdisAfHandle + 6),
              v10,
              v32);
    v9 = v33;
    if ( v58 )
      *((_QWORD *)v10 + 25) = *v29;
  }
  else
  {
    v37 = *((_QWORD *)NdisAfHandle + 47);
    *v29 = ProtocolVcContext;
    v9 = ((__int64 (__fastcall **)(__int64, _DWORD *, _DWORD *))v31)[130](v37, v10, v10 + 6);
  }
  if ( v9 )
  {
LABEL_74:
    if ( !v8 )
      goto LABEL_76;
    goto LABEL_75;
  }
  if ( !v8 || v55 && !Increment )
  {
    *(_QWORD *)(v14 + 24) = *v30;
    goto LABEL_74;
  }
LABEL_75:
  *(_DWORD *)(v14 + 4) &= ~0x10u;
LABEL_76:
  KeReleaseSpinLock((PKSPIN_LOCK)v10 + 2, NewIrql);
  if ( v9 )
  {
    if ( !v8 )
    {
      if ( !v58 )
      {
        v40 = (void (__fastcall *)(_QWORD))*((_QWORD *)v10 + 27);
        if ( v40 )
          v40(*((_QWORD *)v10 + 25));
      }
      ExFreePoolWithTag((PVOID)v14, 0);
    }
    ExFreePoolWithTag(v10, 0);
    v10 = 0LL;
    goto LABEL_96;
  }
  v38 = (KSPIN_LOCK *)((char *)NdisBindingHandle + 232);
  if ( Increment )
  {
    ExInterlockedInsertHeadList((PLIST_ENTRY)NdisBindingHandle + 69, (PLIST_ENTRY)v10 + 2, v38);
    v47 = *((_DWORD *)NdisAfHandle + 98) < 6u;
    *((_QWORD *)v10 + 13) = *v29;
    if ( v47 )
      v39 = *((_QWORD *)NdisAfHandle + 3);
    else
      v39 = *((_QWORD *)NdisAfHandle + 4);
    *((_QWORD *)v10 + 12) = *(_QWORD *)(v39 + 16);
    if ( !v58 )
      ExInterlockedInsertHeadList(
        (PLIST_ENTRY)(*((_QWORD *)NdisAfHandle + 5) + 1104LL),
        (PLIST_ENTRY)(v10 + 38),
        (PKSPIN_LOCK)(*((_QWORD *)NdisAfHandle + 5) + 232LL));
  }
  else
  {
    *((_QWORD *)v10 + 13) = *v30;
    *((_QWORD *)v10 + 12) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 1048LL);
    ExInterlockedInsertHeadList((PLIST_ENTRY)NdisBindingHandle + 69, (PLIST_ENTRY)(v10 + 38), v38);
    ExInterlockedInsertHeadList(
      (PLIST_ENTRY)(*((_QWORD *)NdisAfHandle + 46) + 1104LL),
      (PLIST_ENTRY)v10 + 2,
      (PKSPIN_LOCK)(*((_QWORD *)NdisAfHandle + 46) + 232LL));
  }
LABEL_97:
  v46 = *(_BYTE *)(*((_QWORD *)v10 + 24) + 32LL);
  if ( NdisAfHandle )
    v47 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 56LL) < 6u;
  else
    v47 = *(_BYTE *)(*((_QWORD *)NdisBindingHandle + 3) + 56LL) < 6u;
  if ( v47 )
  {
    if ( v46 < 6u )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x13u,
          0x11u,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      *((_QWORD *)v10 + 32) = 0LL;
      *((_QWORD *)v10 + 33) = ndisCoSendPacketsToNdisPackets;
      *((_QWORD *)v10 + 34) = ndisMCoSendCompleteToNdisPacket;
      *((_QWORD *)v10 + 35) = ndisMCoIndicateReceiveNdisPacketToNdisPacket;
      v48 = 0LL;
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x13u,
          0x10u,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      *((_QWORD *)v10 + 34) = 0LL;
      *((_QWORD *)v10 + 32) = ndisMCoSendNetBufferListsCompleteToNdisPackets;
      *((_QWORD *)v10 + 33) = ndisCoSendPacketsToNetBufferLists;
      v48 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
      *((_QWORD *)v10 + 35) = 0LL;
    }
    *((_QWORD *)v10 + 31) = 0LL;
  }
  else
  {
    if ( v46 < 6u )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x13u,
          0xFu,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      v48 = 0LL;
      v49 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
      v50 = ndisMCoSendCompleteToNetBufferLists;
      v51 = 0LL;
      v52 = ndisCoSendNetBufferListsToNdisPacket;
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x13u,
          0xEu,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      v48 = ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
      v49 = 0LL;
      v50 = 0LL;
      v51 = ndisMCoSendNetBufferListsCompleteToNetBufferLists;
      v52 = ndisCoSendNetBufferListsToNetBufferLists;
    }
    *((_QWORD *)v10 + 31) = v52;
    *((_QWORD *)v10 + 32) = v51;
    *((_QWORD *)v10 + 33) = 0LL;
    *((_QWORD *)v10 + 34) = v50;
    *((_QWORD *)v10 + 35) = v49;
  }
  *((_QWORD *)v10 + 36) = v48;
  *((LARGE_INTEGER *)v10 + 39) = ExInterlockedAddLargeInteger(v56 + 167, (LARGE_INTEGER)0x100000000LL, &ndisGlobalLock);
LABEL_118:
  *NdisVcHandle = v10;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x12u,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      (char)v10,
      v9);
  return v9;
}
