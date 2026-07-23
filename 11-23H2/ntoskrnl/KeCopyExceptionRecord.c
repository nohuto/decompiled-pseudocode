/*
 * XREFs of KeCopyExceptionRecord @ 0x140578DA0
 * Callers:
 *     KiDispatchException @ 0x14030CF30 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x14030F468 (KiInitializeUserApc.c)
 *     DbgkForwardException @ 0x140939764 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
