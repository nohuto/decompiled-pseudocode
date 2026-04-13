/*
 * XREFs of ?_InitializeFromRegistry@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEAUHKEY__@@PEBG_N@Z @ 0x180068F88
 * Callers:
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18005D624 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeFromRegistry(
        __int64 a1,
        HKEY a2,
        __int64 a3)
{
  BYTE *lpData; // rdi
  LSTATUS Value; // eax
  signed int v7; // ebx
  LSTATUS v8; // eax
  __int64 v9; // rsi
  DWORD v10; // eax
  DWORD v11; // ebp
  WCHAR *v12; // rax
  WCHAR *v13; // rsi
  DWORD v14; // eax
  DWORD v15; // r15d
  __int64 v16; // rsi
  __int64 Type; // [rsp+70h] [rbp+18h] BYREF
  SIZE_T cb; // [rsp+78h] [rbp+20h] BYREF

  Type = a3;
  LODWORD(cb) = 0;
  lpData = 0LL;
  Value = RegQueryValueExW(a2, L"LoggedOnUserSID", 0LL, (LPDWORD)&Type, 0LL, (LPDWORD)&cb);
  v7 = Value;
  if ( Value > 0 )
    v7 = (unsigned __int16)Value | 0x80070000;
  if ( v7 >= 0 )
  {
    if ( (unsigned int)(Type - 1) > 1 || !(_DWORD)cb || (cb & 1) != 0 )
      goto LABEL_26;
    lpData = (BYTE *)CoTaskMemAlloc((unsigned int)cb);
    if ( !lpData )
    {
LABEL_8:
      v7 = -2147024882;
      goto LABEL_27;
    }
    v8 = RegQueryValueExW(a2, L"LoggedOnUserSID", 0LL, (LPDWORD)&Type, lpData, (LPDWORD)&cb);
    v7 = v8;
    if ( v8 > 0 )
      v7 = (unsigned __int16)v8 | 0x80070000;
    if ( v7 >= 0 )
    {
      v9 = ((unsigned int)cb >> 1) - 1;
      if ( (_DWORD)Type == 2 )
      {
        v10 = ExpandEnvironmentStringsW((LPCWSTR)lpData, 0LL, 0);
        v11 = v10;
        if ( v10 )
        {
          v12 = (WCHAR *)CoTaskMemAlloc(2LL * v10);
          v13 = v12;
          if ( !v12 )
            goto LABEL_8;
          v14 = ExpandEnvironmentStringsW((LPCWSTR)lpData, v12, v11);
          v15 = v14;
          if ( !v14 || v14 > v11 )
          {
            v7 = -2147024774;
            CoTaskMemFree(v13);
            goto LABEL_27;
          }
          v7 = 0;
          CoTaskMemFree(lpData);
          lpData = (BYTE *)v13;
          v9 = v15 - 1;
        }
      }
      if ( !*(_WORD *)&lpData[2 * v9] )
      {
        v16 = (unsigned int)(v9 + 1);
        if ( *(_QWORD *)a1 )
        {
          CoTaskMemFree(*(LPVOID *)a1);
          *(_QWORD *)a1 = 0LL;
        }
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        if ( lpData && v16 )
        {
          *(_QWORD *)a1 = lpData;
          *(_QWORD *)(a1 + 8) = v16 - 1;
          *(_QWORD *)(a1 + 16) = v16;
          *(_WORD *)&lpData[2 * v16 - 2] = 0;
        }
        lpData = 0LL;
        goto LABEL_27;
      }
LABEL_26:
      v7 = -2147024883;
    }
  }
LABEL_27:
  CoTaskMemFree(lpData);
  return (unsigned int)v7;
}
