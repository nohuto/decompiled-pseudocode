/*
 * XREFs of ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400152C8
 * Callers:
 *     ?InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140014EF0 (-InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x140015640 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 */

__int64 __fastcall InnerGetCommon(HKEY hKey, const struct _GUID *a2, struct APO_REG_PROPERTIES *a3)
{
  CLSID v3; // xmm0
  LSTATUS v6; // eax
  unsigned __int64 v7; // rdx
  int v8; // ebx
  bool v9; // cc
  unsigned __int64 v10; // rdx
  bool v11; // cc
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  BYTE lpData[4]; // [rsp+34h] [rbp-CCh] BYREF
  DWORD Type; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 Data[512]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = *a2;
  *(_DWORD *)lpData = 0;
  a3->clsid = v3;
  cbData = 1024;
  v6 = RegQueryValueExW(hKey, L"FriendlyName", 0LL, &Type, (LPBYTE)Data, &cbData);
  v8 = v6;
  v9 = v6 <= 0;
  if ( v6 )
    goto LABEL_17;
  v8 = StringCbCopyW(a3->szFriendlyName, v7, Data);
  if ( v8 < 0 )
    return (unsigned int)v8;
  cbData = 1024;
  v6 = RegQueryValueExW(hKey, L"Copyright", 0LL, &Type, (LPBYTE)Data, &cbData);
  v8 = v6;
  v9 = v6 <= 0;
  if ( v6 )
  {
LABEL_17:
    if ( v9 )
      return (unsigned int)v8;
    return (unsigned __int16)v6 | 0x80070000;
  }
  v8 = StringCbCopyW(a3->szCopyrightInfo, v10, Data);
  if ( v8 >= 0 )
  {
    cbData = 4;
    v6 = RegQueryValueExW(hKey, L"MajorVersion", 0LL, &Type, lpData, &cbData);
    v11 = v6 <= 0;
    if ( !v6 )
    {
      a3->u32MajorVersion = *(_DWORD *)lpData;
      cbData = 4;
      v6 = RegQueryValueExW(hKey, L"MinorVersion", 0LL, &Type, lpData, &cbData);
      v11 = v6 <= 0;
      if ( !v6 )
      {
        a3->u32MinorVersion = *(_DWORD *)lpData;
        cbData = 4;
        v6 = RegQueryValueExW(hKey, L"Flags", 0LL, &Type, lpData, &cbData);
        v11 = v6 <= 0;
        if ( !v6 )
        {
          a3->Flags = *(_DWORD *)lpData;
          cbData = 4;
          v6 = RegQueryValueExW(hKey, L"MinInputConnections", 0LL, &Type, lpData, &cbData);
          v11 = v6 <= 0;
          if ( !v6 )
          {
            a3->u32MinInputConnections = *(_DWORD *)lpData;
            cbData = 4;
            v6 = RegQueryValueExW(hKey, L"MaxInputConnections", 0LL, &Type, lpData, &cbData);
            v11 = v6 <= 0;
            if ( !v6 )
            {
              a3->u32MaxInputConnections = *(_DWORD *)lpData;
              cbData = 4;
              v6 = RegQueryValueExW(hKey, L"MinOutputConnections", 0LL, &Type, lpData, &cbData);
              v11 = v6 <= 0;
              if ( !v6 )
              {
                a3->u32MinOutputConnections = *(_DWORD *)lpData;
                cbData = 4;
                v6 = RegQueryValueExW(hKey, L"MaxOutputConnections", 0LL, &Type, lpData, &cbData);
                v11 = v6 <= 0;
                if ( !v6 )
                {
                  a3->u32MaxOutputConnections = *(_DWORD *)lpData;
                  cbData = 4;
                  v6 = RegQueryValueExW(hKey, L"MaxInstances", 0LL, &Type, lpData, &cbData);
                  v11 = v6 <= 0;
                  if ( !v6 )
                  {
                    a3->u32MaxInstances = *(_DWORD *)lpData;
                    return (unsigned int)v8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( v11 )
      return (unsigned int)v6;
    return (unsigned __int16)v6 | 0x80070000;
  }
  return (unsigned int)v8;
}
