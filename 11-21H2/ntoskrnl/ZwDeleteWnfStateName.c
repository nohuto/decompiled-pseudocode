/*
 * XREFs of ZwDeleteWnfStateName @ 0x14041D320
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_1406C32B0 @ 0x1406C32B0 (sub_1406C32B0.c)
 *     sub_1406DD8D0 @ 0x1406DD8D0 (sub_1406DD8D0.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_1407EC1B0 @ 0x1407EC1B0 (sub_1407EC1B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(StateName, v1);
}
