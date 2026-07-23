/*
 * XREFs of _CmGetDeviceInterfaceSubkeyPath @ 0x1406CF4CC
 * Callers:
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1406C9F64 (_CmGetDeviceInterfaceClassGuidString.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1406CDE94 (_CmGetDeviceInterfaceRegKeyPath.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14022B348 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyNExW @ 0x14022B970 (RtlStringCchCopyNExW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     wcschr @ 0x1403DBAF0 (wcschr.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406CE9F0 (_CmValidateDeviceInterfaceName.c)
 *     RtlGUIDFromString @ 0x1406CF6F0 (RtlGUIDFromString.c)
 */

int __fastcall CmGetDeviceInterfaceSubkeyPath(
        __int64 a1,
        const wchar_t *a2,
        char a3,
        wchar_t *a4,
        wchar_t *pszDest,
        unsigned int cchDest)
{
  int result; // eax
  wchar_t *v10; // rax
  __int64 v11; // rdx
  const wchar_t *v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  size_t v15; // r14
  size_t pcchRemaining; // [rsp+40h] [rbp-40h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  GUID Guid; // [rsp+60h] [rbp-20h] BYREF

  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  Guid = 0LL;
  DestinationString = 0LL;
  result = CmValidateDeviceInterfaceName(a1, (__int64)a2);
  if ( result >= 0 )
  {
    v10 = wcschr(a2 + 4, 0x5Cu);
    v11 = -1LL;
    if ( v10 )
    {
      v12 = v10 + 1;
      v13 = v10 - a2;
    }
    else
    {
      v12 = 0LL;
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
    }
    if ( v13 > 0xFFFFFFFF )
      return -1073741675;
    if ( (unsigned int)v13 < 0x30 )
      return -1073741773;
    v14 = (unsigned int)(v13 + 1);
    if ( a3 )
    {
      v14 += 2LL;
      if ( v12 )
      {
        do
          ++v11;
        while ( v12[v11] );
        v14 += v11;
      }
    }
    if ( v14 > 0xFFFFFFFF )
      return -1073741675;
    v15 = (unsigned int)v13;
    if ( !a4
      || (result = RtlStringCchCopyNExW(a4, 0x27uLL, &a2[(unsigned int)v13 - 38], 0x26uLL, 0LL, 0LL, 0x800u), result >= 0)
      && (result = RtlInitUnicodeStringEx(&DestinationString, a4), result >= 0)
      && (result = RtlGUIDFromString(&DestinationString, &Guid), result >= 0) )
    {
      if ( (unsigned int)v14 > cchDest )
      {
        return -1073741789;
      }
      else
      {
        result = RtlStringCchCopyNExW(pszDest, cchDest, a2, v15, &ppszDestEnd, &pcchRemaining, 0x800u);
        if ( result >= 0 )
        {
          *(_QWORD *)pszDest = 0x23003F00230023LL;
          if ( a3 )
          {
            result = RtlStringCchCopyExW(ppszDestEnd, pcchRemaining, L"\\#", &ppszDestEnd, &pcchRemaining, 0x800u);
            if ( result >= 0 )
            {
              if ( v12 )
                return RtlStringCchCopyExW(ppszDestEnd, pcchRemaining, v12, &ppszDestEnd, &pcchRemaining, 0x800u);
            }
          }
        }
      }
    }
  }
  return result;
}
