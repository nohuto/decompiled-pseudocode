/*
 * XREFs of sub_1408247DC @ 0x1408247DC
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_140824800 @ 0x140824800 (sub_140824800.c)
 */

ULONG sub_1408247DC()
{
  ULONG result; // eax

  result = sub_140824800();
  if ( (_BYTE)result )
  {
    if ( byte_140C4C688 )
    {
      EtwWrite(qword_140C4C680, &stru_140039798, 0LL, 0, 0LL);
      return DbgPrint("System was rebooted due to system watchdog timeout.\n");
    }
  }
  return result;
}
