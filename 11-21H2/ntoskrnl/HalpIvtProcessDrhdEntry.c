/*
 * XREFs of HalpIvtProcessDrhdEntry @ 0x1405370FC
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x140537044 (HalpIvtProcessDmarTable.c)
 * Callees:
 *     HalSocRequestApi @ 0x1403B38C8 (HalSocRequestApi.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403BE4F0 (HalRegisterPermanentAddressUsage.c)
 *     HalMapIoSpace @ 0x1403BE7F0 (HalMapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x1403BF310 (HalpUnmapVirtualAddress.c)
 *     ExtEnvAllocateMemory @ 0x1403CE24C (ExtEnvAllocateMemory.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExtEnvFreeMemory @ 0x14052268C (ExtEnvFreeMemory.c)
 *     HalpIvtAllocateReservedDomainList @ 0x140537928 (HalpIvtAllocateReservedDomainList.c)
 *     DmrGetNextDrhdDeviceScope @ 0x1405380DC (DmrGetNextDrhdDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x140538480 (DmrValidateDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x140538580 (DmrEnumerateRmrrDomains.c)
 *     DmrFreeRmrrTree @ 0x1405386C4 (DmrFreeRmrrTree.c)
 *     ExtEnvRegisterIommu @ 0x140B4BF38 (ExtEnvRegisterIommu.c)
 */

