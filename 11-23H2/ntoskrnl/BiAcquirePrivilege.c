/*
 * XREFs of BiAcquirePrivilege @ 0x1408060A8
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
 *     RtlImpersonateSelfEx @ 0x1407D2D5C (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14080618C (BiAdjustPrivilege.c)
 */

__int64 __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  __int64 result; // rax
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
    result = RtlImpersonateSelfEx(2, 0, 0LL);
    if ( (int)result < 0 )
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
  return (unsigned int)v6;
}
