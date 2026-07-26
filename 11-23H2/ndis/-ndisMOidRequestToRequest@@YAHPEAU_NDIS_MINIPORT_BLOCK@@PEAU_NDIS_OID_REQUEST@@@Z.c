/*
 * XREFs of ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009FFD0
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009C80 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C000D200 (WPP_RECORDER_SF_qqD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C009BAA4 (WPP_RECORDER_SF_qqDd_ea_1C009BAA4.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00B1FB0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B2098 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        PVOID InformationBuffer)
{
  NDIS_OID Oid; // r12d
  struct _NDIS_OID_REQUEST *v4; // r14
  unsigned int v6; // esi
  __int64 Clock; // r15
  __int64 Pool2; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  UINT BytesNeeded; // eax
  UINT BytesWritten; // ecx
  unsigned int Flags; // eax
  char v14; // bp
  unsigned __int64 *p_Lock; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rax
  _NDIS_REQUEST *PendingRequest; // rbp

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v4 = a2;
  v6 = -1073741823;
  Clock = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Eu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
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
    *(_DWORD *)(Pool2 + 32) = v4->RequestType;
    v10 = Pool2 + 64;
    BytesNeeded = v4->DATA.QUERY_INFORMATION.BytesNeeded;
    InformationBuffer = v4->DATA.QUERY_INFORMATION.InformationBuffer;
    LODWORD(a2) = v4->DATA.QUERY_INFORMATION.InformationBufferLength;
    BytesWritten = v4->DATA.QUERY_INFORMATION.BytesWritten;
    *(_DWORD *)(v9 + 40) = v4->DATA.QUERY_INFORMATION.Oid;
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
    v14 = 1;
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
      v10 = v9 + 64;
    }
    if ( HIBYTE(dword_1C00F76B0) )
    {
      ndisTraceDpcStart(a1, 8u);
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v14 = 0;
    }
    v17 = *(_DWORD *)(v9 + 32);
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        v19 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx)(
                a1->MiniportAdapterContext,
                *(unsigned int *)(v9 + 40),
                *(_QWORD *)(v9 + 48),
                *(unsigned int *)(v9 + 56),
                v9 + 60,
                v10);
LABEL_22:
        v6 = v19;
        goto LABEL_23;
      }
      if ( v18 != 1 )
      {
        v6 = -1073741637;
LABEL_23:
        if ( v14 )
        {
          v20 = WmiGetClock(0LL, 0LL);
          ndisTraceDpcEnd(a1, 8u, v20 - Clock);
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
    v19 = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, __int64, __int64))a1->DriverHandle->MiniportDriverCharacteristics.OidRequestHandler)(
            a1->MiniportAdapterContext,
            *(unsigned int *)(v9 + 40),
            *(_QWORD *)(v9 + 48),
            *(unsigned int *)(v9 + 56),
            v9 + 60,
            v10);
    goto LABEL_22;
  }
LABEL_30:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)InformationBuffer,
      0x1Fu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      (char)v4,
      Oid,
      v6);
  return v6;
}
