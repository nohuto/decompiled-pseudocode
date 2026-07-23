/*
 * XREFs of sub_140AA72D0 @ 0x140AA72D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AA72F4 @ 0x140AA72F4 (sub_140AA72F4.c)
 */

__int64 __fastcall sub_140AA72D0(__int64 a1)
{
  __int64 result; // rax

  if ( *(int *)(a1 + 28) >= 0 )
    return sub_140AA72F4(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  return result;
}
