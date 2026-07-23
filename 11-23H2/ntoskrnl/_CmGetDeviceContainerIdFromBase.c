/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x14079B254
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3EC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079B7B0 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB16C (PiDcHandleCustomDeviceEvent.c)
 *     _CmDeleteDeviceWorker @ 0x140A6268C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14022C7C0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     wcscmp @ 0x1403DBB30 (wcscmp.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406CEEE0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmIsDeviceInContainer @ 0x14079B3F0 (_CmIsDeviceInContainer.c)
 *     _CmValidateDeviceContainerName @ 0x14079B570 (_CmValidateDeviceContainerName.c)
 *     _RegRtlEnumKey @ 0x14086B6EC (_RegRtlEnumKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(__int64 a1, __int64 a2, const wchar_t *a3, wchar_t *a4)
{
  int v4; // edi
  int CachedContextBaseKey; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  char v15; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v16[3]; // [rsp+41h] [rbp-40h] BYREF
  int v17; // [rsp+44h] [rbp-3Dh]
  HANDLE KeyHandle; // [rsp+48h] [rbp-39h] BYREF
  wchar_t pszSrc[40]; // [rsp+50h] [rbp-31h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  v16[0] = 0;
  v15 = 0;
  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&KeyHandle);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = CmIsDeviceInContainer(
                                 a1,
                                 (_DWORD)KeyHandle,
                                 (_DWORD)a3,
                                 (_DWORD)a3,
                                 a2,
                                 (__int64)v16,
                                 (__int64)&v15);
        if ( CachedContextBaseKey >= 0 && !v15 )
        {
          while ( 1 )
          {
            v17 = 39;
            v11 = RegRtlEnumKey(KeyHandle);
            CachedContextBaseKey = v11;
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -1073741789 )
            {
              if ( v11 < 0 )
                return (unsigned int)CachedContextBaseKey;
              v14 = CmValidateDeviceContainerName(v12, pszSrc, v13);
              CachedContextBaseKey = v14;
              if ( v14 != -1073741773 )
              {
                if ( v14 < 0 )
                  return (unsigned int)CachedContextBaseKey;
                CachedContextBaseKey = CmIsDeviceInContainer(
                                         a1,
                                         (_DWORD)KeyHandle,
                                         (unsigned int)pszSrc,
                                         (_DWORD)a3,
                                         a2,
                                         (__int64)v16,
                                         (__int64)&v15);
                if ( CachedContextBaseKey < 0 )
                  return (unsigned int)CachedContextBaseKey;
                if ( v16[0] )
                {
                  CachedContextBaseKey = RtlStringCchCopyW(a4, 0x27uLL, pszSrc);
                  if ( CachedContextBaseKey < 0 )
                    return (unsigned int)CachedContextBaseKey;
                }
                if ( v15 )
                  return (unsigned int)CachedContextBaseKey;
              }
            }
            ++v4;
          }
          return 0;
        }
      }
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
