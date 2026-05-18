/*
 * XREFs of sub_18000C620 @ 0x18000C620
 * Callers:
 *     sub_18000C510 @ 0x18000C510 (sub_18000C510.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 * Callees:
 *     <none>
 */

int sub_18000C620()
{
  if ( qword_1801F7348 )
    return qword_1801F7348(&unk_1801F7308);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
