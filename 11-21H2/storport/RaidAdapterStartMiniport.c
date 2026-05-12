/*
 * XREFs of RaidAdapterStartMiniport @ 0x1C0038568
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C00112B8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0011350 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C00319F4 (InitializeBusesWithVmLunsBitmap.c)
 *     RaCallMiniportHwInitialize @ 0x1C003322C (RaCallMiniportHwInitialize.c)
 *     RaidAdapterConnectInterrupt @ 0x1C0034020 (RaidAdapterConnectInterrupt.c)
 *     RaidInitializePerfOptsPassive @ 0x1C003A6C4 (RaidInitializePerfOptsPassive.c)
 *     RaidPreInitializePerfOpts @ 0x1C003B5C8 (RaidPreInitializePerfOpts.c)
 *     StorLogMFNDCapability @ 0x1C003BD14 (StorLogMFNDCapability.c)
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1C003C384 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     StorValidateMFNDCapabilities @ 0x1C003C460 (StorValidateMFNDCapabilities.c)
 *     RaCallMiniportFindAdapter @ 0x1C0040B0C (RaCallMiniportFindAdapter.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x1C005A3A8 (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterEtwTracing @ 0x1C005A430 (StorEnableAdapterEtwTracing.c)
 *     StorEnableAdapterHealthEvents @ 0x1C005A4AC (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterOperationalEvents @ 0x1C005A53C (StorEnableAdapterOperationalEvents.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaInitializeMiniport @ 0x1C008E92C (RaInitializeMiniport.c)
 *     StorGetMFNDCapabilities @ 0x1C0090A68 (StorGetMFNDCapabilities.c)
 */

__int64 __fastcall RaidAdapterStartMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // al
  char v9; // cl
  int v10; // edx
  int v11; // eax
  KIRQL v12; // al
  KIRQL v13; // si
  int v14; // edi
  unsigned __int8 (__fastcall *v15)(__int64); // rax
  PVOID *v16; // rdi
  void *Pool; // rax
  int v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+28h] [rbp-50h]

  if ( !a2 )
    return 3221225486LL;
  v5 = a1 + 336;
  result = RaInitializeMiniport(a1 + 336, a2, a3, a1 + 320);
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 1872);
  *(_BYTE *)(a1 + 4242) = 1;
  result = RaCallMiniportFindAdapter(v5, v6);
  *(_BYTE *)(a1 + 108) |= 0x40u;
  if ( (int)result < 0 )
    return result;
  LOBYTE(v7) = StorEtwLoggingEnabled;
  StorEnableAdapterEtwTracing(a1, v7);
  StorEnableAdapterOperationalEvents(a1);
  StorEnableAdapterHealthEvents(a1);
  StorEnableAdapterDiagnosticEvents(a1);
  if ( !*(_DWORD *)(a1 + 800) )
  {
    v8 = *(_BYTE *)(a1 + 488);
    if ( v8 == 2 )
    {
      if ( *(_QWORD *)(a1 + 4160) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4160) = -1LL;
      *(_QWORD *)(a1 + 4176) = 0x100000000LL;
      goto LABEL_14;
    }
    if ( (unsigned __int8)(v8 - 3) <= 1u )
    {
      if ( *(_QWORD *)(a1 + 4160) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4160) = -1LL;
      *(_QWORD *)(a1 + 4176) = 0LL;
LABEL_14:
      *(_QWORD *)(a1 + 4192) = -1LL;
    }
  }
  v9 = *(_BYTE *)(a1 + 540);
  v10 = *(_DWORD *)(a1 + 492);
  *(_DWORD *)(a1 + 744) = v10;
  *(_BYTE *)(a1 + 4242) = v9 == 0;
  if ( v9 )
  {
    v13 = 0;
    goto LABEL_24;
  }
  v11 = *(_DWORD *)(a1 + 504);
  *(_BYTE *)(a1 + 107) &= ~1u;
  *(_DWORD *)(a1 + 4208) = v11;
  if ( v11 )
  {
    *(_BYTE *)(a1 + 4240) = 1;
    if ( !v10 )
      v11 = 1;
    *(_DWORD *)(a1 + 4208) = v11;
  }
  result = RaidAdapterConnectInterrupt(a1);
  if ( (int)result >= 0 )
  {
    result = RaidPreInitializePerfOpts(a1);
    if ( (int)result >= 0 )
    {
      v12 = RaidAdapterAcquireInterruptLock(a1);
      *(_BYTE *)(a1 + 107) |= 1u;
      v13 = v12;
LABEL_24:
      *(_BYTE *)(a1 + 104) |= 0x10u;
      v14 = RaCallMiniportHwInitialize(v5);
      if ( v14 >= 0 )
        *(_BYTE *)(a1 + 104) |= 1u;
      if ( *(_BYTE *)(a1 + 4242) )
        RaidAdapterReleaseInterruptLock(a1, v13);
      if ( v14 >= 0 )
      {
        v15 = *(unsigned __int8 (__fastcall **)(__int64))(a1 + 4200);
        if ( !v15 || v15(*(_QWORD *)(a1 + 576) + 16LL) )
        {
          *(_BYTE *)(a1 + 104) &= ~0x10u;
          RaidInitializePerfOptsPassive(a1);
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x4000) != 0 )
          {
            v16 = (PVOID *)(a1 + 5848);
            if ( *(char *)(a1 + 110) < 0 && (Pool = *v16) != 0LL
              || (Pool = (void *)RaidAllocatePool(64LL, 4096LL, 1229152594LL, *(_QWORD *)(a1 + 8)), (*v16 = Pool) != 0LL) )
            {
              if ( (int)StorGetNVMeIdentifyInfo(a1, 0, 0, 1, v18, v19, 0, Pool) < 0 && *v16 )
              {
                ExFreePoolWithTag(*v16, 0x49436152u);
                *v16 = 0LL;
              }
            }
            if ( MFNDEnabled && (int)StorGetMFNDCapabilities(a1, 0LL) >= 0 && *(_QWORD *)(a1 + 5904) )
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
        return (unsigned int)v14;
      }
    }
  }
  return result;
}
