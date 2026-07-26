/*
 * XREFs of ndisInterruptDpc @ 0x1C0027A10
 * Callers:
 *     <none>
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0003484 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ndisQueueDpcWorkItem @ 0x1C003D186 (ndisQueueDpcWorkItem.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DB54 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DBAA (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092358 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00B1F90 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B2078 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  const struct _NDIS_MINIPORT_BLOCK *v4; // r11
  __int64 Clock; // r13
  _QWORD *v6; // rbx
  int v7; // r15d
  int PcwDatapathEventMask; // ecx
  unsigned int v9; // edi
  int v10; // esi
  int v11; // r14d
  struct _NDIS_MINIPORT_BLOCK *v12; // rsi
  void (__fastcall *v13)(__int64, _QWORD, PVOID, __int64 *, _QWORD); // r15
  int v14; // ecx
  void (__fastcall *v15)(__int64, PVOID, __int64 *, _QWORD); // r12
  char v16; // r14
  char v17; // di
  __int64 v18; // rcx
  int v19; // r12d
  int v20; // r15d
  wchar_t *v21; // rax
  wchar_t *Buffer; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-49h] BYREF
  PVOID v25; // [rsp+38h] [rbp-41h]
  wchar_t *v26; // [rsp+40h] [rbp-39h] BYREF
  int v27; // [rsp+48h] [rbp-31h]
  int v28; // [rsp+4Ch] [rbp-2Dh]
  int v29; // [rsp+50h] [rbp-29h]
  wchar_t *v30; // [rsp+58h] [rbp-21h] BYREF
  __int64 v31; // [rsp+60h] [rbp-19h]
  int v32; // [rsp+68h] [rbp-11h]
  PVOID v33; // [rsp+70h] [rbp-9h]
  struct _KDPC *v34; // [rsp+78h] [rbp-1h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+80h] [rbp+7h] BYREF

  v4 = (const struct _NDIS_MINIPORT_BLOCK *)DeferredContext[12];
  Clock = 0LL;
  v6 = DeferredContext;
  v34 = Dpc;
  v7 = (int)Dpc;
  v25 = SystemArgument2;
  LOWORD(DeferredContext) = 0;
  v33 = SystemArgument1;
  PcwDatapathEventMask = v4->PcwDatapathEventMask;
  v9 = -1;
  v26 = 0LL;
  v10 = (int)SystemArgument2;
  v27 = 0;
  v11 = (int)SystemArgument1;
  v28 = 0;
  v29 = -1;
  if ( PcwDatapathEventMask || v4->PcwDatapathCycleMask )
  {
    Buffer = v4->Reserved4.Buffer;
    LODWORD(DeferredContext) = v4->PcwDatapathCycleMask;
    v27 = PcwDatapathEventMask;
    v28 = (int)DeferredContext;
    v26 = Buffer;
    if ( !Buffer )
    {
      LOWORD(DeferredContext) = v28;
      v26 = v4->Reserved4.Buffer;
    }
  }
  if ( ((unsigned __int16)DeferredContext & 0x1000) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v26, 0xCu, 0x23uLL);
  if ( (v27 & 1) != 0 )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v26, 0LL, 1uLL);
  if ( dword_1C00F5204 != -1 && MiniportSupportsReceiveThrottle(v4)
    || (memset(&WatchdogInformation, 0, sizeof(WatchdogInformation)),
        KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0)
    && ndisDpcWatchdogLimit
    && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit )
  {
    ndisQueueDpcWorkItem(v7, (_DWORD)v6, v11, v10, byte_1C00F5201);
    return;
  }
  v12 = (struct _NDIS_MINIPORT_BLOCK *)v6[12];
  v13 = (void (__fastcall *)(__int64, _QWORD, PVOID, __int64 *, _QWORD))v6[23];
  v24 = 0LL;
  v14 = v12->PcwDatapathEventMask;
  v15 = (void (__fastcall *)(__int64, PVOID, __int64 *, _QWORD))v6[3];
  v30 = 0LL;
  v31 = 0LL;
  v32 = -1;
  if ( v14 || v12->PcwDatapathCycleMask )
  {
    HIDWORD(v31) = v12->PcwDatapathCycleMask;
    v21 = v12->Reserved4.Buffer;
    LODWORD(v31) = v14;
    v30 = v21;
    if ( !v21 )
      v30 = v12->Reserved4.Buffer;
  }
  if ( HIBYTE(dword_1C00F76B0) )
  {
    v16 = 1;
    ndisTraceDpcStart(v12, 1u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v16 = 0;
  }
  if ( *((_BYTE *)v6 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 26, 0xFFFFFFFF) != 1 )
      goto LABEL_28;
  }
  else
  {
    if ( byte_1C00F5201 )
    {
      if ( dword_1C00F520C )
      {
        v9 = dword_1C00F5204;
      }
      else
      {
        v9 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)v12->PeriodicReceivesNblCountIndex
                                                           + (KeGetPcr()->Prcb.Number << 12))];
        if ( dword_1C00F5204 < v9 )
          v9 = dword_1C00F5204;
      }
    }
    LODWORD(v24) = v9;
    v17 = BYTE4(v31);
    if ( (v31 & 0x100000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v30, 0);
      v17 = BYTE4(v31);
    }
    v18 = v6[1];
    if ( *((_BYTE *)v6 + 193) == 1 )
    {
      v19 = (int)v33;
      v13(v18, (unsigned int)v33, v25, &v24, 0LL);
      v20 = (int)v25;
    }
    else
    {
      v20 = (int)v25;
      v15(v18, v25, &v24, 0LL);
      v19 = (int)v33;
    }
    if ( (v17 & 1) != 0 )
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v30, 0, 0xDuLL);
    if ( (v24 & 0x100000000LL) != 0 )
    {
      ndisQueueDpcWorkItem((_DWORD)v34, (_DWORD)v6, v19, v20, byte_1C00F5201);
      goto LABEL_28;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 26, 0xFFFFFFFF) != 1 || !*((_BYTE *)v6 + 4) )
      goto LABEL_28;
  }
  KeSetEvent((PRKEVENT)(v6 + 16), 0, 0);
LABEL_28:
  if ( v16 )
  {
    v23 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v12, 1u, v23 - Clock);
  }
}
