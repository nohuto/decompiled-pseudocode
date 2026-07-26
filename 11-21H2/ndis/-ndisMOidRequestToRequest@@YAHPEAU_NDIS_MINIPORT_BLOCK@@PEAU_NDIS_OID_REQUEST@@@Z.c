/*
 * XREFs of ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0099FC0
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C0095A60 (WPP_RECORDER_SF_qqDd.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AC580 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AC668 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        PVOID InformationBuffer)
{
  NDIS_OID Oid; // r15d
  struct _NDIS_OID_REQUEST *v4; // rbp
  unsigned int v6; // esi
  __int64 Clock; // r12
  __int64 Pool2; // rax
  __int64 v9; // rbx
  NDIS_OID v10; // r9d
  __int64 v11; // rsi
  UINT BytesWritten; // ecx
  UINT BytesNeeded; // eax
  unsigned int Flags; // eax
  char v15; // r14
  unsigned __int64 *p_Lock; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rax
  _NDIS_REQUEST *PendingRequest; // r14

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v4 = a2;
  v6 = -1073741823;
  Clock = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Eu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)a2,
      a2->DATA.QUERY_INFORMATION.Oid);
  if ( v4->RequestType == NdisRequestMethod )
  {
    v6 = -1073741637;
    goto LABEL_30;
  }
  Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406);
  v9 = Pool2;
  if ( Pool2 )
  {
    v10 = v4->DATA.QUERY_INFORMATION.Oid;
    v11 = Pool2 + 64;
    InformationBuffer = v4->DATA.QUERY_INFORMATION.InformationBuffer;
    LODWORD(a2) = v4->DATA.QUERY_INFORMATION.InformationBufferLength;
    BytesWritten = v4->DATA.QUERY_INFORMATION.BytesWritten;
    *(_DWORD *)(Pool2 + 32) = v4->RequestType;
    BytesNeeded = v4->DATA.QUERY_INFORMATION.BytesNeeded;
    *(_DWORD *)(v9 + 40) = v10;
    *(_QWORD *)(v9 + 48) = InformationBuffer;
    *(_DWORD *)(v9 + 56) = (_DWORD)a2;
    *(_DWORD *)(v9 + 60) = BytesWritten;
    *(_DWORD *)(v9 + 64) = BytesNeeded;
    *(_DWORD *)(v9 + 24) |= 0x400u;
    Flags = a1->Flags;
    *(_QWORD *)(v9 + 8) = v4;
    a1->PendingRequest = (_NDIS_REQUEST *)v9;
    if ( (Flags & 0x20000) != 0 )
    {
      v6 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CoRequestHandler(
             a1->MiniportAdapterContext,
             0LL,
             (_NDIS_REQUEST *)v9);
LABEL_27:
      if ( v6 != 259 )
      {
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        PendingRequest = a1->PendingRequest;
        a1->PendingRequest = 0LL;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        if ( PendingRequest )
        {
          v4->DATA.QUERY_INFORMATION.BytesWritten = PendingRequest->DATA.QUERY_INFORMATION.BytesWritten;
          v4->DATA.QUERY_INFORMATION.BytesNeeded = PendingRequest->DATA.QUERY_INFORMATION.BytesNeeded;
          ExFreePoolWithTag(PendingRequest, 0);
        }
      }
      goto LABEL_30;
    }
    v15 = 1;
    if ( (Flags & 0x40000) == 0 )
    {
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        p_Lock = &a1->Lock;
        a1->MiniportThread = KeGetCurrentThread();
        if ( !a1->LockAcquired )
          break;
        a1->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        KeStallExecutionProcessor(1u);
      }
      a1->LockAcquired = 1;
      CurrentThread = KeGetCurrentThread();
      a1->MiniportThread = 0LL;
      a1->LockThread = CurrentThread;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
      v11 = v9 + 64;
    }
    if ( HIBYTE(dword_1C00EE5E8) )
    {
      ndisTraceDpcStart(a1, 8u);
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v15 = 0;
    }
    v18 = *(_DWORD *)(v9 + 32);
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        v20 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx)(
                a1->MiniportAdapterContext,
                *(unsigned int *)(v9 + 40),
                *(_QWORD *)(v9 + 48),
                *(unsigned int *)(v9 + 56),
                v9 + 60,
                v11);
LABEL_22:
        v6 = v20;
        goto LABEL_23;
      }
      if ( v19 != 1 )
      {
        v6 = -1073741637;
LABEL_23:
        if ( v15 )
        {
          v21 = WmiGetClock(0LL, 0LL);
          ndisTraceDpcEnd(a1, 8u, v21 - Clock);
        }
        if ( (a1->Flags & 0x40000) == 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          a1->LockAcquired = 0;
          a1->LockThread = 0LL;
          a1->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        }
        goto LABEL_27;
      }
    }
    v20 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.OidRequestHandler)(
            a1->MiniportAdapterContext,
            *(unsigned int *)(v9 + 40),
            *(_QWORD *)(v9 + 48),
            *(unsigned int *)(v9 + 56),
            v9 + 60,
            v11);
    goto LABEL_22;
  }
LABEL_30:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)InformationBuffer,
      0x1Fu,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      (char)v4,
      Oid,
      v6);
  return v6;
}
