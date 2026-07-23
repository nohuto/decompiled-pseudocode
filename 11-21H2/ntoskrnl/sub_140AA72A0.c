/*
 * XREFs of sub_140AA72A0 @ 0x140AA72A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AA72F4 @ 0x140AA72F4 (sub_140AA72F4.c)
 */

__int64 __fastcall sub_140AA72A0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
    return sub_140AA72F4(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  return result;
}
