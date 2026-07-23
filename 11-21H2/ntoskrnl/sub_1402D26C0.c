/*
 * XREFs of sub_1402D26C0 @ 0x1402D26C0
 * Callers:
 *     sub_1403C5C64 @ 0x1403C5C64 (sub_1403C5C64.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     sub_140AA9A28 @ 0x140AA9A28 (sub_140AA9A28.c)
 */

PKSPIN_LOCK sub_1402D26C0()
{
  PKSPIN_LOCK result; // rax

  result = qword_140D01468;
  if ( qword_140D01468 )
  {
    if ( qword_140D01468[1] )
      return (PKSPIN_LOCK)sub_140AA9A28();
  }
  return result;
}
