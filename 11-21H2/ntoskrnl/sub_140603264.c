/*
 * XREFs of sub_140603264 @ 0x140603264
 * Callers:
 *     sub_1406030C8 @ 0x1406030C8 (sub_1406030C8.c)
 * Callees:
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 */

NTSTATUS sub_140603264()
{
  NTSTATUS result; // eax

  if ( !qword_140C09100[0] )
    return 0;
  result = EtwUnregister(qword_140C09100[0]);
  qword_140C09100[0] = 0LL;
  return result;
}
