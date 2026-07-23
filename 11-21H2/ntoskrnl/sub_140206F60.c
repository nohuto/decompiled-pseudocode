/*
 * XREFs of sub_140206F60 @ 0x140206F60
 * Callers:
 *     sub_140206BC4 @ 0x140206BC4 (sub_140206BC4.c)
 *     RtlExpandHashTable @ 0x140206C60 (RtlExpandHashTable.c)
 *     RtlContractHashTable @ 0x140206E20 (RtlContractHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140206F60(__int64 a1, unsigned int a2)
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
