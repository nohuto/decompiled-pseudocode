/*
 * XREFs of ntoskrnl_33 @ 0x14041CD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ntoskrnl_33(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return sub_140433F80(a1, a2);
}
