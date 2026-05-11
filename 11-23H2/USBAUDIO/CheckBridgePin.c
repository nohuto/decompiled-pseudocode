/*
 * XREFs of CheckBridgePin @ 0x1C002E2D4
 * Callers:
 *     PropertyJackDescriptionBasicSupport @ 0x1C002F800 (PropertyJackDescriptionBasicSupport.c)
 *     PropertyJackDescriptionGet @ 0x1C002F8E0 (PropertyJackDescriptionGet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckBridgePin(__int64 a1, unsigned int a2, bool *a3)
{
  if ( !a1 || a2 >= *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
    return 3221226021LL;
  *a3 = *(_DWORD *)(176LL * a2 + *(_QWORD *)(*(_QWORD *)a1 + 40LL) + 68) == 4;
  return 0LL;
}
