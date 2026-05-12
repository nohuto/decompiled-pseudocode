/*
 * XREFs of QuadAlignOffset @ 0x1C000B434
 * Callers:
 *     PartitionIoctlDsm @ 0x1C001D0A8 (PartitionIoctlDsm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QuadAlignOffset(unsigned int a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  __int64 result; // rax

  v2 = a1 + 7;
  v3 = -1;
  if ( a1 + 7 >= a1 )
    v3 = a1 + 7;
  result = v2 < a1 ? 0xC0000095 : 0;
  *a2 = v3;
  if ( v2 >= a1 )
    *a2 = v3 & 0xFFFFFFF8;
  return result;
}
