/*
 * XREFs of PiDevCfgCopyDeviceKeys @ 0x14087E554
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14087E500 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14095D5F0 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x140960120 (PiDevCfgResetDeviceKeyCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B94B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B94D90 (PipCommitPendingService.c)
 * Callees:
 *     PiDevCfgPopCopyKeyEntry @ 0x1403CE7EC (PiDevCfgPopCopyKeyEntry.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1403CE84C (PiDevCfgPushCopyKeyEntry.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x14041E7B0 (ZwSetSecurityObject.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E664 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087ED40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKeys(void *a1, void *a2, __int64 a3, __int64 a4)
{
  int v7; // edi
  int v8; // ebx
  int v10; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v12; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h]
  __int64 v14[2]; // [rsp+60h] [rbp-10h] BYREF

  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v14[1] = (__int64)v14;
  v10 = 1;
  v14[0] = (__int64)v14;
  if ( (int)PiDevCfgGetKeySecurityDescriptor(a1) >= 0 )
  {
    ZwSetSecurityObject(a2, 4u, SecurityDescriptor);
    ExFreePoolWithTag(SecurityDescriptor, 0);
  }
  v7 = PiDevCfgPushCopyKeyEntry((HANDLE *)v14, a1, a2, 1);
  while ( v7 >= 0 )
  {
    if ( !PiDevCfgPopCopyKeyEntry(v14, &Handle, &v12, &v10) )
      break;
    v8 = v10;
    v7 = PiDevCfgCopyDeviceKey(Handle, v10, (__int64)v14, a4);
    if ( (v8 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v12);
    }
  }
  while ( PiDevCfgPopCopyKeyEntry(v14, &Handle, &v12, &v10) )
  {
    if ( (v10 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v12);
    }
  }
  return (unsigned int)v7;
}
