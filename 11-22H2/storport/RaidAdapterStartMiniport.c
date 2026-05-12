/*
 * XREFs of RaidAdapterStartMiniport @ 0x1C0039A7C
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0008690 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0008708 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0032024 (InitializeBusesWithVmLunsBitmap.c)
 *     RaCallMiniportHwInitialize @ 0x1C0033E8C (RaCallMiniportHwInitialize.c)
 *     RaidAdapterConnectInterrupt @ 0x1C0034C88 (RaidAdapterConnectInterrupt.c)
 *     RaidInitializePerfOptsPassive @ 0x1C003BF08 (RaidInitializePerfOptsPassive.c)
 *     RaidPreInitializePerfOpts @ 0x1C003D3C4 (RaidPreInitializePerfOpts.c)
 *     StorLogMFNDCapability @ 0x1C003DACC (StorLogMFNDCapability.c)
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1C003E708 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     StorValidateMFNDCapabilities @ 0x1C003E7F4 (StorValidateMFNDCapabilities.c)
 *     RaCallMiniportFindAdapter @ 0x1C0043580 (RaCallMiniportFindAdapter.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x1C006734C (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterEtwTracing @ 0x1C00673D4 (StorEnableAdapterEtwTracing.c)
 *     StorEnableAdapterHealthEvents @ 0x1C0067450 (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterOperationalEvents @ 0x1C00674E0 (StorEnableAdapterOperationalEvents.c)
 *     RaInitializeMiniport @ 0x1C00A902C (RaInitializeMiniport.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 *     StorGetMFNDCapabilities @ 0x1C00ABD64 (StorGetMFNDCapabilities.c)
 */

__int64 __fastcall RaidAdapterStartMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // cl
  int v9; // edx
  int v10; // eax
  KIRQL v11; // al
  KIRQL v12; // si
  int v13; // edi
  unsigned __int8 (__fastcall *v14)(__int64); // rax
  PVOID *v15; // rdi
  int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+28h] [rbp-50h]

  if ( !a2 )
    return 3221225486LL;
  v5 = (__int64 *)(a1 + 336);
  result = RaInitializeMiniport(a1 + 336, a2, a3, a1 + 320);
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 1936);
  *(_BYTE *)(a1 + 4306) = 1;
  result = RaCallMiniportFindAdapter(v5, v6);
  *(_BYTE *)(a1 + 108) |= 0x40u;
  if ( (int)result < 0 )
    return result;
  LOBYTE(v7) = StorEtwLoggingEnabled;
  StorEnableAdapterEtwTracing(a1, v7);
  StorEnableAdapterOperationalEvents(a1);
  StorEnableAdapterHealthEvents(a1);
  StorEnableAdapterDiagnosticEvents(a1);
  if ( !*(_DWORD *)(a1 + 808) )
  {
    if ( *(_BYTE *)(a1 + 488) == 2 )
    {
      if ( *(_QWORD *)(a1 + 4224) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4224) = -1LL;
      *(_QWORD *)(a1 + 4240) = 0x100000000LL;
      goto LABEL_14;
    }
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 488) - 3 <= 1 )
    {
      if ( *(_QWORD *)(a1 + 4224) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4224) = -1LL;
      *(_QWORD *)(a1 + 4240) = 0LL;
LABEL_14:
      *(_QWORD *)(a1 + 4256) = -1LL;
    }
  }
  v8 = *(_BYTE *)(a1 + 540);
  v9 = *(_DWORD *)(a1 + 492);
  *(_DWORD *)(a1 + 752) = v9;
  *(_BYTE *)(a1 + 4306) = v8 == 0;
  if ( v8 )
  {
    v12 = 0;
    goto LABEL_24;
  }
  v10 = *(_DWORD *)(a1 + 504);
  *(_BYTE *)(a1 + 107) &= ~1u;
  *(_DWORD *)(a1 + 4272) = v10;
  if ( v10 )
  {
    *(_BYTE *)(a1 + 4304) = 1;
    if ( !v9 )
      v10 = 1;
    *(_DWORD *)(a1 + 4272) = v10;
  }
  result = RaidAdapterConnectInterrupt(a1);
  if ( (int)result >= 0 )
  {
    result = RaidPreInitializePerfOpts(a1);
    if ( (int)result >= 0 )
    {
      v11 = RaidAdapterAcquireInterruptLock(a1);
      *(_BYTE *)(a1 + 107) |= 1u;
      v12 = v11;
LABEL_24:
      *(_BYTE *)(a1 + 104) |= 0x10u;
      v13 = RaCallMiniportHwInitialize((__int64)v5);
      if ( v13 >= 0 )
        *(_BYTE *)(a1 + 104) |= 1u;
      if ( *(_BYTE *)(a1 + 4306) )
        RaidAdapterReleaseInterruptLock(a1, v12);
      if ( v13 >= 0 )
      {
        v14 = *(unsigned __int8 (__fastcall **)(__int64))(a1 + 4264);
        if ( !v14 || v14(*(_QWORD *)(a1 + 576) + 16LL) )
        {
          *(_BYTE *)(a1 + 104) &= ~0x10u;
          RaidInitializePerfOptsPassive(a1);
          if ( (unsigned int)RaidIsAdapterControlSupported(*v5, 23) )
            RaCallMiniportAdapterControl((__int64)v5);
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x4000) != 0 )
          {
            v15 = (PVOID *)(a1 + 5912);
            if ( *(char *)(a1 + 110) >= 0 || !*v15 )
              *v15 = (PVOID)RaidAllocatePool(64LL, 4096LL, 1229152594LL, *(_QWORD *)(a1 + 8));
            if ( *v15 && (int)StorGetNVMeIdentifyInfo(a1, 0, 0, 1, v16, v17, 0, *v15) < 0 && *v15 )
            {
              ExFreePoolWithTag(*v15, 0x49436152u);
              *v15 = 0LL;
            }
            if ( MFNDEnabled && (int)StorGetMFNDCapabilities(a1, 0LL) >= 0 && *(_QWORD *)(a1 + 5968) )
            {
              if ( (unsigned __int8)StorValidateMFNDCapabilities() )
              {
                *(_BYTE *)(a1 + 111) |= 1u;
                if ( (int)StorQueryAndUpdateCachedMFNDOperationInfo(a1) >= 0 )
                  *(_BYTE *)(a1 + 111) |= 2u;
              }
              StorLogMFNDCapability(a1);
            }
          }
          return InitializeBusesWithVmLunsBitmap(a1);
        }
        else
        {
          return 3221225473LL;
        }
      }
      else
      {
        return (unsigned int)v13;
      }
    }
  }
  return result;
}
