/*
 * XREFs of KeInitializeAffinityEx2 @ 0x1402C0500
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall KeInitializeAffinityEx2(__int64 a1, unsigned __int16 a2)
{
  *(_WORD *)(a1 + 2) = a2;
  *(_WORD *)a1 = 1;
  *(_DWORD *)(a1 + 4) = 0;
  return memset((void *)(a1 + 8), 0, 8LL * a2);
}
