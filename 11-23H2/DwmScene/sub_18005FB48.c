/*
 * XREFs of sub_18005FB48 @ 0x18005FB48
 * Callers:
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 *     sub_1800E7B5A @ 0x1800E7B5A (sub_1800E7B5A.c)
 * Callees:
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 */

__int64 __fastcall sub_18005FB48(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18004D8C4(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
