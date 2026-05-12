/*
 * XREFs of RaidUnitCreateDumpData @ 0x1C0085160
 * Callers:
 *     RaidUnitCreateDumpInfo @ 0x1C0085228 (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0015E80 (RaidGetTelemetryLogPageIds.c)
 */

__int64 __fastcall RaidUnitCreateDumpData(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  _DWORD *Pool; // rax
  unsigned int v7; // esi
  _DWORD *v8; // rdi
  void *v9; // rcx
  _DWORD *v10; // r14
  __int64 v12; // rcx

  Pool = (_DWORD *)RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v7 = 0;
  v8 = Pool;
  if ( Pool )
  {
    *Pool = 88;
    v9 = *(void **)(a1 + 8);
    *a3 = 112;
    v10 = Pool + 22;
    ObfReferenceObject(v9);
    *((_QWORD *)v8 + 1) = a1;
    *((_BYTE *)v8 + 74) = *(_BYTE *)(a1 + 96);
    *((_BYTE *)v8 + 75) = *(_BYTE *)(a1 + 97);
    *((_BYTE *)v8 + 76) = *(_BYTE *)(a1 + 98);
    RaidGetTelemetryLogPageIds(*(_DWORD *)(a1 + 3296), (__int64)(v8 + 10), (_WORD *)v8 + 36);
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1744)) >= 0 )
      {
        *(_BYTE *)v10 = 1;
        v12 = **(_QWORD **)(a1 + 1744);
        *((_QWORD *)v10 + 2) = a1 + 1734;
        *((_QWORD *)v10 + 1) = v12;
        *((_QWORD *)v8 + 2) = a1 + 1735;
        *((_QWORD *)v8 + 3) = StorDumpDiskPowerOn;
        *((_QWORD *)v8 + 4) = v10;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
    }
    *a2 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
