/*
 * XREFs of LdrpInitializePolicy @ 0x180078710
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x18006E364 (AppModelPolicy_GetPolicy_Internal.c)
 *     LdrSetDllDirectory @ 0x1800788C0 (LdrSetDllDirectory.c)
 *     LdrSetDefaultDllDirectories @ 0x1800789F0 (LdrSetDefaultDllDirectories.c)
 */

char LdrpInitializePolicy()
{
  struct _PEB *v0; // rbx
  _UNICODE_STRING *p_DllPath; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _PS_PKG_CLAIM v9; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  _PS_PKG_CLAIM v11; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  _PS_PKG_CLAIM v13; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  _PS_PKG_CLAIM v15; // [rsp+60h] [rbp-10h] BYREF
  int v16; // [rsp+90h] [rbp+20h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+28h] BYREF
  _PS_PKG_CLAIM v18; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+38h] BYREF

  v0 = NtCurrentPeb();
  p_DllPath = &v0->ProcessParameters->DllPath;
  LdrpAppPackagesPath = 0uLL;
  LdrpOriginalAppPackagesPath = 0uLL;
  LOBYTE(ProcessParameters) = v0->BitField;
  if ( ((unsigned __int8)ProcessParameters & 0x10) != 0 && p_DllPath->Length )
  {
    v3 = (__int128)*p_DllPath;
    LdrpPolicyBits = 41;
    LdrpAppPackagesPath = v3;
    LdrpOriginalAppPackagesPath = v3;
    if ( (int)AppModelPolicy_GetPolicy_Internal((__int64)p_DllPath, 4, &v16, &v18, &v17) < 0 || v16 == 262145 )
      LdrSetDefaultDllDirectories(0x1000u);
    else
      LdrpPolicyBits &= ~1u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v4, 7, &v16, &v9, &v19) >= 0 && v16 == 458753 )
      LdrpPolicyBits |= 2u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v5, 19, &v16, &v11, &v10) >= 0 && v16 == 1245185 )
      LdrpPolicyBits |= 0x40u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v6, 32, &v16, &v13, &v12) >= 0 && v16 == 2097153 )
      LdrpPolicyBits |= 4u;
    LODWORD(ProcessParameters) = AppModelPolicy_GetPolicy_Internal(v7, 54, &v16, &v15, &v14) | 0x10000000;
    if ( (int)ProcessParameters >= 0 && v16 == 3538945 )
    {
      ProcessParameters = v0->ProcessParameters;
      ProcessParameters->Flags |= 0x4000000u;
    }
  }
  else if ( ((unsigned __int8)ProcessParameters & 2) != 0 )
  {
    p_DllPath->Length = 0;
  }
  else if ( p_DllPath->Length )
  {
    LOBYTE(ProcessParameters) = LdrSetDllDirectory(p_DllPath);
  }
  return (char)ProcessParameters;
}
