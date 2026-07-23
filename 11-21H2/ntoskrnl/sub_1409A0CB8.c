/*
 * XREFs of sub_1409A0CB8 @ 0x1409A0CB8
 * Callers:
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 * Callees:
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 */

NTSTATUS sub_1409A0CB8()
{
  return EtwUnregister(qword_140C1C820);
}
