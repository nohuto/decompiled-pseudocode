/*
 * XREFs of PpForEachDeviceInstanceDriver @ 0x1407CFA68
 * Callers:
 *     PiDeviceRegistration @ 0x1407CF8BC (PiDeviceRegistration.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _CmGetInstallerClassRegProp @ 0x14069B694 (_CmGetInstallerClassRegProp.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1406CE0F4 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1406D0220 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D3F74 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406D42E4 (PnpUnicodeStringToWstr.c)
 *     _CmOpenInstallerClassRegKey @ 0x140787A24 (_CmOpenInstallerClassRegKey.c)
 *     PiForEachDriverQueryRoutine @ 0x1407CFD74 (PiForEachDriverQueryRoutine.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpForEachDeviceInstanceDriver(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  void *Pool2; // rdi
  __int64 result; // rax
  _BYTE *v7; // r14
  int DeviceRegProp; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r15d
  __int64 **v12; // rsi
  char v13; // cl
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  HANDLE v18; // r9
  __int64 v19; // r8
  int InstallerClassRegProp; // eax
  unsigned int v21; // [rsp+60h] [rbp-79h] BYREF
  int v22; // [rsp+64h] [rbp-75h] BYREF
  unsigned int v23; // [rsp+68h] [rbp-71h] BYREF
  int v24; // [rsp+6Ch] [rbp-6Dh] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-69h] BYREF
  HANDLE v26; // [rsp+78h] [rbp-61h] BYREF
  _BYTE *v27; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v28[3]; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v29[80]; // [rsp+A0h] [rbp-39h] BYREF

  Handle = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v22 = 0;
  Pool2 = 0LL;
  v23 = 0;
  v21 = 0;
  v24 = 0;
  result = PnpUnicodeStringToWstr(&v27, 0LL, a1);
  if ( (int)result >= 0 )
  {
    v7 = v27;
    DeviceRegProp = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v27, 16, 0, 131097, 0, (__int64)&v26, 0LL);
    if ( DeviceRegProp >= 0 )
    {
      v22 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)v7,
                        (__int64)v26,
                        9,
                        (__int64)&v23,
                        (__int64)v29,
                        (__int64)&v22,
                        0);
      if ( DeviceRegProp >= 0 && v23 == 1 && v22 )
        DeviceRegProp = CmOpenInstallerClassRegKey(PiPnpRtlCtx, (int)v29, v9, v10, 131097, 0, (__int64)&Handle, 0LL);
      v28[2] = a3;
      v28[0] = a1;
      v28[1] = PiProcessDriverInstance;
      v22 = 170;
      Pool2 = (void *)ExAllocatePool2(256LL, 170LL, 538996816LL);
      if ( Pool2 )
      {
        v11 = 0;
        v12 = &off_1400070F8;
        while ( 1 )
        {
          v13 = *((_BYTE *)v12 + 8);
          if ( v13 && !Handle )
            goto LABEL_16;
          v14 = (__int64)*v12;
          v21 = v22;
          if ( v13 )
            v15 = v14
                ? PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v29,
                    2LL,
                    (__int64)Handle,
                    0LL,
                    v14,
                    (__int64)&v24,
                    (__int64)Pool2,
                    v22,
                    (__int64)&v21,
                    0)
                : CmGetInstallerClassRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v29,
                    (__int64)Handle,
                    *((_DWORD *)v12 - 2),
                    (__int64)&v23,
                    (__int64)Pool2,
                    (__int64)&v21);
          else
            v15 = v14
                ? PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v7,
                    1LL,
                    (__int64)v26,
                    0LL,
                    v14,
                    (__int64)&v24,
                    (__int64)Pool2,
                    v22,
                    (__int64)&v21,
                    0)
                : CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v7,
                    (__int64)v26,
                    *((_DWORD *)v12 - 2),
                    (__int64)&v23,
                    (__int64)Pool2,
                    (__int64)&v21,
                    0);
          DeviceRegProp = v15;
          if ( v15 == -1073741789 )
            break;
LABEL_14:
          if ( DeviceRegProp == -1073741275 )
          {
            DeviceRegProp = 0;
          }
          else
          {
            if ( DeviceRegProp < 0 )
              goto LABEL_17;
            DeviceRegProp = PiForEachDriverQueryRoutine(v23, Pool2, v21, v12[2], v28);
            if ( DeviceRegProp < 0 )
              goto LABEL_17;
          }
LABEL_16:
          ++v11;
          v12 += 4;
          if ( v11 >= 5 )
            goto LABEL_17;
        }
        ExFreePoolWithTag(Pool2, 0);
        v22 = v21;
        Pool2 = (void *)ExAllocatePool2(256LL, v21, 538996816LL);
        if ( !Pool2 )
          goto LABEL_46;
        v16 = (__int64)*v12;
        if ( *((_BYTE *)v12 + 8) )
        {
          v17 = v29;
          if ( !v16 )
          {
            InstallerClassRegProp = CmGetInstallerClassRegProp(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      (__int64)v29,
                                      (__int64)Handle,
                                      *((_DWORD *)v12 - 2),
                                      (__int64)&v23,
                                      (__int64)Pool2,
                                      (__int64)&v21);
            goto LABEL_45;
          }
          v18 = Handle;
          v19 = 2LL;
        }
        else
        {
          v17 = v7;
          if ( !v16 )
          {
            InstallerClassRegProp = CmGetDeviceRegProp(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      (__int64)v7,
                                      (__int64)v26,
                                      *((_DWORD *)v12 - 2),
                                      (__int64)&v23,
                                      (__int64)Pool2,
                                      (__int64)&v21,
                                      0);
            goto LABEL_45;
          }
          v18 = v26;
          v19 = 1LL;
        }
        InstallerClassRegProp = PnpGetObjectProperty(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (__int64)v17,
                                  v19,
                                  (__int64)v18,
                                  0LL,
                                  v16,
                                  (__int64)&v24,
                                  (__int64)Pool2,
                                  v22,
                                  (__int64)&v21,
                                  0);
LABEL_45:
        DeviceRegProp = InstallerClassRegProp;
        goto LABEL_14;
      }
LABEL_46:
      DeviceRegProp = -1073741670;
    }
LABEL_17:
    if ( v7 )
      PnpUnicodeStringToWstrFree(v7, (__int64)a1);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    if ( Handle )
      ZwClose(Handle);
    if ( v26 )
      ZwClose(v26);
    return (unsigned int)DeviceRegProp;
  }
  return result;
}
