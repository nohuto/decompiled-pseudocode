/*
 * XREFs of ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x1C011F470
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisEventEntryCount@@YAKW4_NDIS_EVENT_LOG_SIZE@@@Z @ 0x1C011F5E8 (-ndisEventEntryCount@@YAKW4_NDIS_EVENT_LOG_SIZE@@@Z.c)
 */

__int64 __fastcall ndisAllocateEventLog(unsigned int a1, __int16 a2)
{
  unsigned __int16 v3; // di
  __int16 v4; // cx
  __int16 v5; // dx
  __int16 v6; // ax
  __int16 v7; // bx
  int v8; // r14d
  __int16 v9; // si
  __int64 Pool2; // rbx

  if ( (a2 & 0xFFF8) != 0 || !ndisDebugLoggingMode )
    return 0LL;
  if ( ndisDebugLoggingMode == 2 )
    a2 |= 2u;
  v3 = 4;
  v4 = a2 | 0x100;
  if ( (a2 & 1) == 0 )
    v4 = a2;
  v5 = v4 | 0x500;
  if ( (v4 & 2) == 0 )
    v5 = v4;
  v6 = v5 | 0x700;
  if ( (v5 & 4) == 0 )
    v6 = v5;
  v7 = v6;
  if ( (v6 & 0x200) != 0 )
  {
    v3 = 16;
  }
  else if ( (v6 & 0x400) != 0 )
  {
    v3 = 8;
  }
  else if ( (v6 & 0x100) == 0 )
  {
    v3 = 2;
  }
  v8 = ndisEventEntryCount(a1);
  v9 = v7 | 0x1000;
  if ( (v7 & 2) == 0 )
    v9 = v7;
  Pool2 = ExAllocatePool2(64LL, v8 * (unsigned int)v3 + 32LL, 1818575950);
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_OWORD *)Pool2 = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 16));
  *(_DWORD *)(Pool2 + 28) = 0;
  *(_DWORD *)(Pool2 + 8) = -1;
  *(_WORD *)(Pool2 + 24) = v9;
  *(_WORD *)(Pool2 + 26) = v3;
  *(_DWORD *)(Pool2 + 12) = v8;
  *(_QWORD *)Pool2 = MEMORY[0xFFFFF78000000014];
  if ( (v9 & 2) != 0 )
    memset((void *)(Pool2 + 32), 0, v8 * (unsigned int)v3);
  return Pool2;
}
