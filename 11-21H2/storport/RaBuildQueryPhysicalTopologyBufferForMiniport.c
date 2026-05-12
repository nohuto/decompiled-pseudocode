/*
 * XREFs of RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0002D20
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0002DE0 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0053504 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildQueryPhysicalTopologyBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r10
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 Pool; // rax
  __int64 result; // rax

  v4 = 0;
  v7 = 0LL;
  v8 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v9 = v8 + 28;
  if ( (unsigned __int64)(v8 + 28) > 0xFFFFFFFF )
  {
    v4 = -1073741811;
  }
  else
  {
    Pool = RaidAllocatePool(64LL, v9, 1918067026LL, a1);
    v7 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 2954240;
      *(_QWORD *)(Pool + 4) = 0x59474F4C4F504F54LL;
      *(_DWORD *)(Pool + 28) = 56;
      *(_DWORD *)(Pool + 32) = v8;
      *(_DWORD *)(Pool + 12) = 60;
      *(_DWORD *)(Pool + 24) = v8;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  result = v4;
  *a4 = v9;
  *a3 = v7;
  return result;
}
