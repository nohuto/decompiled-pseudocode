/*
 * XREFs of PsReturnPoolQuota @ 0x140367E30
 * Callers:
 *     sub_140367DEC @ 0x140367DEC (sub_140367DEC.c)
 * Callees:
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    sub_1403493B0(*((char **)Process + 173), (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
