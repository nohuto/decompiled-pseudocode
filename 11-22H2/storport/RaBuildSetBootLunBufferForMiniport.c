/*
 * XREFs of RaBuildSetBootLunBufferForMiniport @ 0x1C0056AE8
 * Callers:
 *     RaidAdapterSetBootLunIoctl @ 0x1C0038F94 (RaidAdapterSetBootLunIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidAdapterFindUnitByIdentifier @ 0x1C0035824 (RaidAdapterFindUnitByIdentifier.c)
 */

__int64 __fastcall RaBuildSetBootLunBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  _DWORD *Pool; // rax
  _DWORD *v10; // rbx
  _BYTE *UnitByIdentifier; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 44LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( Pool )
  {
    Pool[4] = 3004036;
    *Pool = 28;
    Pool[3] = *(_DWORD *)(a1 + 4060);
    Pool[6] = 16;
    Pool[8] = 16;
    Pool[7] = 1;
    v13 = *(_OWORD *)(v4 + 8);
    UnitByIdentifier = RaidAdapterFindUnitByIdentifier(a1, &v13);
    if ( UnitByIdentifier )
    {
      v10[9] = 8;
      *((_BYTE *)v10 + 43) = UnitByIdentifier[98];
      *((_BYTE *)v10 + 41) = UnitByIdentifier[96];
      *((_BYTE *)v10 + 40) = 0;
      *((_BYTE *)v10 + 42) = UnitByIdentifier[97];
    }
    else
    {
      v5 = -1073741632;
    }
  }
  else
  {
    v5 = -1073741670;
  }
  result = v5;
  *a3 = v10;
  *a4 = 44;
  return result;
}
