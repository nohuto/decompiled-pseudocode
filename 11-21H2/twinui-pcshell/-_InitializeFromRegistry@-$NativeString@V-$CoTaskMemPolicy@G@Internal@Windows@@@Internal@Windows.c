/*
 * XREFs of ?_InitializeFromRegistry@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEAUHKEY__@@PEBG_N@Z @ 0x18010FBB8
 * Callers:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHKEY__@@PEBG1@Z @ 0x1800C9B3C (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHK.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x180545914 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeFromRegistry(
        BYTE **a1,
        HKEY a2,
        const WCHAR *a3)
{
  BYTE *lpData; // rdi
  LSTATUS Value; // eax
  signed int v8; // ebx
  LSTATUS v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // esi
  DWORD v13; // eax
  DWORD v14; // ebp
  WCHAR *v15; // rax
  WCHAR *v16; // rsi
  DWORD v17; // eax
  DWORD v18; // r14d
  DWORD Type[14]; // [rsp+30h] [rbp-38h] BYREF
  SIZE_T cb; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(cb) = 0;
  lpData = 0LL;
  Value = RegQueryValueExW(a2, a3, 0LL, Type, 0LL, (LPDWORD)&cb);
  v8 = Value;
  if ( Value > 0 )
    v8 = (unsigned __int16)Value | 0x80070000;
  if ( v8 >= 0 )
  {
    if ( Type[0] - 1 > 1 || !(_DWORD)cb || (cb & 1) != 0 )
      goto LABEL_18;
    lpData = (BYTE *)CoTaskMemAlloc((unsigned int)cb);
    if ( !lpData )
      goto LABEL_24;
    v9 = RegQueryValueExW(a2, a3, 0LL, Type, lpData, (LPDWORD)&cb);
    v8 = v9;
    if ( v9 > 0 )
      v8 = (unsigned __int16)v9 | 0x80070000;
    if ( v8 >= 0 )
    {
      v10 = ((unsigned int)cb >> 1) - 1;
      if ( Type[0] != 2 )
        goto LABEL_12;
      v13 = ExpandEnvironmentStringsW((LPCWSTR)lpData, 0LL, 0);
      v14 = v13;
      if ( !v13 )
        goto LABEL_12;
      v15 = (WCHAR *)CoTaskMemAlloc(2LL * v13);
      v16 = v15;
      if ( v15 )
      {
        v17 = ExpandEnvironmentStringsW((LPCWSTR)lpData, v15, v14);
        v18 = v17;
        if ( !v17 || v17 > v14 )
        {
          v8 = -2147024774;
          CoTaskMemFree(v16);
          goto LABEL_17;
        }
        v8 = 0;
        CoTaskMemFree(lpData);
        lpData = (BYTE *)v16;
        v10 = v18 - 1;
LABEL_12:
        if ( !*(_WORD *)&lpData[2 * v10] )
        {
          v11 = v10 + 1;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
          if ( lpData && v11 )
          {
            *a1 = lpData;
            a1[1] = (BYTE *)(v11 - 1LL);
            a1[2] = (BYTE *)v11;
            *(_WORD *)&lpData[2 * v11 - 2] = 0;
          }
          lpData = 0LL;
          goto LABEL_17;
        }
LABEL_18:
        v8 = -2147024883;
        goto LABEL_17;
      }
LABEL_24:
      v8 = -2147024882;
    }
  }
LABEL_17:
  CoTaskMemFree(lpData);
  return (unsigned int)v8;
}
