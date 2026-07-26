/*
 * XREFs of ndisMiniportDpc @ 0x1C000122C
 * Callers:
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0001010 (ndisQueuedMiniportDpcWorkItem.c)
 * Callees:
 *     ndisQueueDpcWorkItem @ 0x1C0001398 (ndisQueueDpcWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00AC580 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00AC668 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMiniportDpc(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  char v5; // r14
  void (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned int v7; // esi
  void (__fastcall *v8)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r11
  int PcwDatapathEventMask; // eax
  __int64 v13; // r13
  char v14; // si
  __int64 v15; // rcx
  __int64 Clock; // rax
  __int64 v17; // rax
  void (__fastcall *v18)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-30h]
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-28h]
  wchar_t *Buffer; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF

  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 96);
  v5 = 0;
  v6 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a2 + 24);
  v7 = -1;
  v8 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(a2 + 184);
  v24 = 0LL;
  PcwDatapathEventMask = v4->PcwDatapathEventMask;
  v18 = v6;
  v13 = 0LL;
  v19 = v8;
  Buffer = 0LL;
  v21 = 0LL;
  v22 = -1;
  if ( PcwDatapathEventMask || v4->PcwDatapathCycleMask )
  {
    LODWORD(v21) = PcwDatapathEventMask;
    HIDWORD(v21) = v4->PcwDatapathCycleMask;
    Buffer = v4->Reserved4.Buffer;
    if ( !Buffer )
      Buffer = v4->Reserved4.Buffer;
  }
  if ( HIBYTE(dword_1C00EE5E8) )
  {
    v5 = 1;
    ndisTraceDpcStart(v4, 1u);
    Clock = WmiGetClock(0LL, 0LL);
    v6 = v18;
    v13 = Clock;
    v8 = v19;
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 104), 0xFFFFFFFF) != 1 )
      goto LABEL_19;
  }
  else
  {
    if ( byte_1C00EC241 )
    {
      if ( dword_1C00EC24C )
      {
        v7 = dword_1C00EC244;
      }
      else
      {
        v7 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)v4->PeriodicReceivesNblCountIndex
                                                           + (KeGetPcr()->Prcb.Number << 12))];
        if ( dword_1C00EC244 < v7 )
          v7 = dword_1C00EC244;
      }
    }
    LODWORD(v24) = v7;
    v14 = BYTE4(v21);
    if ( (v21 & 0x100000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 0);
      v14 = BYTE4(v21);
    }
    v15 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(a2 + 193) == 1 )
      v8(v15, a3, a4, &v24, 0LL);
    else
      v6(v15, a4, &v24, 0LL);
    if ( (v14 & 1) != 0 )
      ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 0, 0xDuLL);
    if ( (v24 & 0x100000000LL) != 0 )
    {
      ndisQueueDpcWorkItem(a1, a2, a3, a4, byte_1C00EC241);
      goto LABEL_19;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 104), 0xFFFFFFFF) != 1 || !*(_BYTE *)(a2 + 4) )
      goto LABEL_19;
  }
  KeSetEvent((PRKEVENT)(a2 + 128), 0, 0);
LABEL_19:
  if ( v5 )
  {
    v17 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 1u, v17 - v13);
  }
}