__int64 __fastcall HalpIvtProcessDrhdEntry(__int64 a1, __int64 a2)
{
  char v4; // r13
  NTSTATUS ReservedDomainList; // r14d
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // r12
  LARGE_INTEGER v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  char v14; // al
  int v15; // esi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  _BYTE *NextDrhdDeviceScope; // rax
  int v19; // r11d
  bool v20; // cf
  _DWORD *v21; // rdx
  int v22; // eax
  unsigned int v23; // r13d
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  size_t v26; // rbx
  __int16 v27; // ax
  __int64 v28; // r8
  __int64 v34; // rcx
  char v36; // [rsp+30h] [rbp-D0h] BYREF
  char v37; // [rsp+31h] [rbp-CFh]
  int v38; // [rsp+34h] [rbp-CCh]
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-C4h]
  unsigned int *v41; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int Size; // [rsp+48h] [rbp-B8h]
  int Size_4; // [rsp+4Ch] [rbp-B4h]
  _QWORD *v44; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v45; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v46[14]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v47[18]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v48[24]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v49; // [rsp+230h] [rbp+130h]

  v49 = a1;
  v36 = 0;
  v45 = 0LL;
  memset(v47, 0, 0x88uLL);
  memset(v48, 0, 0xB8uLL);
  v4 = 0;
  v44 = 0LL;
  ReservedDomainList = 0;
  v38 = 0;
  v41 = 0LL;
  v37 = 0;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a2 + 8) )
    return (unsigned int)ReservedDomainList;
  if ( (int)HalSocRequestApi(16LL, 0LL, 2, 16LL, &v45) < 0
    || !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))v45)(0LL, 0LL, 0LL, &v36) )
  {
    v36 = 0;
  }
  v7 = ExtEnvAllocateMemory(v6, 0x18u, &v41);
  v8 = (unsigned __int64)v41;
  ReservedDomainList = v7;
  if ( v7 < 0 )
    goto LABEL_66;
  ReservedDomainList = DmrEnumerateRmrrDomains(a1, a2 + 4, v41);
  if ( ReservedDomainList < 0 )
    goto LABEL_66;
  memset(v46, 0, 0x68uLL);
  v9 = *(LARGE_INTEGER *)(a2 + 8);
  v46[0] = 0x6800000001LL;
  *(_QWORD *)&v45 = HalMapIoSpace(v9, 0x220uLL, MmNonCached);
  if ( !(_QWORD)v45 )
  {
    ReservedDomainList = -1073741670;
LABEL_66:
    if ( v8 )
    {
      DmrFreeRmrrTree(v8);
      ExtEnvFreeMemory(v34, v8);
    }
    return (unsigned int)ReservedDomainList;
  }
  ReservedDomainList = HalRegisterPermanentAddressUsage(v9, 0x220u);
  if ( ReservedDomainList >= 0 )
  {
    v10 = *(unsigned __int16 *)(a2 + 2) - 16;
    v46[1] = 0LL;
    Size = v10;
    LODWORD(v46[2]) = v10 + 360;
    v46[7] = v47;
    v46[8] = v48;
    v47[0] = IvtConfigureSettings;
    v47[1] = IvtInitializeIommu;
    v47[4] = IvtCreateDevice;
    v47[5] = IvtDeleteDevice;
    v48[13] = IvtCheckForReservedRegion;
    v48[0] = IvtFindDevice;
    v48[17] = IvtEnumerateRmrrDevices;
    HIDWORD(v46[9]) = *(unsigned __int16 *)(a2 + 6);
    LODWORD(v46[9]) = 2;
    LODWORD(v46[12]) = 32;
    HIDWORD(v46[2]) = 4;
    v11 = *(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFEEFFuLL;
    _BitScanReverse((unsigned int *)&v10, (v11 >> 8) & 0x1F);
    v38 = v10;
    v12 = *(_QWORD *)(v45 + 16);
    v13 = 1LL << (((unsigned __int8)(v12 >> 35) & 0x1Fu) + 1);
    if ( v13 > 0x100000 )
      LODWORD(v13) = 0x100000;
    v14 = *(_BYTE *)(a1 + 37) & 3;
    LODWORD(v46[11]) = v13;
    if ( v14 == 1 && (v12 & 0x18) == 24 )
    {
      v47[14] = IvtUpdateRemappingTableEntry;
      v15 = 68;
      HIDWORD(v46[2]) = 68;
      v47[15] = IvtInvalidateRemappingTableEntry;
      v47[16] = IvtUpdateRemappingDestination;
    }
    else
    {
      v15 = HIDWORD(v46[2]);
    }
    if ( v36 == 2 && (v12 & 2) != 0 && (v11 & 0x80u) == 0LL )
    {
      v16 = (v11 >> 8) & 0x1F;
      if ( (_DWORD)v16 != 0
        && (v12 & 0x40) != 0
        && (v11 & 0x80000000000000LL) != 0
        && (v11 & 0x40000000000000LL) != 0
        && (v11 & 0x10) == 0 )
      {
        v40 = v38;
        v47[9] = IvtFlushDomainTb;
        v47[10] = xHalTimerWatchdogStop;
        v47[11] = xHalTimerWatchdogStop;
        v47[7] = IvtAttachDeviceDomain;
        v47[8] = IvtDetachDeviceDomain;
        v48[18] = IvtProcessReservedDomains;
        _BitScanReverse64(&v17, v16);
        v15 |= (((_DWORD)v17 << 13) + 0x2000) | 0x100;
        HIDWORD(v46[2]) = v15;
      }
    }
    NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, 0LL);
    if ( NextDrhdDeviceScope
      && *NextDrhdDeviceScope == 1
      && NextDrhdDeviceScope[1] == 8
      && !NextDrhdDeviceScope[5]
      && NextDrhdDeviceScope[6] == 2
      && !NextDrhdDeviceScope[7]
      && !*(_WORD *)(a2 + 6)
      && (v11 & 0x3F0000) < 0x2F0000 )
    {
      if ( !HalpIommuEnableGpuIdentityMapping )
      {
        v15 &= ~0x100u;
        HIDWORD(v46[2]) = v15;
      }
      if ( v19 )
        v20 = (v11 & 0x800000000LL) != 0;
      else
        v20 = (v11 & 0x400000000LL) != 0;
      if ( v20 )
      {
        v4 = 1;
        v37 = 1;
      }
    }
    if ( (v12 & 1) != 0 )
    {
      v15 |= 0x800u;
      HIDWORD(v46[2]) = v15;
    }
    v39 = 0;
    v21 = (_DWORD *)((unsigned __int64)&v39 & -(__int64)(v4 != 0));
    v22 = 1 << (2 * (v11 & 7) + 4);
    if ( v21 )
      *v21 = --v22;
    v8 = (unsigned __int64)v41;
    Size_4 = v22 - 1;
    v23 = v22 - 1 - *v41;
    v40 = *v41;
    HIDWORD(v46[11]) = v22 - 1 - v40;
    if ( (v15 & 0x20) != 0 || (v15 & 0x100) != 0 )
    {
      v15 |= 0x12u;
      v48[10] = IvtEnableInterrupt;
      v48[11] = IvtDisableInterrupt;
      v48[12] = IvtHandleInterrupt;
      v48[9] = IvtSetMessageInterruptRouting;
      HIDWORD(v46[2]) = v15;
    }
    if ( (int)DmrValidateDeviceScope(v49, a2) < 0 && (v15 & 0x20) != 0 )
      KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
    ReservedDomainList = ExtEnvRegisterIommu(v46, v24, &v44);
    if ( ReservedDomainList >= 0 )
    {
      v25 = v44;
      *v44 = *(_QWORD *)(a2 + 8);
      *((_DWORD *)v25 + 63) = *(unsigned __int16 *)(a2 + 6);
      v25[27] = v11;
      v26 = Size;
      v25[28] = v12;
      v25[35] = v25 + 45;
      *((_DWORD *)v25 + 64) = v26;
      *((_BYTE *)v25 + 268) = *(_BYTE *)(a2 + 4) & 1;
      *((_DWORD *)v25 + 65) = Size_4;
      *((_DWORD *)v25 + 66) = v39;
      *((_DWORD *)v25 + 62) = v38;
      v25[26] = 0LL;
      v25[30] = v25 + 29;
      v25[29] = v25 + 29;
      v25[8] = v25 + 7;
      v25[7] = v25 + 7;
      v25[10] = v25 + 9;
      v25[9] = v25 + 9;
      v25[12] = v25 + 11;
      v25[11] = v25 + 11;
      v27 = WORD2(v46[2]);
      if ( (v46[2] & 0x10000000000LL) != 0 )
        *((_BYTE *)v25 + 318) = 1;
      *((_BYTE *)v25 + 320) = 0;
      if ( (v27 & 0x20) != 0 )
        *((_BYTE *)v25 + 316) = 1;
      if ( (v27 & 0x1000) != 0 )
        *((_BYTE *)v25 + 317) = 1;
      if ( v37 )
        *((_BYTE *)v25 + 319) = 1;
      v28 = v40;
      *((_DWORD *)v25 + 68) = v25[28] & 1;
      v25[43] = v8;
      ReservedDomainList = HalpIvtAllocateReservedDomainList(v25, v23, v28);
      if ( ReservedDomainList >= 0 )
      {
        memmove((void *)v25[35], (const void *)(a2 + 16), v26);
        if ( *((_BYTE *)v25 + 320) )
        {
          _RAX = 1LL;
          __asm { cpuid }
          if ( (_DWORD)_RAX == 526064 )
            *((_BYTE *)v25 + 321) = 1;
        }
      }
    }
  }
  HalpUnmapVirtualAddress(v45, 1LL, 0LL);
  if ( ReservedDomainList < 0 )
    goto LABEL_66;
  return (unsigned int)ReservedDomainList;
}
