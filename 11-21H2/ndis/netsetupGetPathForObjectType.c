/*
 * XREFs of netsetupGetPathForObjectType @ 0x1C0110AA4
 * Callers:
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C0111DC4 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall netsetupGetPathForObjectType(int a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v6 = a2 - 2;
      if ( !v6 )
        return L"NetAdapters";
      v7 = v6 - 1;
      if ( !v7 )
        return L"NdisFilterDrivers";
      v8 = v7 - 1;
      if ( !v8 )
        return L"NdisProtocolDrivers";
      v9 = v8 - 4;
      if ( !v9 )
        return L"NdisMuxDrivers";
      if ( v9 == 4 )
        return L"NetAdapterDrivers";
    }
    return 0LL;
  }
  v2 = a2 - 2;
  if ( !v2 )
    return L"Interfaces";
  v3 = v2 - 1;
  if ( !v3 )
    return L"Filters";
  v4 = v3 - 1;
  if ( !v4 )
    return L"Protocols";
  v10 = v4 - 1;
  if ( !v10 )
    return L"Services";
  v11 = v10 - 1;
  if ( !v11 )
    return L"Clients";
  v12 = v11 - 2;
  if ( !v12 )
    return L"Muxes";
  v13 = v12 - 3;
  if ( v13 )
  {
    if ( v13 == 1 )
      return L"InterfaceDrivers";
    return 0LL;
  }
  return L"BindRules";
}
