/*
 * XREFs of sub_140A9F094 @ 0x140A9F094
 * Callers:
 *     sub_140602260 @ 0x140602260 (sub_140602260.c)
 * Callees:
 *     sub_140A9B1BC @ 0x140A9B1BC (sub_140A9B1BC.c)
 */

__int64 sub_140A9F094()
{
  __int64 result; // rax

  sub_140A9B1BC(qword_140D57800);
  result = (unsigned int)_InterlockedExchange(&dword_140D5756C, 0);
  _InterlockedExchange(&dword_140D57578, 0);
  return result;
}
