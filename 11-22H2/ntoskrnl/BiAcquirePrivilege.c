/*
 * XREFs of BiAcquirePrivilege @ 0x140808628
 * Callers:
 *     BiQueryBootOptions @ 0x140804AD4 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x140808558 (BiTranslateFilePath.c)
 *     BiQueryBootEntryOrder @ 0x1408094AC (BiQueryBootEntryOrder.c)
 *     BiEnumerateBootEntries @ 0x140809560 (BiEnumerateBootEntries.c)
 *     BiLoadHive @ 0x140809604 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D60C (BiUnloadHiveByName.c)
 *     BiAddBootEntry @ 0x140A5D7BC (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140A5E380 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140A5E400 (BiDeleteEfiVariable.c)
 *     BiModifyBootEntry @ 0x140A5EC3C (BiModifyBootEntry.c)
 *     BiSetBootEntryOrder @ 0x140A5ED5C (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140A5EDD4 (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14041A840 (ZwSetInformationThread.c)
 *     RtlImpersonateSelfEx @ 0x1407D32DC (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14080870C (BiAdjustPrivilege.c)
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
