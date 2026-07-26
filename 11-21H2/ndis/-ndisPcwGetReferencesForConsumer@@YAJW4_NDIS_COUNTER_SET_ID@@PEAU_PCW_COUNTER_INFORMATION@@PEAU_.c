/*
 * XREFs of ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C002889C
 * Callers:
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C010CC0C (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z @ 0x1C010CE58 (-ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z.c)
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C010CF10 (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010D168 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPcwGetReferencesForConsumer(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  char v5; // r13
  void *v6; // rsi
  unsigned int v7; // r12d
  ULONG ActiveProcessorCount; // r15d
  KIRQL v9; // al
  struct _NDIS_MINIPORT_BLOCK *v10; // rbx
  KIRQL v11; // di
  unsigned int v12; // edi
  __int64 v13; // rbp
  void *Pool2; // rax
  void *v15; // rbp
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlockInternal; // rax
  struct _NDIS_PCW_DATA_BLOCK *v17; // rdi
  char v18; // dl
  KLockHolder v20; // [rsp+20h] [rbp-68h] BYREF
  ULONG v24; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v4 = 0LL;
  v5 = 1;
  v6 = 0LL;
  v7 = 0;
  v20.m_State = Unlocked;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v24 = ActiveProcessorCount;
  v20.m_Region.m_Entered = 0;
  v20.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  KLockHolder::AcquireExclusive(&v20);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v10 = ndisMiniportList;
  v11 = v9;
  if ( ndisMiniportList )
  {
    while ( 1 )
    {
      if ( !v5 )
        goto LABEL_19;
      if ( v10->PnPDeviceState != NdisPnPDeviceStarted || !ndisReferenceMiniport(v10, 0x5Au) )
        goto LABEL_18;
      KeReleaseSpinLock(&ndisMiniportListLock, v11);
      v12 = 0;
      if ( !ActiveProcessorCount )
        goto LABEL_15;
      v13 = a2;
      while ( !ndisPcwMatchInstance(v10, v12, *(const struct _UNICODE_STRING **)(v13 + 8)) )
      {
LABEL_22:
        if ( ++v12 >= ActiveProcessorCount )
          goto LABEL_15;
      }
      if ( (unsigned int)v4 < v7 )
        goto LABEL_13;
      Pool2 = (void *)ExAllocatePool2(256LL, 8 * (2 * v7 + 1), 2002994254);
      v15 = Pool2;
      if ( !Pool2 )
        break;
      if ( v6 )
      {
        memmove(Pool2, v6, 8LL * v7);
        ExFreePoolWithTag(v6, 0);
      }
      v6 = v15;
      v7 = 2 * v7 + 1;
      ActiveProcessorCount = v24;
      v13 = a2;
LABEL_13:
      MiniportDataBlockInternal = ndisPcwGetMiniportDataBlockInternal(v10);
      v17 = MiniportDataBlockInternal;
      if ( MiniportDataBlockInternal )
      {
        ndisPcwReferenceMiniportDataBlock(MiniportDataBlockInternal, a1, *(_QWORD *)v13);
        *((_QWORD *)v6 + v4) = v17;
        v4 = (unsigned int)(v4 + 1);
      }
LABEL_15:
      v11 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport(v10, 0x5Au);
      v18 = 0;
      if ( v7 <= 0x10000 )
        v18 = v5;
      v5 = v18;
LABEL_18:
      v10 = v10->NextGlobalMiniport;
      if ( !v10 )
      {
LABEL_19:
        v3 = a3;
        goto LABEL_20;
      }
    }
    ActiveProcessorCount = v24;
    v5 = 0;
    v13 = a2;
    goto LABEL_22;
  }
LABEL_20:
  KeReleaseSpinLock(&ndisMiniportListLock, v11);
  *(_DWORD *)(v3 + 40) = v4;
  *(_QWORD *)(v3 + 48) = v6;
  KLockHolder::~KLockHolder(&v20);
  return 0LL;
}
