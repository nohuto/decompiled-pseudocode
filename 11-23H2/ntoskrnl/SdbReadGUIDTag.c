/*
 * XREFs of SdbReadGUIDTag @ 0x140855AB4
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x140855840 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbReadBinaryTag @ 0x140695430 (SdbReadBinaryTag.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  *a1 = 0LL;
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, (__int64)a1, 0x10u) )
  {
    AslLogCallPrintf(1LL);
    *a1 = *a4;
  }
  return a1;
}
