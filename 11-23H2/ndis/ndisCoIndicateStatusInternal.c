/*
 * XREFs of ndisCoIndicateStatusInternal @ 0x1C00C2D60
 * Callers:
 *     NdisMCoIndicateStatus @ 0x1C00C3020 (NdisMCoIndicateStatus.c)
 *     NdisMCoIndicateStatusEx @ 0x1C00C3120 (NdisMCoIndicateStatusEx.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003410 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0003A60 (NdisAcquireRWLockRead.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001EBF4 (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F73C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024DC4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCoIndicateStatusInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        const struct _NDIS_STATUS_INDICATION *a3)
{
  unsigned int StatusCode; // ebp
  int *StatusBuffer; // r14
  unsigned int StatusBufferSize; // r15d
  _UNICODE_STRING *pAdapterInstanceName; // rdx
  _NDIS_IF_BLOCK *v10; // rax
  _NDIS_IF_BLOCK *IfBlock; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  void (__fastcall **v16)(_QWORD, _QWORD, const struct _NDIS_STATUS_INDICATION *); // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  void (__fastcall **v20)(_QWORD, _QWORD, const struct _NDIS_STATUS_INDICATION *); // r8
  _X_FILTER *EthDB; // rcx
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  _NDIS_OPEN_BLOCK *i; // rdi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  $117914A399666DE4DB254FDB8A0ADF0F *v25; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+8h] BYREF

  StatusCode = a3->StatusCode;
  StatusBuffer = (int *)a3->StatusBuffer;
  StatusBufferSize = a3->StatusBufferSize;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xAu,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
  pAdapterInstanceName = (_UNICODE_STRING *)(a2 + 296);
  if ( !a2 )
    pAdapterInstanceName = a1->pAdapterInstanceName;
  if ( pAdapterInstanceName )
    ndisWriteWmiStatusIndication(a1, pAdapterInstanceName, a3, StatusCode, StatusBuffer, StatusBufferSize);
  if ( StatusCode == 1073807371 )
  {
    IfBlock = a1->IfBlock;
    a1->Flags |= 0x20000000u;
    IfBlock->MediaConnectState = MediaConnectStateConnected;
  }
  else
  {
    if ( StatusCode != 1073807372 )
      goto LABEL_12;
    v10 = a1->IfBlock;
    a1->Flags &= ~0x20000000u;
    v10->MediaConnectState = MediaConnectStateDisconnected;
  }
  a1->Flags |= 0x4000000u;
LABEL_12:
  if ( a2 )
  {
    v12 = *(_QWORD **)(a2 + 72);
    v13 = v12[4];
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 80);
      v15 = *(_QWORD *)(v14 + 24);
      v16 = (void (__fastcall **)(_QWORD, _QWORD, const struct _NDIS_STATUS_INDICATION *))(v15 + 192);
      if ( *(_BYTE *)(v15 + 56) >= 6u && *v16 )
        (*v16)(*(_QWORD *)(v14 + 32), *(_QWORD *)(a2 + 24), a3);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, int *, unsigned int))*v16)(
          *(_QWORD *)(v14 + 32),
          *(_QWORD *)(a2 + 24),
          StatusCode,
          StatusBuffer,
          StatusBufferSize);
    }
    v17 = v12[5];
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 80);
      v19 = *(_QWORD *)(v18 + 24);
      v20 = (void (__fastcall **)(_QWORD, _QWORD, const struct _NDIS_STATUS_INDICATION *))(v19 + 192);
      if ( *(_BYTE *)(v19 + 56) >= 6u && *v20 )
        (*v20)(*(_QWORD *)(v18 + 32), v12[3], a3);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, int *, unsigned int))*v20)(
          *(_QWORD *)(v18 + 32),
          v12[3],
          StatusCode,
          StatusBuffer,
          StatusBufferSize);
    }
  }
  else
  {
    EthDB = a1->EthDB;
    if ( EthDB )
    {
      BindListLock = EthDB->BindListLock;
      *(_WORD *)&LockState.OldIrql = 0;
      LockState.Flags = 0;
      NdisAcquireRWLockRead(BindListLock, &LockState, 0);
      for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
      {
        if ( (i->OpenFlags & 0x8000) == 0 && i->ProtocolHandle->CoStatusHandlerEx )
        {
          ndisMReferenceOpen((__int64)i, 0x11u);
          ProtocolHandle = i->ProtocolHandle;
          v25 = &ProtocolHandle->192;
          if ( ProtocolHandle->MajorNdisVersion >= 6u && v25->CoStatusHandlerEx )
            v25->CoStatusHandlerEx(i->ProtocolBindingContext, 0LL, (_NDIS_STATUS_INDICATION *)a3);
          else
            ((void (__fastcall *)(void *, _QWORD, _QWORD, int *, unsigned int))v25->CoStatusHandlerEx)(
              i->ProtocolBindingContext,
              0LL,
              StatusCode,
              StatusBuffer,
              StatusBufferSize);
          ndisMDereferenceOpenUnlocked((__int64)i, 0x11u);
        }
      }
      NdisReleaseRWLock(a1->EthDB->BindListLock, &LockState);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xBu,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
}
