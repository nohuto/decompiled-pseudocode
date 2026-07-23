/*
 * XREFs of BiReleasePrivilege @ 0x140806404
 * Callers:
 *     BiQueryBootOptions @ 0x140802820 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1408062A8 (BiTranslateFilePath.c)
 *     BiQueryBootEntryOrder @ 0x1408071FC (BiQueryBootEntryOrder.c)
 *     BiEnumerateBootEntries @ 0x1408072B0 (BiEnumerateBootEntries.c)
 *     BiLoadHive @ 0x140807354 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D84C (BiUnloadHiveByName.c)
 *     BiAddBootEntry @ 0x140A5D9FC (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140A5E5C0 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140A5E640 (BiDeleteEfiVariable.c)
 *     BiModifyBootEntry @ 0x140A5EE7C (BiModifyBootEntry.c)
 *     BiSetBootEntryOrder @ 0x140A5EF9C (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140A5F014 (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A600E4 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14041B290 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x14080645C (BiAdjustPrivilege.c)
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
