/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006E5F4
 * Callers:
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006DCA0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180091338 (RtlUpdateProcessRegistryInfo.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006E750 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006E840 (RtlpMuiRegFreeRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F1DC (OpenGlobalizationUserSettingsKey.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18006F480 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x18006F710 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A5FE0 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1801110A0 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(_QWORD *a1)
{
  _DWORD *v1; // rbx
  PVOID Heap; // rax
  void *v4; // rsi
  int v5; // edi
  void *RegistryInfo; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+48h]

  v1 = 0LL;
  BaseAddress = 0LL;
  if ( !a1 || *a1 )
  {
    v5 = -1073741811;
    goto LABEL_15;
  }
  DataSize = 0;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, 0LL) < 0 )
  {
LABEL_17:
    RegistryInfo = (void *)RtlpMuiRegCreateRegistryInfo();
    BaseAddress = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v5 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095LL);
      if ( v5 >= 0 )
      {
        v5 = 0;
        v1[3] = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 4095LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        v1 = 0LL;
      }
      goto LABEL_15;
    }
LABEL_21:
    v5 = -1073741801;
    goto LABEL_15;
  }
  if ( !DataSize )
    goto LABEL_21;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
  v4 = Heap;
  if ( !Heap )
  {
    v1 = BaseAddress;
    goto LABEL_21;
  }
  if ( ZwGetMUIRegistryInfo(0, &DataSize, Heap) < 0
    || (int)RtlpMuiRegDeserializeRegistryInfo(v4, DataSize, &BaseAddress) < 0
    || (v1 = BaseAddress, v5 = RtlpMuiRegAddNeutralToInstalled(BaseAddress), v5 < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    goto LABEL_17;
  }
  if ( *((_QWORD *)v1 + 5) && (int)OpenGlobalizationUserSettingsKey(0x2000000u) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo(v1, 4LL);
      NtClose(KeyHandle);
    }
    NtClose(Handle);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568LL);
LABEL_15:
  *a1 = v1;
  return (unsigned int)v5;
}
