/*
 * XREFs of ?_InitializeFromRegistry@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEAUHKEY__@@PEBG_N@Z @ 0x180161EFC
 * Callers:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHKEY__@@PEBG1@Z @ 0x18008CCB4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHK.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeFromRegistry(
        BYTE **a1,
        HKEY a2,
        __int64 a3)
{
  BYTE *lpData; // rdi
  LSTATUS Value; // eax
  signed int v7; // ebx
  LSTATUS v8; // eax
  __int64 v9; // rsi
  unsigned int v10; // esi
  DWORD v12; // eax
  DWORD v13; // ebp
  WCHAR *v14; // rax
  WCHAR *v15; // rsi
  DWORD v16; // eax
  DWORD v17; // r14d
  __int64 Type; // [rsp+70h] [rbp+18h] BYREF
  SIZE_T cb; // [rsp+78h] [rbp+20h] BYREF

  Type = a3;
  LODWORD(cb) = 0;
  lpData = 0LL;
  Value = RegQueryValueExW(a2, L"NotesApp", 0LL, (LPDWORD)&Type, 0LL, (LPDWORD)&cb);
  v7 = Value;
  if ( Value > 0 )
    v7 = (unsigned __int16)Value | 0x80070000;
  if ( v7 >= 0 )
  {
    if ( (unsigned int)(Type - 1) > 1 || !(_DWORD)cb || (cb & 1) != 0 )
      goto LABEL_18;
    lpData = (BYTE *)CoTaskMemAlloc((unsigned int)cb);
    if ( !lpData )
      goto LABEL_24;
    v8 = RegQueryValueExW(a2, L"NotesApp", 0LL, (LPDWORD)&Type, lpData, (LPDWORD)&cb);
    v7 = v8;
    if ( v8 > 0 )
      v7 = (unsigned __int16)v8 | 0x80070000;
    if ( v7 >= 0 )
    {
      v9 = ((unsigned int)cb >> 1) - 1;
      if ( (_DWORD)Type != 2 )
        goto LABEL_12;
      v12 = ExpandEnvironmentStringsW((LPCWSTR)lpData, 0LL, 0);
      v13 = v12;
      if ( !v12 )
        goto LABEL_12;
      v14 = (WCHAR *)CoTaskMemAlloc(2LL * v12);
      v15 = v14;
      if ( v14 )
      {
        v16 = ExpandEnvironmentStringsW((LPCWSTR)lpData, v14, v13);
        v17 = v16;
        if ( !v16 || v16 > v13 )
        {
          v7 = -2147024774;
          CoTaskMemFree(v15);
          goto LABEL_17;
        }
        v7 = 0;
        CoTaskMemFree(lpData);
        lpData = (BYTE *)v15;
        v9 = v17 - 1;
LABEL_12:
        if ( !*(_WORD *)&lpData[2 * v9] )
        {
          v10 = v9 + 1;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
          if ( lpData && v10 )
          {
            *a1 = lpData;
            a1[1] = (BYTE *)(v10 - 1LL);
            a1[2] = (BYTE *)v10;
            *(_WORD *)&lpData[2 * v10 - 2] = 0;
          }
          lpData = 0LL;
          goto LABEL_17;
        }
LABEL_18:
        v7 = -2147024883;
        goto LABEL_17;
      }
LABEL_24:
      v7 = -2147024882;
    }
  }
LABEL_17:
  CoTaskMemFree(lpData);
  return (unsigned int)v7;
}
