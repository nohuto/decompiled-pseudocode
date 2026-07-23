/*
 * XREFs of sub_14025D540 @ 0x14025D540
 * Callers:
 *     <none>
 * Callees:
 *     sub_140304A20 @ 0x140304A20 (sub_140304A20.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

char sub_14025D540()
{
  if ( byte_140C5AE30 && EtwEventEnabled(qword_140C1F580, &stru_140010E28) )
    return sub_140304A20();
  else
    return 1;
}
