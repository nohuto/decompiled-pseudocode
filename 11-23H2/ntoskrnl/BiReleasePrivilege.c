/*
 * XREFs of BiReleasePrivilege @ 0x140806134
 * Callers:
 *     BiQueryBootOptions @ 0x140802550 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x140805FD8 (BiTranslateFilePath.c)
 *     BiQueryBootEntryOrder @ 0x140806F2C (BiQueryBootEntryOrder.c)
 *     BiEnumerateBootEntries @ 0x140806FE0 (BiEnumerateBootEntries.c)
 *     BiLoadHive @ 0x140807084 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D59C (BiUnloadHiveByName.c)
 *     BiAddBootEntry @ 0x140A5D74C (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140A5E310 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140A5E390 (BiDeleteEfiVariable.c)
 *     BiModifyBootEntry @ 0x140A5EBCC (BiModifyBootEntry.c)
 *     BiSetBootEntryOrder @ 0x140A5ECEC (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140A5ED64 (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A5FE34 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14041AF00 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x14080618C (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiReleasePrivilege(unsigned int *a1)
{
  bool v1; // zf
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)a1 + 4) == 0;
  LOBYTE(ThreadInformation) = 0;
  if ( v1 )
    result = BiAdjustPrivilege(*a1, 0LL, &ThreadInformation);
  if ( !*((_BYTE *)a1 + 5) )
  {
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
