/*
 * XREFs of ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180045004
 * Callers:
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180042BE0 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D380 (--3@YAXPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180045290 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180046068 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18004659C (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180046690 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

__int64 __fastcall CreateNewRegistryKey(HKEY a1, const unsigned __int16 *a2, __int64 a3, HKEY *a4)
{
  signed int LastError; // eax
  unsigned int v7; // r8d
  unsigned __int16 *v8; // r9
  signed int v9; // ebx
  bool v10; // cc
  unsigned int v12; // [rsp+20h] [rbp-50h]
  unsigned int *v13; // [rsp+40h] [rbp-30h]
  struct _SECURITY_ATTRIBUTES v14; // [rsp+50h] [rbp-20h] BYREF
  PSID Sid; // [rsp+80h] [rbp+10h] BYREF

  Sid = a1;
  memset(&v14, 0, sizeof(v14));
  v14.nLength = 24;
  LastError = DetermineLowRightsKeySecurityDescriptor(HKEY_CURRENT_USER, &v14.lpSecurityDescriptor);
  v9 = LastError;
  v10 = LastError <= 0;
  if ( !LastError )
  {
    LastError = SafeRegCreateKeyEx(HKEY_CURRENT_USER, a2, v7, v8, v12, 0xA001Fu, &v14, a4, v13);
    v9 = LastError;
    v10 = LastError <= 0;
    if ( !LastError )
    {
      Sid = 0LL;
      if ( ConvertStringSidToSidW(L"LW", &Sid) )
      {
        v9 = SetRegistryKeyIntegrityLevel(*a4, Sid);
        if ( v9 < 0 )
          v9 = SetRegistryHandleIntegrityLevel(*a4, Sid);
        if ( Sid )
          LocalFree(Sid);
        goto LABEL_11;
      }
      LastError = GetLastError();
      v9 = LastError;
      v10 = LastError <= 0;
    }
  }
  if ( !v10 )
    v9 = (unsigned __int16)LastError | 0x80070000;
LABEL_11:
  operator delete(v14.lpSecurityDescriptor);
  v14.lpSecurityDescriptor = 0LL;
  if ( v9 < 0 && *a4 )
  {
    RegCloseKey(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
