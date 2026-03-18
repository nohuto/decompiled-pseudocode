/*
 * XREFs of NVMeQueueWorkItem @ 0x1C0016D68
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002A40 (NVMeCompletionDpcRoutine.c)
 *     NVMeControllerInitPart3 @ 0x1C000DE44 (NVMeControllerInitPart3.c)
 *     FirmwareDownload @ 0x1C0011AB4 (FirmwareDownload.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C00151C0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeSanitizeCommandCompletion @ 0x1C0017F00 (NVMeSanitizeCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C00183B0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001859C (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BBE0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C00222C8 (NVMeReenumerateNameSpaceIdentify.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C00258C4 (ProcessNvmeSanitizeStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeQueueWorkItem(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  result = StorPortExtendedFunction(29LL, a1, &v5);
  if ( !(_DWORD)result )
    return StorPortExtendedFunction(30LL, a1, a2);
  return result;
}
