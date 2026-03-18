/*
 * XREFs of HaliQuerySystemInformation @ 0x140A47990
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetPlatformTimerInformation @ 0x140258810 (HalpGetPlatformTimerInformation.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403DE3A4 (HalpQueryNumaRangeTableInformation.c)
 *     HalpGetDisplayBiosInformation @ 0x1403DEB4C (HalpGetDisplayBiosInformation.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403DF740 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpTimerQueryWatchdogType @ 0x140503390 (HalpTimerQueryWatchdogType.c)
 *     HalpDpQueryMaxHotPlugMemoryAddress @ 0x14050A788 (HalpDpQueryMaxHotPlugMemoryAddress.c)
 *     HalpHvQueryHyperlaunchEntrypoint @ 0x14051E8FC (HalpHvQueryHyperlaunchEntrypoint.c)
 *     HalpQueryHeterogeneousMemoryAttributesInterface @ 0x1406E2A44 (HalpQueryHeterogeneousMemoryAttributesInterface.c)
 *     HalpQueryPerDeviceMsiLimitInformation @ 0x1406E2A58 (HalpQueryPerDeviceMsiLimitInformation.c)
 *     xHalAllocatePmcCounterSet @ 0x1407F4D40 (xHalAllocatePmcCounterSet.c)
 *     HalpQueryProfileInformation @ 0x1407FCE14 (HalpQueryProfileInformation.c)
 *     HalpInterruptQueryControllerInfo @ 0x140822DF0 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptGetIrtInfo @ 0x14084476C (HalpInterruptGetIrtInfo.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x140846600 (HalpQueryIommuReservedRegionInformation.c)
 *     HalpGetProcessorBrandString @ 0x140856CE8 (HalpGetProcessorBrandString.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x140863EC8 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpQuerySecondaryInterruptInformation @ 0x140864280 (HalpQuerySecondaryInterruptInformation.c)
 *     HalpDmaGetRemappingInformation @ 0x140864A38 (HalpDmaGetRemappingInformation.c)
 *     HalpGetMcaLog @ 0x1409088B4 (HalpGetMcaLog.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14090A560 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpAuditQueryResults @ 0x14090A904 (HalpAuditQueryResults.c)
 *     HalpChannelPowerRequest @ 0x14090AC50 (HalpChannelPowerRequest.c)
 *     HalpQueryDebuggerInformation @ 0x140A710B8 (HalpQueryDebuggerInformation.c)
 *     HalpQueryChannelTopologyInformation @ 0x140B4D598 (HalpQueryChannelTopologyInformation.c)
 */

