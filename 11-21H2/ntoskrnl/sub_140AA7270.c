/*
 * XREFs of sub_140AA7270 @ 0x140AA7270
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AA72F4 @ 0x140AA72F4 (sub_140AA72F4.c)
 */

__int64 __fastcall sub_140AA7270(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( *(int *)(a1 + 32) >= 0 )
      return sub_140AA72F4(*(_QWORD *)(a1 + 24), *(_QWORD *)a1);
  }
  return result;
}
