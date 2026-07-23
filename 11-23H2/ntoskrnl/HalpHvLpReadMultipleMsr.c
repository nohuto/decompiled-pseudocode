/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x14050BC40
 * Callers:
 *     HalpHvEpReadMsr @ 0x14045BD90 (HalpHvEpReadMsr.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x14050BB74 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  if ( qword_140C624F8 )
    return qword_140C624F8();
  if ( a2 )
    memset(a4, 0, 8LL * a2);
  return 3221225473LL;
}
