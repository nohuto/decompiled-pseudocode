/*
 * XREFs of ndisMiniportDpc @ 0x1C003D030
 * Callers:
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C003D4C0 (ndisQueuedMiniportDpcWorkItem.c)
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0013024 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ndisQueueDpcWorkItem @ 0x1C003D306 (ndisQueueDpcWorkItem.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003E820 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00B1FB0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B2098 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMiniportDpc(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  void (__fastcall *v6)(__int64, __int64, __int64 *, _QWORD); // r13
  __int64 Clock; // r12
  char v10; // bp
  unsigned int MaxNblCount; // eax
  void (__fastcall *v12)(__int64, _QWORD, __int64, __int64 *, _QWORD); // r10
  char v13; // di
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE v16[12]; // [rsp+38h] [rbp-50h] BYREF
  int v17; // [rsp+44h] [rbp-44h]
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF

  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 96);
  v6 = *(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(a2 + 24);
  v19 = 0LL;
  Clock = 0LL;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v16, v4);
  if ( HIBYTE(dword_1C00F76B0) )
  {
    v10 = 1;
    ndisTraceDpcStart(v4, 1u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v10 = 0;
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 104), 0xFFFFFFFF) != 1 )
      goto LABEL_19;
  }
  else
  {
    MaxNblCount = ndisPeriodicReceivesGetMaxNblCount(v4);
    v13 = v17;
    LODWORD(v19) = MaxNblCount;
    if ( (v17 & 1) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v16, 0);
      v13 = v17;
    }
    v14 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(a2 + 193) == 1 )
      v12(v14, a3, a4, &v19, 0LL);
    else
      v6(v14, a4, &v19, 0LL);
    if ( (v13 & 1) != 0 )
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v16, 0, 0xDuLL);
    if ( (v19 & 0x100000000LL) != 0 )
    {
      ndisQueueDpcWorkItem(a1, a2, a3, a4, byte_1C00F5201);
      goto LABEL_19;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 104), 0xFFFFFFFF) != 1 || !*(_BYTE *)(a2 + 4) )
      goto LABEL_19;
  }
  KeSetEvent((PRKEVENT)(a2 + 128), 0, 0);
LABEL_19:
  if ( v10 )
  {
    v15 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 1u, v15 - Clock);
  }
}
