/*
 * XREFs of sub_1405175B0 @ 0x1405175B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405198A0 @ 0x1405198A0 (sub_1405198A0.c)
 */

__int64 __fastcall sub_1405175B0(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 433) )
    return 0xFFFFFFFFLL;
  else
    return sub_1405198A0(*(_QWORD *)(a1 + 360), *(unsigned int *)(a1 + 372));
}
