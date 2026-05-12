/*
 * XREFs of RaBuildQueryBootLunsBufferForMiniport @ 0x1C004D384
 * Callers:
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0035BD0 (RaidAdapterQueryBootLunsIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildQueryBootLunsBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _DWORD *Pool; // rax
  __int64 result; // rax

  v4 = 0;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 108LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    Pool[4] = 2954880;
    *Pool = 28;
    Pool[3] = *(_DWORD *)(a1 + 3996);
    Pool[6] = 80;
    Pool[8] = 80;
    Pool[7] = 1;
  }
  else
  {
    v4 = -1073741670;
  }
  *a3 = Pool;
  result = v4;
  *a4 = 108;
  return result;
}
