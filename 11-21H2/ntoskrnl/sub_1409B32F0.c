/*
 * XREFs of sub_1409B32F0 @ 0x1409B32F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14085BC40 @ 0x14085BC40 (sub_14085BC40.c)
 */

__int64 __fastcall sub_1409B32F0(ULONG_PTR a1, HANDLE *a2, int a3, int a4)
{
  return sub_14085BC40(a1, a2, a3, a4, *((_BYTE *)KeGetCurrentThread() + 562), 0);
}
