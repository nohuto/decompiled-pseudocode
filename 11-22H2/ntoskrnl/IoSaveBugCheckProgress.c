/*
 * XREFs of IoSaveBugCheckProgress @ 0x140550A80
 * Callers:
 *     IoWriteCrashDump @ 0x1405513A0 (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x14055C434 (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055C90C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KiBugCheckWriteCrashDump @ 0x140569B8C (KiBugCheckWriteCrashDump.c)
 *     KiDisplayBlueScreen @ 0x14056A1D4 (KiDisplayBlueScreen.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x14057B908 (KiUpdateBugcheckRecoveryProgress.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140673134 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403810A0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1405510A4 (IoUpdateBugCheckProgressEnvVariable.c)
 */

LONG __fastcall IoSaveBugCheckProgress(int a1)
{
  int v2; // ecx
  LONG result; // eax
  int v4; // edx
  _DWORD Src[10]; // [rsp+20h] [rbp-38h] BYREF

  if ( CrashdmpDumpBlock )
  {
    v2 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v2 & 0x860000) == 0 )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v2 ^ ((unsigned __int16)a1 ^ (unsigned __int16)v2) & 0x1FF;
      result = IoUpdateBugCheckProgressEnvVariable();
    }
    if ( a1 == 4 )
    {
      v4 = 4 - *(_DWORD *)(CrashdmpDumpBlock + 1336);
      Src[3] = 0;
      Src[0] = 1733060695;
      Src[1] = 1;
      Src[2] = 40;
      Src[5] = -2147483613;
      Src[4] = 8961 - (v4 != 0);
      Src[6] = 24;
      Src[7] = 8;
      Src[9] = *(_DWORD *)(CrashdmpDumpBlock + 1404);
      Src[8] = *(_DWORD *)(CrashdmpDumpBlock + 24);
      return WheaLogInternalEvent(Src);
    }
  }
  return result;
}
