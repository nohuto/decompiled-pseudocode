/*
 * XREFs of InitializeBusesWithVmLunsBitmap @ 0x1C00319F4
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

__int64 __fastcall InitializeBusesWithVmLunsBitmap(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // edi
  ULONG *Pool; // rax

  v1 = 0;
  v3 = (*(unsigned __int8 *)(a1 + 416) >> 5) + 1;
  if ( (*(_BYTE *)(a1 + 416) & 0x1F) == 0 )
    v3 = *(unsigned __int8 *)(a1 + 416) >> 5;
  if ( *(char *)(a1 + 110) < 0 && (Pool = *(ULONG **)(a1 + 4752)) != 0LL
    || (Pool = (ULONG *)RaidAllocatePool(64LL, 4LL * v3, 1297506642LL, *(_QWORD *)(a1 + 8)),
        (*(_QWORD *)(a1 + 4752) = Pool) != 0LL) )
  {
    RtlInitializeBitMap((PRTL_BITMAP)(a1 + 4736), Pool, 32 * v3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
