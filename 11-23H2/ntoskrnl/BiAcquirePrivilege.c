/*
 * XREFs of BiAcquirePrivilege @ 0x140806378
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
 *     RtlImpersonateSelfEx @ 0x1407D302C (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14080645C (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  NTSTATUS result; // eax
  int v6; // edi
  __int64 ThreadInformation; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(ThreadInformation) = 0;
  v2 = a2;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    result = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
    if ( result < 0 )
      return result;
  }
  LOBYTE(a2) = 1;
  v6 = BiAdjustPrivilege(a1, a2, &ThreadInformation);
  if ( v6 < 0 )
  {
    if ( !v4 )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
  }
  else
  {
    *(_BYTE *)(v2 + 4) = ThreadInformation;
    *(_BYTE *)(v2 + 5) = v4;
    *(_DWORD *)v2 = a1;
  }
  return v6;
}
