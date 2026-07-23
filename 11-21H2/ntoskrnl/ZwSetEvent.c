/*
 * XREFs of ZwSetEvent @ 0x14041B920
 * Callers:
 *     sub_140626F10 @ 0x140626F10 (sub_140626F10.c)
 *     sub_1407F3CF0 @ 0x1407F3CF0 (sub_1407F3CF0.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return sub_140433F80(EventHandle, PreviousState);
}
