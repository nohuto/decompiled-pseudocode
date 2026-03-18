/*
 * XREFs of IsFirmwareActivateWithoutResetEnabled @ 0x1C0014B34
 * Callers:
 *     FirmwareActivate @ 0x1C0011740 (FirmwareActivate.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0015090 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0018138 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0018240 (NVMeWriteBufferFirmwareActivateCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFirmwareActivateWithoutResetEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 1840);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 260) & 0x10) != 0 )
    return (*(_BYTE *)(a1 + 64) & 0x20) == 0;
  return v2;
}
