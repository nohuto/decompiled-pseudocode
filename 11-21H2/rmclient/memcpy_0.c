/*
 * XREFs of memcpy_0 @ 0x180015702
 * Callers:
 *     RmpClientWnfSubscriptionWorker @ 0x180007530 (RmpClientWnfSubscriptionWorker.c)
 *     CempGetTokenHostInfo @ 0x180007FD0 (CempGetTokenHostInfo.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
