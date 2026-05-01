/*
 * XREFs of ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1805F6D50
 * Callers:
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x1805F6870 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180644CB0 (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 *     _anonymous_namespace_::GetPromptText @ 0x1806AD304 (_anonymous_namespace_--GetPromptText.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18015434C (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_255728157cf8e92998065ff06efe801f_@@@Z @ 0x1805DC274 (--$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@-$NativeString@V-$CoTaskMemPol.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
        __int64 a1,
        HINSTANCE a2,
        __int64 a3,
        ...)
{
  const void *v4; // rdi
  int v5; // ebx
  int v6; // eax
  unsigned __int16 v8; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v9; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a3);
  v4 = 0LL;
  memset(v10, 0, 24);
  v5 = -2147467259;
  if ( Windows::Internal::ResourceString::FindAndSize(a2, a3, a3, (const unsigned __int16 **)&v9, &v8) )
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)v10,
           v9,
           v8);
    v4 = (const void *)v10[0];
    v5 = v6;
  }
  if ( v5 >= 0 )
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_255728157cf8e92998065ff06efe801f_>(
           a1,
           v4,
           va);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v10);
  return (unsigned int)v5;
}
