/*
 * XREFs of LdrpInitialize @ 0x18007B1C8
 * Callers:
 *     LdrInitializeThunk @ 0x18007B1A0 (LdrInitializeThunk.c)
 * Callees:
 *     __cpu_features_init @ 0x180099F0C (__cpu_features_init.c)
 *     InitSpecialMachineFrames @ 0x1800B07CE (InitSpecialMachineFrames.c)
 *     InitSecurityCookie @ 0x1800DC784 (InitSecurityCookie.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  char v5; // al

  if ( !SecurityCookieInitialized )
  {
    InitSecurityCookie();
    v5 = LdrpIsSecureProcess;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000000) != 0 )
      v5 = 1;
    LdrpIsSecureProcess = v5;
  }
  if ( !SpecialMachineFramesInitialized )
    InitSpecialMachineFrames();
  _cpu_features_init();
  return LdrpInitializeInternal(a1, a2);
}
