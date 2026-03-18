/*
 * XREFs of _CmGetDeviceContainerRegKeyPath @ 0x14076D6D4
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x140699B5C (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x14076D4A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A25AC0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     _CmValidateDeviceContainerName @ 0x14076D788 (_CmValidateDeviceContainerName.c)
 */

NTSTATUS __fastcall CmGetDeviceContainerRegKeyPath(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  NTSTATUS result; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rax

  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    return -1073741811;
  result = CmValidateDeviceContainerName(a1, a2);
  if ( result >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a2 + 2 * v10) );
    v11 = v10 + 51;
    if ( v11 > 0xFFFFFFFF )
    {
      return -1073741675;
    }
    else
    {
      if ( a8 )
        *a8 = v11;
      if ( (unsigned int)v11 > (unsigned int)cchDest )
        return -1073741789;
      else
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"System\\CurrentControlSet\\Control\\DeviceContainers\\%s",
                 a2);
    }
  }
  return result;
}
