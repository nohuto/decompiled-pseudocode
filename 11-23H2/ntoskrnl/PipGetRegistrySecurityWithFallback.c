/*
 * XREFs of PipGetRegistrySecurityWithFallback @ 0x14069A82C
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14069AA88 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     _CmGetInstallerClassRegProp @ 0x14069B694 (_CmGetInstallerClassRegProp.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14070DD30 (RtlValidRelativeSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140736D40 (SeCaptureSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PipGetRegistrySecurityWithFallback(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  bool v8; // di
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  int v11; // esi
  int InstallerClassRegProp; // eax
  int v13; // r9d
  int v15; // r9d
  int v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  ULONG SecurityDescriptorLength; // [rsp+70h] [rbp+20h] BYREF

  v16 = 0;
  v17 = 0LL;
  SecurityDescriptorLength = 128;
  v8 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, 128LL, 1852141648LL);
  if ( !Pool2 )
    return 0LL;
  DeviceRegProp = CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    a2,
                    a3,
                    24,
                    (__int64)&v16,
                    (__int64)Pool2,
                    (__int64)&SecurityDescriptorLength,
                    0);
  if ( DeviceRegProp == -1073741789 )
  {
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(256LL, SecurityDescriptorLength, 1852141648LL);
    if ( !Pool2 )
      return 0LL;
    DeviceRegProp = CmGetDeviceRegProp(
                      PiPnpRtlCtx,
                      a2,
                      a3,
                      24,
                      (__int64)&v16,
                      (__int64)Pool2,
                      (__int64)&SecurityDescriptorLength,
                      0);
  }
  if ( DeviceRegProp >= 0
    && v16 == 3
    && RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0)
    && (LOBYTE(v15) = 1, (int)SeCaptureSecurityDescriptor((_DWORD)Pool2, 0, 1, v15, (__int64)&v17) >= 0) )
  {
    v8 = 1;
  }
  else
  {
    v11 = a5;
    if ( a5 )
    {
      InstallerClassRegProp = CmGetInstallerClassRegProp(
                                PiPnpRtlCtx,
                                a4,
                                a5,
                                24,
                                (__int64)&v16,
                                (__int64)Pool2,
                                (__int64)&SecurityDescriptorLength);
      if ( InstallerClassRegProp == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, SecurityDescriptorLength, 1852141648LL);
        if ( !Pool2 )
          return 0LL;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  PiPnpRtlCtx,
                                  a4,
                                  v11,
                                  24,
                                  (__int64)&v16,
                                  (__int64)Pool2,
                                  (__int64)&SecurityDescriptorLength);
      }
      if ( InstallerClassRegProp >= 0 && v16 == 3 )
      {
        if ( RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0) )
        {
          LOBYTE(v13) = 1;
          v8 = (int)SeCaptureSecurityDescriptor((_DWORD)Pool2, 0, 1, v13, (__int64)&v17) >= 0;
        }
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( v8 )
    return v17;
  return 0LL;
}
