/*
 * XREFs of ndisQueueDpcWorkItem @ 0x1C003D306
 * Callers:
 *     ndisInterruptDpc @ 0x1C0027BA0 (ndisInterruptDpc.c)
 *     ndisMiniportDpc @ 0x1C003D030 (ndisMiniportDpc.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0013024 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00243B0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C003EBA6 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C0040062 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092378 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisQueueDpcWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  unsigned int Number; // r15d
  __int64 v10; // rbx
  _BYTE v11[8]; // [rsp+20h] [rbp-50h] BYREF
  int v12; // [rsp+28h] [rbp-48h]
  __int16 WnodeEventItem; // [rsp+38h] [rbp-38h] BYREF
  __int128 v14; // [rsp+3Ah] [rbp-36h]
  _BYTE v15[22]; // [rsp+4Ah] [rbp-26h]
  __int16 v16; // [rsp+60h] [rbp-10h]
  _WORD v17[7]; // [rsp+62h] [rbp-Eh]

  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 96);
  Number = KeGetPcr()->Prcb.Number;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v11, v5);
  if ( (v12 & 0x800000) != 0 )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)v11, 0x24uLL, 1uLL);
  ndisReferenceMiniportNoCheck(v5, 0x4Du);
  v10 = *(_QWORD *)(a2 + 216) + 80 * (Number + ndisMaxNumberOfProcessors * (*(_BYTE *)(a2 + 193) != 0 ? a3 : 0));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 72));
  if ( (*(_DWORD *)(v10 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    ndisDereferenceMiniport(v5, 0x4Du);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = a1;
    *(_QWORD *)(v10 + 40) = a2;
    *(_QWORD *)(v10 + 48) = a3;
    *(_QWORD *)(v10 + 56) = a4;
    *(_DWORD *)(v10 + 64) = Number;
    *(_DWORD *)(v10 + 68) = 1;
    if ( a5 )
    {
      if ( HIBYTE(word_1C00F76B4) )
      {
        v16 = 0;
        v17[0] = 0;
        v14 = 0LL;
        WnodeEventItem = 48;
        *(_QWORD *)v15 = 0LL;
        *(_QWORD *)((char *)&v14 + 6) = qword_1C00F76A8;
        *(_DWORD *)&v17[1] = 0x20000;
        BYTE2(v14) = 24;
        *(GUID *)&v15[6] = EtwGuidNdisReceive;
        IoWMIWriteEvent(&WnodeEventItem);
      }
      *(_DWORD *)(v10 + 68) |= 2u;
      ndisInsertInWorkQueue(
        (struct _NDIS_WORK_QUEUE *)((char *)qword_1C00F5240 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number),
        (struct _WORK_QUEUE_ITEM *)v10,
        1u);
      ndisQueuePeriodicReceivesTimer();
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v10, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v10 + 72));
}