__int64 __fastcall HaliQuerySystemInformation(int a1, unsigned int a2, LARGE_INTEGER *a3, unsigned int *a4)
{
  unsigned int PerDeviceMsiLimitInformation; // ebx
  unsigned int v9; // edi
  __int64 (__fastcall ****v10)(); // r15
  unsigned int PlatformTimerInformation; // eax
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  bool v21; // cc
  int v22; // edi
  int HeterogeneousMemoryAttributesInterface; // eax
  int Src[64]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Src, 0, sizeof(Src));
  PerDeviceMsiLimitInformation = 0;
  if ( a4 )
    *a4 = 0;
  if ( a1 > 30 )
  {
    if ( a1 > 43 )
    {
      switch ( a1 )
      {
        case ',':
          return (unsigned int)HalpQueryProfileInformation(a1, a2, (unsigned int *)a3, a4);
        case '/':
          return (unsigned int)HalpDmaGetRemappingInformation(a2, (int *)a4);
        case '1':
          v22 = 8;
          if ( a2 != 8 )
            return (unsigned int)-1073741820;
          HeterogeneousMemoryAttributesInterface = HalpQueryHeterogeneousMemoryAttributesInterface(a3);
          break;
        case '-':
          v9 = 8;
          if ( a2 == 8 )
          {
            v10 = (__int64 (__fastcall ****)())Src;
            *(_QWORD *)Src = HalpHvQueryHyperlaunchEntrypoint();
            goto LABEL_12;
          }
          return (unsigned int)-1073741820;
        case '.':
          v22 = 4;
          if ( a2 < 4 )
            return (unsigned int)-1073741820;
          HeterogeneousMemoryAttributesInterface = HalpTimerQueryWatchdogType(a3);
          break;
        case '2':
          if ( a2 < 2 )
            return (unsigned int)-1073741820;
          PerDeviceMsiLimitInformation = HalpQueryPerDeviceMsiLimitInformation(a3);
          if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
            *a4 = 2;
          return PerDeviceMsiLimitInformation;
        default:
          if ( a1 <= 50 || a1 > 52 )
            return (unsigned int)-1073741496;
          return (unsigned int)HalpQueryProfileInformation(a1, a2, (unsigned int *)a3, a4);
      }
    }
    else
    {
      if ( a1 != 43 )
      {
        v13 = a1 - 31;
        if ( !v13 )
          return (unsigned int)HalpQueryChannelTopologyInformation(a3, a2, a4);
        v14 = v13 - 2;
        if ( !v14 )
          return (unsigned int)HalpQueryDebuggerInformation(a3, a2, a4);
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( !v17 )
              return (unsigned int)HalpChannelPowerRequest((__int16 *)a3, a2, a4);
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 2;
              if ( !v19 )
                return (unsigned int)HalpInterruptQueryControllerInfo(a2, a3, a4);
              if ( v19 != 1 )
                return (unsigned int)-1073741496;
              if ( a2 < 0x10 )
                return (unsigned int)-1073741820;
              PerDeviceMsiLimitInformation = HalpQueryIommuReservedRegionInformation((__int64)a3, a2);
              if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
                *a4 = 16;
              return PerDeviceMsiLimitInformation;
            }
            v10 = &off_14000A550;
            if ( a2 < 0x10 )
              v10 = 0LL;
            v9 = a2 < 0x10 ? 0 : 0x10;
            PerDeviceMsiLimitInformation = a2 < 0x10 ? 0xC0000004 : 0;
LABEL_43:
            if ( !v9 )
              return PerDeviceMsiLimitInformation;
            goto LABEL_35;
          }
          v10 = (__int64 (__fastcall ****)())HalpFwS3PerformanceTable;
          if ( !HalpFwS3PerformanceTable )
            return (unsigned int)-1073741822;
          v9 = *(_DWORD *)(HalpFwS3PerformanceTable + 4);
          v21 = v9 <= HalpFwS3PerformanceTableMaximumLength;
        }
        else
        {
          v10 = (__int64 (__fastcall ****)())HalpFwBootPerformanceTable;
          if ( !HalpFwBootPerformanceTable )
            return (unsigned int)-1073741822;
          v9 = *(_DWORD *)(HalpFwBootPerformanceTable + 4);
          v21 = v9 <= HalpFwBootPerformanceTableMaximumLength;
        }
        if ( v21 )
        {
          if ( a2 < v9 )
            goto LABEL_57;
          goto LABEL_43;
        }
        return (unsigned int)-1073741822;
      }
      v22 = 4;
      if ( (HalpPlatformFlags & 4) != 0 )
        return (unsigned int)-1073741637;
      if ( a2 < 4 )
        return (unsigned int)-1073741820;
      HeterogeneousMemoryAttributesInterface = HalpQueryAcpiWakeAlarmSystemPowerState(a3);
    }
    PerDeviceMsiLimitInformation = HeterogeneousMemoryAttributesInterface;
    if ( HeterogeneousMemoryAttributesInterface < 0 )
      return PerDeviceMsiLimitInformation;
    goto LABEL_51;
  }
  if ( a1 == 30 )
    return (unsigned int)HalpQueryNumaRangeTableInformation(a3, a2, a4);
  if ( a1 > 17 )
  {
    if ( a1 != 20 )
    {
      if ( a1 != 23 )
      {
        switch ( a1 )
        {
          case 25:
            v9 = 12;
            if ( a2 >= 0xC )
            {
              v10 = (__int64 (__fastcall ****)())Src;
              PlatformTimerInformation = HalpGetPlatformTimerInformation(Src);
LABEL_11:
              PerDeviceMsiLimitInformation = PlatformTimerInformation;
LABEL_12:
              *a4 = v9;
              memmove(a3, v10, v9);
              return PerDeviceMsiLimitInformation;
            }
            return (unsigned int)-1073741820;
          case 26:
            v9 = 8;
            if ( a2 >= 8 )
            {
              v10 = (__int64 (__fastcall ****)())Src;
              PlatformTimerInformation = HalpAuditQueryResults(Src);
              goto LABEL_11;
            }
            return (unsigned int)-1073741820;
          case 27:
            v9 = 12;
            if ( a2 >= 0xC )
            {
              v10 = (__int64 (__fastcall ****)())Src;
              PlatformTimerInformation = HalpInterruptGetIrtInfo(Src);
              goto LABEL_11;
            }
            return (unsigned int)-1073741820;
          case 28:
            v9 = 56;
            if ( a2 >= 0x38 )
            {
              v10 = (__int64 (__fastcall ****)())Src;
              PlatformTimerInformation = HalpQuerySecondaryInterruptInformation((__int64)Src);
              goto LABEL_11;
            }
            return (unsigned int)-1073741820;
          case 29:
            if ( a2 < 0x18 )
              return (unsigned int)-1073741820;
            PerDeviceMsiLimitInformation = xKdEnumerateDebuggingDevices();
            if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
              *a4 = 24;
            return PerDeviceMsiLimitInformation;
        }
        return (unsigned int)-1073741496;
      }
      return (unsigned int)HalpGetProcessorBrandString(a2, (__int64)a3, a4);
    }
    return (unsigned int)HalpQueryProfileInformation(a1, a2, (unsigned int *)a3, a4);
  }
  switch ( a1 )
  {
    case 17:
      v22 = 8;
      if ( a2 != 8 )
        return (unsigned int)-1073741820;
      a3->QuadPart = HalpDpQueryMaxHotPlugMemoryAddress();
LABEL_51:
      *a4 = v22;
      return PerDeviceMsiLimitInformation;
    case 1:
      return (unsigned int)HalpQueryProfileInformation(a1, a2, (unsigned int *)a3, a4);
    case 7:
      return (unsigned int)HalpGetMcaLog();
    case 8:
      return (unsigned int)-1073741496;
    case 9:
      v10 = (__int64 (__fastcall ****)())Src;
      v9 = 4;
      Src[0] = HalpGetDisplayBiosInformation();
      goto LABEL_35;
  }
  if ( a1 != 11 )
  {
    if ( a1 == 12 )
    {
      v10 = (__int64 (__fastcall ****)())Src;
      Src[0] = a3->LowPart;
      v9 = 144;
      PerDeviceMsiLimitInformation = xHalAllocatePmcCounterSet();
LABEL_35:
      if ( a2 < v9 )
        v9 = a2;
      goto LABEL_12;
    }
    if ( a1 != 13 )
    {
      if ( a1 != 16 )
        return (unsigned int)-1073741496;
      v9 = 456;
      if ( a2 >= 0x1C8 )
      {
        v10 = (__int64 (__fastcall ****)())&BadIOAddrList;
        goto LABEL_12;
      }
LABEL_57:
      *a4 = v9;
      return (unsigned int)-1073741820;
    }
    return (unsigned int)HalpGetMcaLog();
  }
  if ( a2 != 64 )
    return (unsigned int)-1073741820;
  PerDeviceMsiLimitInformation = -1073741496;
  if ( HalpNumaConfig )
  {
    PerDeviceMsiLimitInformation = HalpGetAcpiStaticNumaTopology();
    if ( (PerDeviceMsiLimitInformation & 0x80000000) == 0 )
      *a4 = 64;
  }
  return PerDeviceMsiLimitInformation;
}
