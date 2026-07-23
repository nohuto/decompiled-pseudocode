/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A534
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011B40 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18008AC20 (RtlpInitializeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008AC4C (RtlUpdateProcessRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x180009E58 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18000A13C (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18000A230 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18000A320 (RtlpMuiRegFreeRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C6F4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A2E40 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1801129A0 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(_QWORD *a1)
{
  _DWORD *v1; // rbx
  _DWORD *Heap; // rax
  _DWORD *v4; // rsi
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
      v5 = RtlpMuiRegLoadRegistryInfo((__int64)RegistryInfo, 4095);
      if ( v5 >= 0 )
      {
        v5 = 0;
        v1[3] = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo((__int64)v1, 0xFFFu);
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
    || (v1 = BaseAddress, v5 = RtlpMuiRegAddNeutralToInstalled((__int64)BaseAddress), v5 < 0) )
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
      RtlpMuiRegLoadRegistryInfo((__int64)v1, 4);
      NtClose(KeyHandle);
    }
    NtClose(Handle);
  }
  RtlpMuiRegLoadRegistryInfo((__int64)v1, 568);
LABEL_15:
  *a1 = v1;
  return (unsigned int)v5;
}
