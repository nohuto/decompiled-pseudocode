/*
 * XREFs of sub_1403DED94 @ 0x1403DED94
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     EtwWriteStartScenario @ 0x14081C9F0 (EtwWriteStartScenario.c)
 */

__int64 sub_1403DED94()
{
  if ( qword_140C54EA8 )
    return EtwWriteStartScenario(qword_140C54EA8, &stru_140013580, &ActivityId, 0, 0LL);
  else
    return 0LL;
}
