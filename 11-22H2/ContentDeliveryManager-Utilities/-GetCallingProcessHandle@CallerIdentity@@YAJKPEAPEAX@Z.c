/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180079A6C
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180079490 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180079620 (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z @ 0x18007968C (-GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180079A90 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessHandle(CallerIdentity *this, __int64 a2, void **a3)
{
  int CallingProcessHandle; // eax
  unsigned int v4; // ecx

  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, a2);
  v4 = 0;
  if ( CallingProcessHandle < 0 )
    return (unsigned int)CallingProcessHandle;
  return v4;
}
