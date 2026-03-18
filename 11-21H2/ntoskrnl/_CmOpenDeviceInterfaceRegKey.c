/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x140784B14
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406CC2C8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406CEA04 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x14076A7E8 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140781A70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpDispatchDeviceInterface @ 0x140785470 (_PnpDispatchDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140806A24 (PiCMOpenDeviceInterfaceKey.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1408549A0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14094B580 (PiDevCfgConfigureDeviceInterface.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A23A34 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140A29EAC (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140781A70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKey(
        __int64 a1,
        const wchar_t *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v11)(__int64, const wchar_t *, __int64); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  _QWORD v17[12]; // [rsp+40h] [rbp-69h] BYREF

  memset(v17, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64))(a1 + 504);
  LODWORD(v17[3]) = a5;
  v17[2] = a3;
  BYTE4(v17[3]) = a6;
  v17[4] = a7;
  if ( v11 )
  {
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
        v14 = v17[0];
        goto LABEL_5;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmOpenDeviceInterfaceRegKeyWorker(
          a1,
          a2,
          v17[2],
          SHIDWORD(v17[2]),
          v17[3],
          SBYTE4(v17[3]),
          (_QWORD *)v17[4],
          &v17[5]);
  v14 = v13;
  if ( v11 )
  {
    LODWORD(v17[0]) = v13;
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
    *a8 = v17[5];
  return (unsigned int)v14;
}
