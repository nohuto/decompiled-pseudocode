/*
 * XREFs of sub_14083BB70 @ 0x14083BB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14083BC60 @ 0x14083BC60 (sub_14083BC60.c)
 */

__int64 __fastcall sub_14083BB70(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 44LL) & 1) != 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  return sub_14083BC60();
}
