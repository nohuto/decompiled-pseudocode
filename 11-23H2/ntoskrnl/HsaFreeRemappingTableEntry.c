/*
 * XREFs of HsaFreeRemappingTableEntry @ 0x140530360
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x14037CD18 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExtEnvCriticalFailure @ 0x14051FA28 (ExtEnvCriticalFailure.c)
 *     ExtEnvFreeMemory @ 0x14051FAFC (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14051FB3C (ExtEnvFreePhysicalMemory.c)
 *     HsaGetDeviceAperture @ 0x140530560 (HsaGetDeviceAperture.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x14053199C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 */

__int64 __fastcall HsaFreeRemappingTableEntry(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  char v6; // r14
  _QWORD *DeviceAperture; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h]
  unsigned __int64 v19; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v17 = 0LL;
  LODWORD(v18) = 0;
  v19 = 0LL;
  v6 = 0;
  if ( a2 >> 9 >= HsaAllocatedDeviceApertures || (a2 & 0x1FF) + a3 > 0x200 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    DeviceAperture = (_QWORD *)HsaGetDeviceAperture(a2);
    if ( *DeviceAperture == a1 )
    {
      byte_140C5FC18 = HalpAcquireHighLevelLock(&qword_140C5FC10);
      v8 = *((_DWORD *)DeviceAperture + 12) == a3;
      *((_DWORD *)DeviceAperture + 12) -= a3;
      if ( v8 )
      {
        HsaUpdateRemappingTableInDeviceTableEntry(a1, (char *)DeviceAperture + 52, &HsaSharedRemappingTable);
        v17 = *(_OWORD *)(DeviceAperture + 1);
        v19 = DeviceAperture[5];
        v18 = *(_OWORD *)(DeviceAperture + 3);
        memset(DeviceAperture, 0, 0x40uLL);
        v6 = 1;
      }
      v9 = (unsigned __int8)byte_140C5FC18;
      KxReleaseSpinLock((volatile signed __int64 *)&qword_140C5FC10);
      v10 = (unsigned int)KiIrqlFlags;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v9 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = (unsigned int)(v9 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v9);
      if ( v6 )
      {
        if ( *((_QWORD *)&v17 + 1) == *((_QWORD *)&HsaSharedRemappingTable + 1) )
          ExtEnvCriticalFailure(v10, 0LL, 0LL, 0LL, 0LL);
        ExtEnvFreePhysicalMemory(v10, *((void **)&v17 + 1), v18, 1u);
        ExtEnvFreeMemory(v15, v19);
      }
    }
    else
    {
      return (unsigned int)-1073741594;
    }
  }
  return v3;
}
