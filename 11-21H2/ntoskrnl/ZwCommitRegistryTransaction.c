/*
 * XREFs of ZwCommitRegistryTransaction @ 0x14041CAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCommitRegistryTransaction(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return sub_140433F80(a1, a2);
}
