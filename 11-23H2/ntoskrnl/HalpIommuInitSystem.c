/*
 * XREFs of HalpIommuInitSystem @ 0x140A89BC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptIsRemappingRequired @ 0x14032005C (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuGetRootIommuFaultPolicy @ 0x14036F344 (HalpIommuGetRootIommuFaultPolicy.c)
 *     HalpIommuProcessReservations @ 0x14039EDF8 (HalpIommuProcessReservations.c)
 *     HalpIommuInitializeDmar @ 0x1403A977C (HalpIommuInitializeDmar.c)
 *     HalpIommuLogEarlyFault @ 0x1403B4A88 (HalpIommuLogEarlyFault.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403B5604 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HalpIommuEnableInterrupts @ 0x1403B59A4 (HalpIommuEnableInterrupts.c)
 *     IommuInitializeLibrary @ 0x1403B6448 (IommuInitializeLibrary.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IommupHvSetRootFaultReportingReady @ 0x140525980 (IommupHvSetRootFaultReportingReady.c)
 *     IommupHvUnblockDefaultDma @ 0x14052599C (IommupHvUnblockDefaultDma.c)
 *     HalpIommuInitInterrupts @ 0x140A89DCC (HalpIommuInitInterrupts.c)
 *     HalpIommuInitializeAll @ 0x140A90D8C (HalpIommuInitializeAll.c)
 *     HalpIommuInitDiscard @ 0x140B65050 (HalpIommuInitDiscard.c)
 */

__int64 __fastcall HalpIommuInitSystem(int a1, __int64 a2, __int64 a3)
{
  int inited; // ebx
  unsigned int RootIommuFaultPolicy; // eax

  if ( !a1 || HalIommuDispatch && (*(unsigned __int8 (**)(void))HalIommuDispatch)() )
  {
    inited = 0;
    if ( !a1 )
    {
      qword_140C61CC8 = (__int64)&HalpIommuList;
      HalpIommuList = (ULONG_PTR)&HalpIommuList;
      qword_140C61CA8 = (__int64)&HalpIommuExceptionList;
      HalpIommuExceptionList = (__int64)&HalpIommuExceptionList;
      off_140C01CC0[0] = (__int64 (__fastcall *)())HalpIommuRegisterDispatchTable;
      RootIommuFaultPolicy = HalpIommuGetRootIommuFaultPolicy(a3);
      if ( RootIommuFaultPolicy > 1 )
        RootIommuFaultPolicy = 0;
      HalpIommuRootIommuFaultPolicy = RootIommuFaultPolicy;
      qword_140C01E40 = (__int64)HalpIommuReportIommuFault;
      return (unsigned int)inited;
    }
    if ( a1 == 19 )
    {
      return (unsigned int)HalpIommuInitInterrupts();
    }
    else if ( a1 == 8 )
    {
      inited = HalpIommuInitDiscard();
      if ( inited < 0 )
        return (unsigned int)inited;
      return (unsigned int)HalpIommuInitializeDmaGuardPolicy(a3);
    }
    else if ( a1 == 10 )
    {
      IommuRemappingPolicy = HalpInterruptIsRemappingRequired() != 0;
      inited = HalpIommuProcessReservations(a3);
      if ( inited < 0 )
        return (unsigned int)inited;
      return (unsigned int)HalpIommuInitializeAll(0LL, a3);
    }
    else
    {
      if ( a1 != 17 )
      {
        if ( a1 == 32 )
          HalpIommuLogEarlyFault();
        return (unsigned int)inited;
      }
      inited = IommuInitializeLibrary();
      if ( inited < 0 )
        return (unsigned int)inited;
      inited = HalpIommuInitializeDmar();
      if ( inited < 0 )
        return (unsigned int)inited;
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 240) + 2648LL) & 4) != 0 )
      {
        if ( HalpHvIommu )
        {
          if ( HalpHvIommuDeviceDomain )
          {
            if ( !HalpDmaGuardEnabled )
            {
              inited = IommupHvUnblockDefaultDma();
              if ( inited < 0 )
                return (unsigned int)inited;
            }
          }
        }
      }
      off_140C01DD0[0] = (__int64 (__fastcall *)())HalpIommuBlockDevice;
      off_140C01DD8[0] = (__int64 (__fastcall *)())HalpIommuUnblockDevice;
      off_140C01DE0[0] = (__int64 (__fastcall *)())HalpGetIommuInterface;
      off_140C01E48[0] = (__int64 (__fastcall *)())HalpIommuDmaRemappingCapable;
      off_140C01E60[0] = (__int64 (__fastcall *)())HalpGetIommuInterfaceEx;
      off_140C01E68[0] = (__int64 (__fastcall *)())HalpNotifyIommuDomainPolicyChange;
      inited = HalpIommuInitInterrupts();
      if ( inited < 0 )
        return (unsigned int)inited;
      HalpIommuEnableInterrupts();
      if ( !HalpHvIommu )
        return (unsigned int)inited;
      return (unsigned int)IommupHvSetRootFaultReportingReady();
    }
  }
  if ( a1 == 8 && !(*(unsigned __int8 (**)(void))HalIommuDispatch)() )
    HalpIommuX2ApicSupport = 0;
  return 0LL;
}
