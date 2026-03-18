/*
 * XREFs of NVMeControllerAsyncReset @ 0x1C000CBE0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002A40 (NVMeCompletionDpcRoutine.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C00151C0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C00183B0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BBE0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeControllerAsyncReset(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0LL;
  if ( !(unsigned int)StorPortExtendedFunction(29LL, a1, &v9) && !(unsigned int)StorPortExtendedFunction(0LL, a1, 24LL) )
  {
    MEMORY[0] = a2;
    MEMORY[8] = a3;
    MEMORY[0x10] = a4;
    if ( !(unsigned int)StorPortExtendedFunction(30LL, a1, NVMeControllerAsyncResetWorker) )
      return 1;
  }
  if ( v9 )
    StorPortExtendedFunction(31LL, a1, v9);
  return 0;
}
