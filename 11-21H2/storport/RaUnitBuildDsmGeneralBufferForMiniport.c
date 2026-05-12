/*
 * XREFs of RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0050C60
 * Callers:
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 */

__int64 __fastcall RaUnitBuildDsmGeneralBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  const void *v4; // r13
  unsigned int v5; // ebx
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 Pool; // rax
  __int64 result; // rax

  v4 = *(const void **)(a2 + 24);
  v5 = 0;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v5 = -1073741637;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 184);
    v9 = *(unsigned int *)(v10 + 16) + 32LL;
    if ( v9 <= 0xFFFFFFFF )
    {
      Pool = RaidAllocatePool(64LL, (unsigned int)v9, 1918067026LL, *(_QWORD *)(a1 + 8));
      v8 = Pool;
      if ( Pool )
      {
        *(_DWORD *)(Pool + 16) = 1771297;
        *(_QWORD *)(Pool + 4) = 0x4E45474D5344504DLL;
        *(_DWORD *)(Pool + 24) = v9 - 28;
        *(_DWORD *)Pool = 28;
        *(_DWORD *)(Pool + 20) = 0;
        memmove((void *)(Pool + 32), v4, *(unsigned int *)(v10 + 16));
      }
      else
      {
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  result = v5;
  *a4 = v9;
  *a3 = v8;
  return result;
}
