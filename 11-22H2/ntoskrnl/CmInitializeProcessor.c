/*
 * XREFs of CmInitializeProcessor @ 0x140A0F9BC
 * Callers:
 *     KiStartDynamicProcessor @ 0x1409738B8 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140305CD0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306B20 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwCreateKey @ 0x14041AA40 (ZwCreateKey.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080EE9C (CmpAddProcessorConfigurationEntry.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall CmInitializeProcessor(__int64 a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  unsigned int v4; // ecx
  HANDLE KeyHandle; // [rsp+48h] [rbp-9h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+3Fh] BYREF

  v1 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    CmpConfigurationData = (PVOID)ExAllocatePool2(256LL, (unsigned int)CmpConfigurationAreaSize, 538987843LL);
    if ( CmpConfigurationData )
    {
      v4 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
      Affinity.Mask = 1LL << (v4 & 0x3F);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      CmpAddProcessorConfigurationEntry(a1, *(_DWORD *)(a1 + 36), (int)KeyHandle);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      ExFreePoolWithTag(CmpConfigurationData, 0);
      CmpConfigurationData = 0LL;
    }
    else
    {
      v1 = -1073741670;
    }
    ZwClose(KeyHandle);
    return v1;
  }
  return result;
}
