/*
 * XREFs of HalpIommuInitDiscard @ 0x140AF9238
 * Callers:
 *     HalpIommuInitSystem @ 0x140A55270 (HalpIommuInitSystem.c)
 * Callees:
 *     HalSocGetAcpiTable @ 0x1403BE664 (HalSocGetAcpiTable.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HalpIvtProcessDmarTable @ 0x140537044 (HalpIvtProcessDmarTable.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     HalpIommuHsaDiscover @ 0x140AF9490 (HalpIommuHsaDiscover.c)
 */

__int64 __fastcall HalpIommuInitDiscard(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  _QWORD *v5; // rax
  int v6; // ebx
  __int64 AcpiTable; // rax
  __int64 v8; // rcx
  _BOOL8 v20; // rdx
  _QWORD *v21; // rax
  int v22; // eax
  _BYTE v23[8]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v25; // [rsp+38h] [rbp-18h] BYREF

  v4 = HalpHvCpuManager == 0;
  qword_140C4A108 = (__int64)&HalpIommuParaVirtDeviceCache;
  HalpIommuParaVirtDeviceCache = (__int64)&HalpIommuParaVirtDeviceCache;
  qword_140C4BE38 = (__int64)&HalpIommuDeviceCreatedList;
  HalpIommuDeviceCreatedList = (__int64)&HalpIommuDeviceCreatedList;
  qword_140C4BEA8 = (__int64)&HalpRidAliasList;
  HalpRidAliasList = (__int64)&HalpRidAliasList;
  qword_140C4A0F8 = (__int64)&IommuInterfaceStateChangeCallbackListHead;
  IommuInterfaceStateChangeCallbackListHead = (__int64)&IommuInterfaceStateChangeCallbackListHead;
  v5 = (_QWORD *)HalIommuDispatch;
  HalpIommuParaVirtDeviceCacheLock = 0LL;
  HalpDeviceBlockUnblockPushLock = 0LL;
  HalpIommuDeviceCreatedListPushLock = 0LL;
  IommuInterfaceStateChangeCallbackPushLock = 0LL;
  *(_QWORD *)(HalIommuDispatch + 8) = IommuGetConfiguration;
  v5[2] = IommuGetLibraryContext;
  v5[3] = IommuMapDevice;
  v5[4] = IommuEnableDevicePasid;
  v5[5] = IommuSetAddressSpace;
  v5[6] = IommuDisableDevicePasid;
  v5[7] = IommuUnmapDevice;
  v5[9] = IommuFlushTb;
  v5[10] = IommuFlushAllPasid;
  v5[11] = IommuProcessPageRequestQueue;
  v5[16] = IommuDevicePowerChange;
  v5[17] = IommuBeginDeviceReset;
  v5[18] = IommuFinalizeDeviceReset;
  v5[19] = IommuGetAtsSettings;
  v5[20] = IommuCreateAtsDevice;
  v5[21] = IommuConfigureAts;
  v5[22] = IommuDeleteAtsDevice;
  qword_140C4BE78 = (__int64)&HalpIommuAtsDeviceList;
  HalpIommuAtsDeviceList = (__int64)&HalpIommuAtsDeviceList;
  qword_140C4BE58 = (__int64)&HalpIommuTrackedAtsList;
  HalpIommuTrackedAtsList = (__int64)&HalpIommuTrackedAtsList;
  v25 = 0LL;
  HalpHvParaVirtIommuDomain = 0;
  HalpIommuDmaGuardTableOptIn = 0;
  HalpIommuAtsDeviceLock = 0LL;
  HalpIommuTrackedAtsListLock = 0LL;
  HalpHvIommu = 0;
  if ( !v4 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    HalpHvIommuDeviceDomain = BYTE3(_RDX) & 1;
    _RAX = 1073741827LL;
    __asm { cpuid }
    v20 = (_RDX & 0x2000000) != 0;
    v24[1] = (unsigned int)_RCX;
    HalpHvParaVirtIommuDomain = v20;
    v24[0] = __PAIR64__(_RBX, _RAX);
    HviGetHardwareFeatures((__int64)&v25, v20, 1073741827LL, a4);
    if ( (v25 & 0x20) != 0 )
    {
      v21 = (_QWORD *)HalIommuDispatch;
      HalpHvIommu = 1;
      *(_QWORD *)(HalIommuDispatch + 8) = IommuHvGetConfiguration;
      v21[5] = IommuHvSetAddressSpace;
      v21[9] = IommuHvFlushTb;
      v21[10] = IommuHvFlushAllPasid;
      v21[16] = IommuHvDevicePowerChange;
    }
  }
  v24[0] = 0LL;
  if ( !HalpHvIommu || HalpHvCpuManager )
  {
    v6 = HalpIommuHsaDiscover(v24);
    if ( v6 >= 0 )
    {
      if ( (v24[0] & 2) != 0 )
        HalpIommuDmaGuardTableOptIn = 1;
      v23[0] = 0;
      v6 = 0;
      AcpiTable = HalSocGetAcpiTable(1380011332);
      if ( AcpiTable )
      {
        v6 = HalpIvtProcessDmarTable(AcpiTable, v23);
        if ( v6 >= 0 )
        {
          if ( v23[0] )
            HalpIommuDmaGuardTableOptIn = 1;
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  v8 = HalpIommuList;
  if ( (__int64 *)HalpIommuList != &HalpIommuList )
  {
    while ( 1 )
    {
      v22 = *(_DWORD *)(v8 + 472);
      v8 = *(_QWORD *)v8;
      if ( (v22 & 0x40) == 0 )
        break;
      if ( (__int64 *)v8 == &HalpIommuList )
        return (unsigned int)v6;
    }
  }
  HalpIommuX2ApicSupport = 0;
  return (unsigned int)v6;
}
