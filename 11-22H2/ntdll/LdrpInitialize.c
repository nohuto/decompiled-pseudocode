/*
 * XREFs of LdrpInitialize @ 0x180073E78
 * Callers:
 *     LdrInitializeThunk @ 0x180073E50 (LdrInitializeThunk.c)
 * Callees:
 *     __cpu_features_init @ 0x180094FEC (__cpu_features_init.c)
 *     InitSecurityCookie @ 0x1800AD5C0 (InitSecurityCookie.c)
 *     InitSpecialMachineFrames @ 0x1800AD638 (InitSpecialMachineFrames.c)
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
