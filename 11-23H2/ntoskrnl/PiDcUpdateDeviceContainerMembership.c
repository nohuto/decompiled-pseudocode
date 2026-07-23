/*
 * XREFs of PiDcUpdateDeviceContainerMembership @ 0x14079B7B0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 *     wcscmp @ 0x1403DBB30 (wcscmp.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     _CmSetDeviceRegProp @ 0x14079881C (_CmSetDeviceRegProp.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B254 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmAddDeviceToContainer @ 0x14079B968 (_CmAddDeviceToContainer.c)
 *     PiDcContainerRequiresConfiguration @ 0x140877D90 (PiDcContainerRequiresConfiguration.c)
 *     PiDcResetChildDeviceContainers @ 0x14095B680 (PiDcResetChildDeviceContainers.c)
 *     _CmRemoveDeviceFromContainer @ 0x140A648EC (_CmRemoveDeviceFromContainer.c)
 */

__int64 __fastcall PiDcUpdateDeviceContainerMembership(__int64 a1, __int64 a2, const wchar_t *a3)
{
  int DeviceContainerIdFromBase; // ebx
  int DeviceRegProp; // eax
  __int64 v8; // rax
  char v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str2[40]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t v15[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t v16[40]; // [rsp+100h] [rbp+0h] BYREF

  v10 = 0;
  P = 0LL;
  v12 = 0;
  v11 = 0;
  DeviceContainerIdFromBase = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( DeviceContainerIdFromBase >= 0 )
  {
    v11 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      a1,
                      a2,
                      37,
                      (__int64)&v12,
                      (__int64)Str2,
                      (__int64)&v11,
                      0);
    DeviceContainerIdFromBase = DeviceRegProp;
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp != -1073741275 )
        goto LABEL_12;
    }
    else if ( wcsicmp(a3, Str2) )
    {
      DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(*(__int64 *)&PiPnpRtlCtx, a1, Str2, v15);
      if ( DeviceContainerIdFromBase < 0 )
        goto LABEL_12;
      DeviceContainerIdFromBase = CmRemoveDeviceFromContainer(*(_QWORD *)&PiPnpRtlCtx, v15, Str2, a1);
      if ( DeviceContainerIdFromBase < 0 )
        goto LABEL_12;
      PiDcResetChildDeviceContainers(a1, v15);
    }
    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(*(__int64 *)&PiPnpRtlCtx, a1, a3, v16);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
      DeviceContainerIdFromBase = CmSetDeviceRegProp(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    a1,
                                    a2,
                                    0x25u,
                                    1u,
                                    (__int64)a3,
                                    2 * (int)v8 + 2,
                                    0);
      if ( DeviceContainerIdFromBase >= 0 )
      {
        if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
        {
          DeviceContainerIdFromBase = CmAddDeviceToContainer(PiPnpRtlCtx, (int)v16, (__int64)&v10);
          if ( DeviceContainerIdFromBase >= 0 && !v10 )
            PiDcContainerRequiresConfiguration(v16);
        }
      }
    }
  }
LABEL_12:
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)DeviceContainerIdFromBase;
}
