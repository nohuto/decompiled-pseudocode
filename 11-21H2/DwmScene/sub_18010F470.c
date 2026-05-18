/*
 * XREFs of sub_18010F470 @ 0x18010F470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_4 @ 0x1800126BC (nullsub_4.c)
 */

void __fastcall sub_18010F470()
{
  char *v0; // rcx

  if ( (unsigned __int64)qword_1801FACF0 >= 8 )
  {
    nullsub_4();
    sub_180010884(v0, 2 * qword_1801FACF0 + 2);
  }
  qword_1801FACF0 = 7LL;
  qword_1801FACE8 = 0LL;
  LOWORD(qword_1801FACD8) = 0;
}
