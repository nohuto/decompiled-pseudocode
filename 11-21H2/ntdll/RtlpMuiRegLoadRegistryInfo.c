/*
 * XREFs of RtlpMuiRegLoadRegistryInfo @ 0x18006E750
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006E5F4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpSetProcUserMachineLangList @ 0x180049D38 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006E840 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18006EA54 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180111F70 (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180113838 (_RtlpMuiRegLoadInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadRegistryInfo(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (a2 & 0x800) != 0 )
  {
    result = RtlpMuiRegLoadLicInformation();
    if ( (int)result < 0 )
    {
      DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", result);
      result = 0LL;
    }
  }
  if ( (a2 & 1) != 0 )
    result = RtlpMuiRegLoadInstalled(a1);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 4LL);
      result = RtlpLoadLanguageConfigList(4LL, &v7, a1);
      if ( (int)result < 0 )
        return result;
      v6 = v7;
      if ( v7 )
      {
        *(_DWORD *)a1 |= 4u;
        *(_QWORD *)(a1 + 40) = v6;
        v7 = 0LL;
      }
    }
    if ( (a2 & 8) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 8LL);
      result = RtlpLoadLanguageConfigList(8LL, &v7, a1);
      if ( (int)result < 0 )
        return result;
      v5 = v7;
      if ( v7 )
      {
        *(_DWORD *)a1 |= 8u;
        *(_QWORD *)(a1 + 48) = v5;
      }
    }
    if ( (a2 & 0x20) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 32LL);
      result = RtlpSetProcUserMachineLangList(a1, 1u);
    }
    if ( (int)result >= 0 )
    {
      if ( (a2 & 0x10) == 0
        || (RtlpMuiRegFreeRegistryInfo(a1, 16LL), result = RtlpSetProcUserMachineLangList(a1, 0), (int)result >= 0) )
      {
        if ( (a2 & 0x200) != 0 )
          return 0LL;
      }
    }
  }
  return result;
}
