/*
 * XREFs of PsTlsAlloc @ 0x14084C260
 * Callers:
 *     PspTlsInitialize @ 0x140B66B84 (PspTlsInitialize.c)
 * Callees:
 *     PspTlsAlloc @ 0x14084C294 (PspTlsAlloc.c)
 */

__int64 __fastcall PsTlsAlloc(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (a2 & 0xBFFFFFFF) != 0 )
    return 3221225485LL;
  else
    return PspTlsAlloc(a1, (unsigned int)(PspTlsPreAllocatedSlotCount + 2), a2, a3);
}
