/*
 * XREFs of RaidCreateAdapter @ 0x1C0039384
 * Callers:
 *     RaDriverAddDevice @ 0x1C003D390 (RaDriverAddDevice.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 *     RaidCreateDeferredQueue @ 0x1C003D018 (RaidCreateDeferredQueue.c)
 *     StorCreateDictionary @ 0x1C00681F0 (StorCreateDictionary.c)
 *     RaCreateBus @ 0x1C008DB9C (RaCreateBus.c)
 *     RaidCreateDma @ 0x1C008DC3C (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C008E868 (RaCreateMiniport.c)
 *     RaidCreateResourceList @ 0x1C008ECC4 (RaidCreateResourceList.c)
 */

__int64 __fastcall RaidCreateAdapter(__int64 a1)
{
  int Dictionary; // edi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset((void *)a1, 0, 0x1740uLL);
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 136));
  *(_QWORD *)(a1 + 232) = a1 + 224;
  *(_QWORD *)(a1 + 224) = a1 + 224;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 216));
  InitializeSListHead((PSLIST_HEADER)(a1 + 256));
  InitializeSListHead((PSLIST_HEADER)(a1 + 4816));
  *(_DWORD *)(a1 + 56) = -1;
  Dictionary = StorCreateDictionary(a1 + 168);
  if ( Dictionary >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *(_QWORD *)(a1 + 296) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      RaCreateMiniport(a1 + 336);
      RaidCreateDma(a1 + 752);
      *(_DWORD *)(a1 + 304) = 0;
      *(_DWORD *)(a1 + 308) = 0;
      *(_DWORD *)(a1 + 312) = 0;
      *(_BYTE *)(a1 + 316) = 0;
      RaidCreateResourceList(a1 + 320);
      RaCreateBus(a1 + 648);
      *(_OWORD *)(a1 + 784) = 0LL;
      *(_QWORD *)(a1 + 800) = 0LL;
      RaidCreateDeferredQueue(a1 + 880);
      RaidCreateDeferredQueue(a1 + 1264);
      *(_DWORD *)(a1 + 1024) = 134684677;
      *(_DWORD *)(a1 + 1104) = 134684677;
      *(_DWORD *)(a1 + 1184) = 134684677;
      KeInitializeTimer((PKTIMER)(a1 + 1456));
      KeInitializeTimer((PKTIMER)(a1 + 1648));
      KeInitializeTimer((PKTIMER)(a1 + 4008));
      KeInitializeTimer((PKTIMER)(a1 + 5264));
      *(_DWORD *)(a1 + 88) = 2;
      *(_BYTE *)(a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 736));
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 5392));
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)Dictionary;
}
