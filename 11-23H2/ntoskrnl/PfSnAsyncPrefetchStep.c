/*
 * XREFs of PfSnAsyncPrefetchStep @ 0x14074CCE8
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14074DE90 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfSnPrefetchSections @ 0x14074CD68 (PfSnPrefetchSections.c)
 *     PfSnPrefetchMetadata @ 0x14075E7D4 (PfSnPrefetchMetadata.c)
 */

__int64 __fastcall PfSnAsyncPrefetchStep(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  int v6; // r9d
  __int64 result; // rax
  int v8; // r9d

  v3 = a2;
  PfSnPrefetchMetadata(a2, a3);
  result = PfSnPrefetchSections(v3, 0, a3, v6, *(_QWORD *)(a1 + 216));
  if ( (int)result >= 0 )
  {
    result = PfSnPrefetchSections(v3, 1, a3, v8, *(_QWORD *)(a1 + 216));
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 232) |= a3;
      return 0LL;
    }
  }
  return result;
}
