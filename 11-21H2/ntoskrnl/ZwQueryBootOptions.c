/*
 * XREFs of ZwQueryBootOptions @ 0x14041E040
 * Callers:
 *     sub_140623A30 @ 0x140623A30 (sub_140623A30.c)
 *     sub_140A2089C @ 0x140A2089C (sub_140A2089C.c)
 *     sub_140A22034 @ 0x140A22034 (sub_140A22034.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(BootOptions, BootOptionsLength);
}
