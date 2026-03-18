/*
 * XREFs of KeInitializeAffinityEx @ 0x14045FF20
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx(_DWORD *a1)
{
  a1[1] = 0;
  *a1 = 1310721;
  return memset(a1 + 2, 0, 0xA0uLL);
}
