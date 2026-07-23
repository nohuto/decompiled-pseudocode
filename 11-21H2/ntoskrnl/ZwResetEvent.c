/*
 * XREFs of ZwResetEvent @ 0x14041E7A0
 * Callers:
 *     sub_1406266A0 @ 0x1406266A0 (sub_1406266A0.c)
 *     sub_1406D958C @ 0x1406D958C (sub_1406D958C.c)
 *     sub_1406DBCB4 @ 0x1406DBCB4 (sub_1406DBCB4.c)
 *     sub_1407F3CF0 @ 0x1407F3CF0 (sub_1407F3CF0.c)
 *     sub_14082EA28 @ 0x14082EA28 (sub_14082EA28.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return sub_140433F80(EventHandle, PreviousState);
}
