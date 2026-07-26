/*
 * XREFs of ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0162AFC
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01607AC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0006610 (NdisConvertNdisStatusToNtStatus.c)
 *     NdisCloseConfiguration @ 0x1C001D290 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001D370 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C001E870 (NdisOpenProtocolConfiguration.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C0033450 (NdisOpenConfigurationKeyByIndex.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

NTSTATUS ndisIfLuidAllocatorSubsystemInitialize(void)
{
  ULONG v0; // r14d
  unsigned __int16 Length; // r12
  wchar_t *Buffer; // r15
  size_t v3; // rbx
  __int64 Pool2; // rax
  void **v5; // rdi
  _QWORD *v6; // rax
  int v7; // ebx
  NTSTATUS result; // eax
  UNICODE_STRING Keyword; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING v10; // [rsp+40h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  UNICODE_STRING KeyName; // [rsp+60h] [rbp-18h] BYREF
  int Status; // [rsp+B0h] [rbp+38h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B8h] [rbp+40h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+C0h] [rbp+48h] BYREF
  PVOID KeyHandle; // [rsp+C8h] [rbp+50h] BYREF

  Status = 0;
  qword_1C00F5E98 = (__int64)&qword_1C00F5E90;
  qword_1C00F5E90 = &qword_1C00F5E90;
  KeInitializeMutex(&Mutex, 0xFFFFu);
  if ( !RtlCheckRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes")
    || (result = RtlCreateRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes"), result >= 0) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes");
    ConfigurationHandle = 0LL;
    NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &DestinationString);
    if ( Status )
    {
      return NdisConvertNdisStatusToNtStatus(Status);
    }
    else
    {
      v0 = 0;
      while ( 1 )
      {
        KeyHandle = 0LL;
        NdisOpenConfigurationKeyByIndex(&Status, ConfigurationHandle, v0++, &KeyName, &KeyHandle);
        if ( Status )
          break;
        ParameterValue = 0LL;
        Keyword.Buffer = (wchar_t *)L"IfType";
        *(_QWORD *)&Keyword.Length = 917516LL;
        NdisReadConfiguration(&Status, &ParameterValue, KeyHandle, &Keyword, NdisParameterInteger);
        if ( !Status )
        {
          Length = ParameterValue->ParameterData.StringData.Length;
          v10.Buffer = (wchar_t *)L"IfUsedNetLuidIndices";
          *(_QWORD *)&v10.Length = 2752552LL;
          NdisReadConfiguration(&Status, &ParameterValue, KeyHandle, &v10, NdisParameterBinary);
          if ( Status )
          {
            Buffer = 0LL;
            v3 = 0LL;
          }
          else
          {
            Buffer = ParameterValue->ParameterData.StringData.Buffer;
            v3 = ParameterValue->ParameterData.StringData.Length;
          }
          Pool2 = ExAllocatePool2(64LL, (unsigned int)(2 * v3 + 64), 1718174798);
          v5 = (void **)Pool2;
          *(_WORD *)(Pool2 + 16) = Length;
          if ( (_DWORD)v3 )
          {
            *(_DWORD *)(Pool2 + 40) = v3;
            *(_QWORD *)(Pool2 + 48) = Pool2 + 64;
            *(_QWORD *)(Pool2 + 56) = v3 + Pool2 + 64;
            memmove((void *)(Pool2 + 64), Buffer, v3);
            memmove(v5[7], Buffer, v3);
          }
          v6 = qword_1C00F5E90;
          if ( *((PVOID **)qword_1C00F5E90 + 1) != &qword_1C00F5E90 )
            __fastfail(3u);
          *v5 = qword_1C00F5E90;
          v5[1] = &qword_1C00F5E90;
          v6[1] = v5;
          qword_1C00F5E90 = v5;
        }
      }
      v7 = NdisConvertNdisStatusToNtStatus(Status);
      if ( ConfigurationHandle )
        NdisCloseConfiguration(ConfigurationHandle);
      return v7;
    }
  }
  return result;
}
