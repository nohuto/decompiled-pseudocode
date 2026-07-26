/*
 * XREFs of ndisQueueDpcWorkItem @ 0x1C0001398
 * Callers:
 *     ndisMiniportDpc @ 0x1C000122C (ndisMiniportDpc.c)
 *     ndisInterruptDpc @ 0x1C00014D0 (ndisInterruptDpc.c)
 * Callees:
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00018A0 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C000191C (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0003A10 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0008C44 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall ndisQueueDpcWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  unsigned int Number; // r15d
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  int v14; // [rsp+28h] [rbp-48h]
  unsigned int v15; // [rsp+30h] [rbp-40h]
  __int16 WnodeEventItem; // [rsp+38h] [rbp-38h] BYREF
  __int128 v17; // [rsp+3Ah] [rbp-36h]
  _BYTE v18[22]; // [rsp+4Ah] [rbp-26h]
  __int16 v19; // [rsp+60h] [rbp-10h]
  _WORD v20[7]; // [rsp+62h] [rbp-Eh]

  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 96);
  Number = KeGetPcr()->Prcb.Number;
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)&v13, v5);
  if ( (v14 & 0x800000) != 0 )
  {
    v12 = v15;
    if ( v15 == -1 )
    {
      v12 = KeGetPcr()->Prcb.Number;
      v15 = v12;
    }
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v13 + v12 * ndisPcwPerCpuDataStride + 288);
  }
  ndisReferenceMiniportNoCheck(v5, MPREF_IO_QUEUEDDPC);
  v10 = *(_QWORD *)(a2 + 216) + 80 * (Number + ndisMaxNumberOfProcessors * (*(_BYTE *)(a2 + 193) != 0 ? a3 : 0));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 72));
  if ( (*(_DWORD *)(v10 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    ndisDereferenceMiniport(v5, MPREF_IO_QUEUEDDPC);
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
      v11 = 1;
      if ( HIBYTE(word_1C00EE5EC) )
      {
        v19 = 0;
        v20[0] = 0;
        v17 = 0LL;
        WnodeEventItem = 48;
        *(_QWORD *)v18 = 0LL;
        *(_QWORD *)((char *)&v17 + 6) = qword_1C00EE5E0;
        *(_DWORD *)&v20[1] = 0x20000;
        BYTE2(v17) = 24;
        *(GUID *)&v18[6] = EtwGuidNdisReceive;
        IoWMIWriteEvent(&WnodeEventItem);
        v11 = *(_DWORD *)(v10 + 68);
      }
      *(_DWORD *)(v10 + 68) = v11 | 2;
      ndisInsertInWorkQueue(
        (struct _NDIS_WORK_QUEUE *)((char *)qword_1C00EC280 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number),
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
