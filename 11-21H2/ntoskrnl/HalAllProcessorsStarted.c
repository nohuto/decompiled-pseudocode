/*
 * XREFs of HalAllProcessorsStarted @ 0x140AFB130
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_140A56C48 @ 0x140A56C48 (sub_140A56C48.c)
 */

bool HalAllProcessorsStarted()
{
  return (int)sub_140A56C48(0x15u, 22) >= 0;
}
