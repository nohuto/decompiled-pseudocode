/*
 * XREFs of sub_140407D90 @ 0x140407D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140400F98 @ 0x140400F98 (sub_140400F98.c)
 *     sub_140400FB0 @ 0x140400FB0 (sub_140400FB0.c)
 */

__int64 sub_140407D90()
{
  int v0; // edi

  v0 = sub_140400FB0();
  return v0 & (unsigned int)sub_140400F98();
}
