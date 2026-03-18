/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x14050B6F0
 * Callers:
 *     HalpHvEpReadMsr @ 0x14045B990 (HalpHvEpReadMsr.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x14050B624 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  if ( qword_140C624F8 )
    return qword_140C624F8();
  if ( a2 )
    memset(a4, 0, 8LL * a2);
  return 3221225473LL;
}
