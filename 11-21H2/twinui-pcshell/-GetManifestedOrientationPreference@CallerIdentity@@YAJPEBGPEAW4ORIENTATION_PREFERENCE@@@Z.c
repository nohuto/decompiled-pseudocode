/*
 * XREFs of ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800E79B4
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18006E200 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x18061AE20 (-v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1800E7B40 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800E7D44 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800E7E80 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetManifestedOrientationPreference(
        CallerIdentity *this,
        unsigned __int16 *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  signed int StateHandle; // ebx
  void **v6; // r8
  LSTATUS v7; // eax
  LSTATUS v8; // eax
  HKEY v9; // rcx
  HKEY v10; // rcx
  HKEY *phkResult; // [rsp+20h] [rbp-40h]
  HKEY v13; // [rsp+30h] [rbp-30h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-28h] BYREF
  CallerIdentity *v15; // [rsp+40h] [rbp-20h] BYREF
  CallerIdentity *v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  DWORD cbData; // [rsp+88h] [rbp+28h] BYREF
  DWORD Type; // [rsp+90h] [rbp+30h] BYREF
  int Data; // [rsp+98h] [rbp+38h] BYREF

  *(_DWORD *)a2 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v16);
  v17 = -1LL;
  v18 = -1LL;
  StateHandle = ParseAppUserModelId((const unsigned __int16 *)this, (unsigned __int16 **)&v16, 0LL);
  if ( StateHandle >= 0 )
  {
    v15 = 0LL;
    StateHandle = CallerIdentity::GetStateHandle(v16, (const unsigned __int16 *)&v15, v6);
    if ( StateHandle >= 0 )
    {
      hKey = 0LL;
      StateHandle = CallerIdentity::GetStateRegKey(
                      v15,
                      (void *)L"SplashScreen",
                      (const unsigned __int16 *)0x20019,
                      (unsigned int)&hKey,
                      phkResult);
      if ( StateHandle >= 0 )
      {
        v13 = 0LL;
        v7 = RegOpenKeyExW(hKey, (LPCWSTR)this, 0, 0x20019u, &v13);
        StateHandle = v7;
        if ( v7 > 0 )
          StateHandle = (unsigned __int16)v7 | 0x80070000;
        if ( StateHandle >= 0 )
        {
          cbData = 4;
          v8 = RegQueryValueExW(v13, L"Orientation", 0LL, &Type, (LPBYTE)&Data, &cbData);
          StateHandle = v8;
          if ( v8 > 0 )
            StateHandle = (unsigned __int16)v8 | 0x80070000;
          if ( StateHandle >= 0 )
          {
            if ( Type == 4 )
            {
              StateHandle = 0;
              *(_DWORD *)a2 = Data;
            }
            else
            {
              StateHandle = -2147467259;
            }
          }
        }
        v9 = v13;
        v13 = 0LL;
        if ( v9 )
          RegCloseKey(v9);
      }
      CloseState(v15);
      v10 = hKey;
      hKey = 0LL;
      if ( v10 )
        RegCloseKey(v10);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v16);
  return (unsigned int)StateHandle;
}
