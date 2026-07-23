/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x180090FC8
 * Callers:
 *     EtwpStopUmLogger @ 0x180005B64 (EtwpStopUmLogger.c)
 *     EtwpFlushUmLogger @ 0x180090EE4 (EtwpFlushUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x1801226D4 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180122B90 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 316) |= a2;
  ZwSetEvent(*(HANDLE *)(a1 + 112), 0LL);
  NtWaitForSingleObject(*(HANDLE *)(a1 + 120), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 316) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
