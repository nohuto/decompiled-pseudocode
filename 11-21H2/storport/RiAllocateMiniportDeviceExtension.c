/*
 * XREFs of RiAllocateMiniportDeviceExtension @ 0x1C008E980
 * Callers:
 *     RaidInitializeAdapter @ 0x1C008D1D8 (RaidInitializeAdapter.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

__int64 __fastcall RiAllocateMiniportDeviceExtension(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  _QWORD *Pool; // rax

  v2 = *(unsigned int *)(a1[29] + 64LL);
  v3 = (unsigned int)(v2 + 16);
  if ( v3 < 0x10 )
    return 3221225495LL;
  if ( v3 < v2 )
    return 3221225495LL;
  Pool = (_QWORD *)RaidAllocatePool(64LL, v3, 1162699090LL, *(_QWORD *)(*a1 + 8LL));
  a1[30] = Pool;
  if ( !Pool )
    return 3221225495LL;
  *Pool = a1;
  *(_QWORD *)(a1[30] + 8LL) = a1;
  return 0LL;
}
