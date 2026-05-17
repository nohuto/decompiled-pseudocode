/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x18008E420
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014788 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180015AB0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x18007E200 (RtlAdjustPrivilege.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008AC4C (RtlUpdateProcessRegistryInfo.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtFlushInstallUILanguage @ 0x1800A2C60 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A2E40 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A39E0 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x1800A4700 (ZwShutdownSystem.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  int v2; // ebx
  __int64 v3; // rbx
  __int16 v4; // ax
  int v6; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 v7; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v8; // [rsp+30h] [rbp-D8h] BYREF
  const WCHAR *v9; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v11[688]; // [rsp+48h] [rbp-C0h] BYREF

  v7 = 0;
  memset_thunk_772440563353939046(v11, 0, 0x2B0uLL);
  v2 = NtQueryInstallUILanguage(&v7);
  if ( v2 >= 0 )
  {
    v9 = (const WCHAR *)v11;
    LODWORD(v8) = 11141120;
    if ( RtlLCIDToCultureName(v7, (__int64)&v8)
      && (int)RtlpCreateProcessRegistryInfo(&v10) >= 0
      && (v3 = v10) != 0
      && (LOWORD(v6) = -1, v9)
      && (int)RtlpMuiRegGetInstalledLanguageIndexByName(v10, v9, 0, &v6) >= 0
      && (v4 = *(_WORD *)(28LL * (__int16)v6 + *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL)), v4 >= 0)
      && (v4 & 7) != 4 )
    {
      v2 = NtFlushInstallUILanguage(v7, 1LL);
      if ( v2 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( a1 && v2 )
  {
    if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, (bool *)&v6) == -1073741700 )
      RtlAdjustPrivilege(0x13u, 1, 0, (bool *)&v6);
    v2 = ZwShutdownSystem(2LL);
    if ( v2 < 0 )
      return (unsigned int)-1073741616;
  }
  return (unsigned int)v2;
}
