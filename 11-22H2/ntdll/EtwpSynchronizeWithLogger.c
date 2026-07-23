/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x180062234
 * Callers:
 *     EtwpFlushUmLogger @ 0x180062150 (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x180062480 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18012440C (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180124AC4 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x18009EE70 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
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
