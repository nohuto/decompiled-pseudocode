/*
 * XREFs of ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011A6B8
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C01171FC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C0118928 (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011909C (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPcwNotifyMiniportCreation(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  int v3; // r9d
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  PcwDataBlock = a1->IfBlock->PcwDataBlock;
  if ( PcwDataBlock )
  {
    a1->Reserved4.Buffer = (wchar_t *)PcwDataBlock;
    *((_QWORD *)PcwDataBlock + 22) = a1;
    ++*((_DWORD *)a1->Reserved4.Buffer + 42);
    ndisPcwUpdateMiniportDataBlock((__int64)a1->Reserved4.Buffer, 1, 0, 0);
    ndisPcwUpdateMiniportDataBlock((__int64)a1->Reserved4.Buffer, v3 + 2, 0, v3);
  }
  KLockHolder::ReleaseExclusive(&v4);
  ndisPcwEnableAlwaysOnCounters(a1);
  KLockHolder::~KLockHolder(&v4);
}
