/*
 * XREFs of EtwpDisableStackWalkApc @ 0x14025B310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EtwpDisableStackWalkApc()
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int32 v1; // edx

  CurrentThread = KeGetCurrentThread();
  _m_prefetchw((char *)CurrentThread + 120);
  do
    v1 = *((_DWORD *)CurrentThread + 30);
  while ( v1 != _InterlockedCompareExchange((volatile signed __int32 *)CurrentThread + 30, v1 | 0xFF800000, v1) );
  return v1 >> 23;
}
