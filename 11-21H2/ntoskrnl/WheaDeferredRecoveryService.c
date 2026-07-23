/*
 * XREFs of WheaDeferredRecoveryService @ 0x140645AB0
 * Callers:
 *     sub_14051F590 @ 0x14051F590 (sub_14051F590.c)
 * Callees:
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 */

__int64 WheaDeferredRecoveryService()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&dword_140D04C74, 0);
  if ( (_DWORD)result == 1 )
    return sub_140345190((ULONG_PTR)&dword_140C10B40, 0LL, 0LL, 0LL, 0);
  return result;
}
