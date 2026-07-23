/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1409FBC30
 * Callers:
 *     PopClearSystemSleepCheckpoint @ 0x140996F7C (PopClearSystemSleepCheckpoint.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140A00540 (NtSetSystemEnvironmentValueEx.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140AAA464 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     ExpUnicodeStringToNonpagedWStr @ 0x14068755C (ExpUnicodeStringToNonpagedWStr.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FE184 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(const void **a1, int a2, __int64 a3, int a4, int a5)
{
  _WORD *v9; // rdi
  unsigned int v10; // ebx

  if ( dword_140C31AB0 != 2 )
    return 3221225474LL;
  v9 = ExpUnicodeStringToNonpagedWStr(a1);
  if ( !v9 )
    return 3221225626LL;
  v10 = ExpSetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4 & (unsigned int)-(a3 != 0), a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}
