/*
 * XREFs of ntoskrnl_2 @ 0x14041D120
 * Callers:
 *     sub_140B26600 @ 0x140B26600 (sub_140B26600.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ntoskrnl_2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return sub_140433F80(a1, a2);
}
