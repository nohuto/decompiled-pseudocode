/*
 * XREFs of ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x18073C770
 * Callers:
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x18073CCA4 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C4C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___ @ 0x18073C470 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ff.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x18073C998 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x18073CAF4 (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

bool __fastcall CallerIdentity::ApiPolicyChecker::DoesAppMeetLaunchRequirement(
        int a1,
        CallerIdentity::ApiPolicyChecker *a2,
        int *a3)
{
  bool v3; // bl
  HWND Window; // rsi
  int v6; // ecx
  int v7; // ecx
  unsigned __int16 **v8; // r8
  LPCWCH lpString2; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+70h] [rbp+20h] BYREF
  int *v14; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  Window = (HWND)a3;
  if ( !a1 )
    goto LABEL_13;
  v6 = a1 - 1;
  if ( !v6 )
    goto LABEL_8;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_7:
    CallerIdentity::ApiPolicyChecker::IsApplicationInteractive(a2, (const unsigned __int16 *)&v13, a3);
    if ( v13 )
      return 1;
LABEL_8:
    while ( Window )
    {
      lpString2 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      v11 = -1LL;
      v12 = -1LL;
      if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow((CallerIdentity *)Window, &lpString2, v8) >= 0 )
        v3 = CompareStringOrdinal((LPCWCH)a2, -1, lpString2, -1, 1) == 2;
      Window = GetWindow(Window, 4u);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      if ( v3 )
        return v3;
    }
LABEL_13:
    CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(a2, (const unsigned __int16 *)&v13, a3);
    return v13 != 0;
  }
  if ( v7 == 1 )
  {
    v13 = 0;
    v14 = &v13;
    CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___(
      (__int64)a2,
      &v14);
    if ( v13 )
      return 1;
    goto LABEL_7;
  }
  return v3;
}
