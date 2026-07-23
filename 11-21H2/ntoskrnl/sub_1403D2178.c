/*
 * XREFs of sub_1403D2178 @ 0x1403D2178
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D21B8 @ 0x1402D21B8 (sub_1402D21B8.c)
 *     sub_1406DE8A0 @ 0x1406DE8A0 (sub_1406DE8A0.c)
 *     EtwWriteEndScenario @ 0x14081CDA0 (EtwWriteEndScenario.c)
 *     sub_14084DB84 @ 0x14084DB84 (sub_14084DB84.c)
 *     sub_14084DC6C @ 0x14084DC6C (sub_14084DC6C.c)
 *     sub_14084DCF8 @ 0x14084DCF8 (sub_14084DCF8.c)
 */

NTSTATUS sub_1403D2178()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax

  sub_1402D21B8(&stru_140012BD0, 0, 0LL);
  sub_1402D21B8(&stru_140012BC0, 0, 0LL);
  LOBYTE(v0) = 1;
  sub_1406DE8A0(v0);
  sub_1402D21B8(&stru_140012BB0, 0, 0LL);
  byte_140C46014 = 1;
  KeSetEvent(&stru_140C46BE0, 0, 0);
  sub_14084DCF8();
  sub_14084DC6C();
  sub_14084DB84();
  result = sub_1402D21B8(&stru_140012BA0, 0, 0LL);
  if ( qword_140C54EA8 )
    return EtwWriteEndScenario(qword_140C54EA8, &stru_140012B90, &ActivityId, 0, 0LL);
  return result;
}
