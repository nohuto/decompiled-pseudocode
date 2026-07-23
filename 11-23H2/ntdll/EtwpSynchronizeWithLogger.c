/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x18005F3A4
 * Callers:
 *     EtwpFlushUmLogger @ 0x18005F2C0 (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x18005F5F0 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18012588C (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180125F44 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
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
