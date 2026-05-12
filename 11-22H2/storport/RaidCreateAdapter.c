/*
 * XREFs of RaidCreateAdapter @ 0x1C003A96C
 * Callers:
 *     RaDriverAddDevice @ 0x1C003F5C0 (RaDriverAddDevice.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidCreateDeferredQueue @ 0x1C003F1D0 (RaidCreateDeferredQueue.c)
 *     StorCreateDictionary @ 0x1C0077A2C (StorCreateDictionary.c)
 *     RaCreateBus @ 0x1C00A826C (RaCreateBus.c)
 *     RaidCreateDma @ 0x1C00A830C (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C00A8F68 (RaCreateMiniport.c)
 *     RaidCreateResourceList @ 0x1C00A93CC (RaidCreateResourceList.c)
 */

__int64 __fastcall RaidCreateAdapter(_DWORD *a1)
{
  int Dictionary; // edi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset_0(a1, 0, 0x17C0uLL);
  *a1 = 1094997074;
  *((_QWORD *)a1 + 20) = a1 + 38;
  *((_QWORD *)a1 + 19) = a1 + 38;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 18);
  *((_QWORD *)a1 + 30) = a1 + 58;
  *((_QWORD *)a1 + 29) = a1 + 58;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 28);
  InitializeSListHead((PSLIST_HEADER)a1 + 16);
  InitializeSListHead((PSLIST_HEADER)a1 + 305);
  a1[14] = -1;
  Dictionary = StorCreateDictionary(a1 + 44);
  if ( Dictionary >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *((_QWORD *)a1 + 37) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      RaCreateMiniport(a1 + 84);
      RaidCreateDma(a1 + 190);
      a1[76] = 0;
      a1[77] = 0;
      a1[78] = 0;
      *((_BYTE *)a1 + 316) = 0;
      RaidCreateResourceList(a1 + 80);
      RaCreateBus(a1 + 164);
      *(_OWORD *)(a1 + 198) = 0LL;
      *((_QWORD *)a1 + 101) = 0LL;
      RaidCreateDeferredQueue(a1 + 236);
      RaidCreateDeferredQueue(a1 + 332);
      a1[272] = 134684677;
      a1[292] = 134684677;
      a1[312] = 134684677;
      KeInitializeTimer((PKTIMER)(a1 + 380));
      KeInitializeTimer((PKTIMER)(a1 + 428));
      KeInitializeTimer((PKTIMER)(a1 + 1018));
      KeInitializeTimer((PKTIMER)(a1 + 1332));
      a1[22] = 2;
      *((_BYTE *)a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 93);
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 682);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)Dictionary;
}
