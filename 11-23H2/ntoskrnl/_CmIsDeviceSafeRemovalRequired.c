/*
 * XREFs of _CmIsDeviceSafeRemovalRequired @ 0x140798BD8
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3EC (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14022B348 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceParent @ 0x14079A524 (_CmGetDeviceParent.c)
 *     _CmGetDeviceStatus @ 0x14079A758 (_CmGetDeviceStatus.c)
 */

bool __fastcall CmIsDeviceSafeRemovalRequired(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // di
  char v7; // bl
  int DeviceRegProp; // eax
  int v9; // ecx
  char v10; // si
  wchar_t *i; // r8
  int v13; // eax
  int v14; // esi
  _BYTE v15[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+64h] [rbp-9Ch] BYREF
  int v17; // [rsp+68h] [rbp-98h] BYREF
  int v18; // [rsp+6Ch] [rbp-94h] BYREF
  int v19; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+74h] [rbp-8Ch] BYREF
  int v21; // [rsp+78h] [rbp-88h] BYREF
  int v22; // [rsp+7Ch] [rbp-84h] BYREF
  int v23[4]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t pszSrc[200]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszDest[200]; // [rsp+220h] [rbp+120h] BYREF

  v19 = 0;
  v20 = 0;
  v17 = 0;
  v6 = 0;
  v15[0] = 0;
  v18 = 0;
  v22 = 0;
  v21 = 0;
  if ( (int)CmGetDeviceStatus(a1, a2, a3, (unsigned int)&v18, (__int64)&v22, (__int64)&v21) >= 0 )
  {
    v7 = v18;
    v16 = 4;
    DeviceRegProp = CmGetDeviceRegProp(a1, a2, a3, 16, (__int64)&v20, (__int64)&v17, (__int64)&v16, 0);
    v9 = v17;
    if ( DeviceRegProp < 0 )
      v9 = 0;
    v17 = v9;
    v10 = v9 & 4;
    if ( (v7 & 8) != 0 || (v9 & 2) != 0 )
    {
      v16 = 1;
      v6 = (v9 & 0x80u) == 0;
      if ( !(unsigned int)PnpGetObjectProperty(
                            a1,
                            a2,
                            1LL,
                            a3,
                            0LL,
                            (__int64)&DEVPKEY_Device_SafeRemovalRequiredOverride,
                            (__int64)&v19,
                            (__int64)v15,
                            1,
                            (__int64)&v16,
                            0)
        && v19 == 17
        && v16 == 1 )
      {
        v6 = v15[0] != 0;
      }
      if ( !v10 && v6 )
      {
        v6 = 0;
        for ( i = (wchar_t *)a2; RtlStringCchCopyExW(pszDest, 0xC8uLL, i, 0LL, 0LL, 0x800u) >= 0; i = pszSrc )
        {
          v23[0] = 200;
          if ( (int)CmGetDeviceParent(a1, pszDest, pszSrc, v23) < 0 )
            return v10;
          v16 = 4;
          v13 = CmGetDeviceRegProp(a1, (__int64)pszSrc, 0LL, 16, (__int64)&v20, (__int64)&v17, (__int64)&v16, 0);
          v14 = v17;
          if ( v13 < 0 )
            v14 = 0;
          v17 = v14;
          v10 = v14 & 4;
          if ( v10 )
            return v10;
        }
      }
    }
  }
  return v6;
}
