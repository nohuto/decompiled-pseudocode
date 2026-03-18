/*
 * XREFs of RtlpGetChainHead @ 0x140370000
 * Callers:
 *     RtlContractHashTable @ 0x1403399F0 (RtlContractHashTable.c)
 *     RtlpPopulateContext @ 0x14036FDA4 (RtlpPopulateContext.c)
 *     RtlExpandHashTable @ 0x14036FE40 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetChainHead(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v3; // ecx

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v3, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v3);
    v2 = *(_QWORD *)(v2 + 8LL * (v3 - 7));
  }
  return v2 + 16LL * a2;
}
