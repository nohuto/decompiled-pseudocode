/*
 * XREFs of LdrpInitializePolicy @ 0x180060340
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrSetDefaultDllDirectories @ 0x180060500 (LdrSetDefaultDllDirectories.c)
 *     LdrSetDllDirectory @ 0x180060540 (LdrSetDllDirectory.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x18007397C (AppModelPolicy_GetPolicy_Internal.c)
 */

char LdrpInitializePolicy()
{
  struct _PEB *v0; // rbx
  _UNICODE_STRING *p_DllPath; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  __int128 v3; // xmm0
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char v9; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-38h] BYREF
  char v11; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-28h] BYREF
  char v13; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v14[8]; // [rsp+58h] [rbp-18h] BYREF
  char v15; // [rsp+60h] [rbp-10h] BYREF
  int v16; // [rsp+90h] [rbp+20h] BYREF
  char v17; // [rsp+98h] [rbp+28h] BYREF
  char v18; // [rsp+A0h] [rbp+30h] BYREF
  char v19; // [rsp+A8h] [rbp+38h] BYREF

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
    if ( (int)AppModelPolicy_GetPolicy_Internal(
                (_DWORD)p_DllPath,
                4,
                (unsigned int)&v16,
                (unsigned int)&v18,
                (__int64)&v17) < 0
      || v16 == 262145 )
    {
      LdrSetDefaultDllDirectories(0x1000u);
    }
    else
    {
      LdrpPolicyBits &= ~1u;
    }
    if ( (int)AppModelPolicy_GetPolicy_Internal(v4, 7, (unsigned int)&v16, (unsigned int)&v9, (__int64)&v19) >= 0
      && v16 == 458753 )
    {
      LdrpPolicyBits |= 2u;
    }
    if ( (int)AppModelPolicy_GetPolicy_Internal(v5, 19, (unsigned int)&v16, (unsigned int)&v11, (__int64)v10) >= 0
      && v16 == 1245185 )
    {
      LdrpPolicyBits |= 0x40u;
    }
    if ( (int)AppModelPolicy_GetPolicy_Internal(v6, 32, (unsigned int)&v16, (unsigned int)&v13, (__int64)v12) >= 0
      && v16 == 2097153 )
    {
      LdrpPolicyBits |= 4u;
    }
    LODWORD(ProcessParameters) = AppModelPolicy_GetPolicy_Internal(
                                   v7,
                                   54,
                                   (unsigned int)&v16,
                                   (unsigned int)&v15,
                                   (__int64)v14) | 0x10000000;
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
