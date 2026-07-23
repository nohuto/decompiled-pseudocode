/*
 * XREFs of PiDevCfgVerifyDeviceAllowed @ 0x14087905C
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14087A974 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1403C6D9C (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     PiDevCfgQueryResolveValue @ 0x140562988 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgInitResolveContext @ 0x14087D0F4 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgFreeResolveContext @ 0x14087D49C (PiDevCfgFreeResolveContext.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgVerifyDeviceAllowed(__int64 a1, void *a2)
{
  int inited; // ebx
  int v5; // edi
  unsigned int *v7; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v9; // [rsp+28h] [rbp-58h]
  _OWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF

  inited = 0;
  ObjectAttributes.RootDirectory = a2;
  v8[1] = 0;
  v13 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v9 = L"Status";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
  memset(v10, 0, sizeof(v10));
  v5 = 0;
  v8[0] = 917516;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    inited = PiDevCfgInitResolveContext(a1, a2, v10);
    if ( inited >= 0 && (int)PiDevCfgQueryResolveValue((__int64)v10, KeyHandle, (__int64)L"Blocked", &v13) >= 0 )
    {
      if ( PnpValidateRegistryDword(v13) )
        v5 = *(unsigned int *)((char *)v7 + v7[2]);
      ExFreePoolWithTag(v7, 0);
      if ( v5 )
        inited = -1073740948;
    }
  }
  PiDevCfgFreeResolveContext(v10);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
