/*
 * XREFs of sub_14045F87C @ 0x14045F87C
 * Callers:
 *     sub_1403A5AF0 @ 0x1403A5AF0 (sub_1403A5AF0.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS sub_14045F87C()
{
  return KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
}
