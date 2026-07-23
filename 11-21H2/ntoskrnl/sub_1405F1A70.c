/*
 * XREFs of sub_1405F1A70 @ 0x1405F1A70
 * Callers:
 *     sub_1408530AC @ 0x1408530AC (sub_1408530AC.c)
 *     sub_1409C0960 @ 0x1409C0960 (sub_1409C0960.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405F1A70(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  _DWORD *v4; // r10
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  _BitScanReverse(&v3, a2);
  v4 = *(_DWORD **)(a1 + 8LL * (v3 - 4));
  --*v4;
  v5 = a2 ^ (unsigned __int64)(unsigned int)(1 << v3);
  result = 5 * v5;
  if ( *(_QWORD *)&v4[10 * v5 + 4] )
    __int2c();
  return result;
}
