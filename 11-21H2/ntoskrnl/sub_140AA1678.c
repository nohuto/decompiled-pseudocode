/*
 * XREFs of sub_140AA1678 @ 0x140AA1678
 * Callers:
 *     sub_140602260 @ 0x140602260 (sub_140602260.c)
 * Callees:
 *     sub_140A9B1BC @ 0x140A9B1BC (sub_140A9B1BC.c)
 */

__int64 sub_140AA1678()
{
  __int64 result; // rax

  sub_140A9B1BC(qword_140D577D8);
  result = (unsigned int)_InterlockedExchange(&dword_140D57574, 0);
  _InterlockedExchange(&dword_140D575B8, 0);
  return result;
}
