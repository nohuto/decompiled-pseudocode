/*
 * XREFs of PsGetThreadId @ 0x140230790
 * Callers:
 *     sub_1406634A0 @ 0x1406634A0 (sub_1406634A0.c)
 *     sub_1407DA91C @ 0x1407DA91C (sub_1407DA91C.c)
 *     sub_140A6ACD4 @ 0x140A6ACD4 (sub_140A6ACD4.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return (HANDLE)*((_QWORD *)Thread + 154);
}
