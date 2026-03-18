/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x1406CC1F8
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406C93DC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406CC310 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpDispatchDeviceInterface @ 0x1406CCE90 (_PnpDispatchDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x1407873F0 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C54D0 (IoGetDeviceInterfaceAlias.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140848CF0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140880284 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140880F48 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14095D3F0 (PiDevCfgConfigureDeviceInterface.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A61830 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140A671E4 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     memset @ 0x140435A00 (memset.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406CC310 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  _QWORD *v17; // [rsp+28h] [rbp-81h]
  _QWORD v18[12]; // [rsp+40h] [rbp-69h] BYREF

  memset(v18, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  LODWORD(v18[3]) = a5;
  v18[2] = a3;
  BYTE4(v18[3]) = a6;
  v18[4] = a7;
  if ( v11 )
  {
    v17 = v18;
    v12 = v11(a1, a2, 3LL);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
      {
LABEL_12:
        v14 = v18[0];
        goto LABEL_5;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v17) = BYTE4(v18[3]);
  v13 = CmOpenDeviceInterfaceRegKeyWorker(a1, a2, LODWORD(v18[2]), HIDWORD(v18[2]), v18[3], v17, v18[4], &v18[5]);
  v14 = v13;
  if ( v11 )
  {
    LODWORD(v18[0]) = v13;
    v16 = v11(a1, a2, 3LL);
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        if ( !v16 )
          goto LABEL_5;
        return (unsigned int)-1073741595;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v14 >= 0 && a8 )
    *a8 = v18[5];
  return (unsigned int)v14;
}
