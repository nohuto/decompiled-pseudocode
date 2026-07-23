/*
 * XREFs of PiCMGetRegistryProperty @ 0x1407C0B44
 * Callers:
 *     PiCMHandleIoctl @ 0x1406D0790 (PiCMHandleIoctl.c)
 * Callees:
 *     _CmGetInstallerClassRegProp @ 0x14069B694 (_CmGetInstallerClassRegProp.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     PiCMReturnBufferResultData @ 0x1406D063C (PiCMReturnBufferResultData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1407C0CEC (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1407C0D40 (PiCMConvertRegistryProperty.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407C0E90 (PiCMCaptureRegistryPropertyInputData.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiCMGetRegistryProperty(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r13
  void *Pool2; // rdi
  signed int v10; // ebx
  signed int DeviceRegProp; // eax
  signed int v12; // eax
  int v14; // [rsp+58h] [rbp-19h] BYREF
  int v15[3]; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v16; // [rsp+68h] [rbp-9h] BYREF
  __int128 v17; // [rsp+78h] [rbp+7h]
  __int128 v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+27h]

  v6 = a6;
  v14 = 0;
  v15[0] = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  Pool2 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v10 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, &v16);
  if ( v10 < 0 )
    goto LABEL_20;
  if ( !(_QWORD)v17 || DWORD1(v16) || *((_QWORD *)&v18 + 1) || (_DWORD)v19 || (_DWORD)v18 || !a3 || a4 < 0x14 )
    goto LABEL_24;
  if ( a4 != 20 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, a4 - 20, 879783504LL);
    if ( !Pool2 )
      v10 = -1073741670;
    if ( v10 < 0 )
      goto LABEL_17;
  }
  v10 = PiCMConvertRegistryProperty(HIDWORD(v17), v15);
  if ( v10 < 0 )
    goto LABEL_17;
  LODWORD(a6) = a4 - 20;
  if ( DWORD2(v16) == 1 )
  {
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v17,
                      0LL,
                      v15[0],
                      (__int64)&v14,
                      (__int64)Pool2,
                      (__int64)&a6,
                      0);
    goto LABEL_16;
  }
  if ( DWORD2(v16) != 2 )
  {
LABEL_24:
    v10 = -1073741811;
    goto LABEL_17;
  }
  DeviceRegProp = CmGetInstallerClassRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v17,
                    0LL,
                    v15[0],
                    (__int64)&v14,
                    (__int64)Pool2,
                    (__int64)&a6);
LABEL_16:
  v10 = DeviceRegProp;
  if ( DeviceRegProp < 0 )
  {
LABEL_17:
    v12 = PiCMReturnBufferResultData(v10, (unsigned int)a6, v14, 0LL, 0, SHIDWORD(v19), a3, a4, v6);
    goto LABEL_18;
  }
  v12 = PiCMReturnBufferResultData(
          DeviceRegProp,
          (unsigned int)a6,
          v14,
          Pool2,
          (unsigned int)a6,
          SHIDWORD(v19),
          a3,
          a4,
          v6);
LABEL_18:
  v10 = v12;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_20:
  PiCMReleaseRegistryPropertyInputData(&v16);
  return (unsigned int)v10;
}
