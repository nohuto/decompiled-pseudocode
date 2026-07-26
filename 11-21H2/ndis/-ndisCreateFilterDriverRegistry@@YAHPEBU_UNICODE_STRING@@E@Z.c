/*
 * XREFs of ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x1C002B744
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C002B200 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0023120 (WPP_RECORDER_SF_dd_ea_1C0023120.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x1C006143C (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 */

__int64 __fastcall ndisCreateFilterDriverRegistry(const struct _UNICODE_STRING *a1, unsigned __int8 a2)
{
  int v2; // r14d
  unsigned int v4; // ebx
  int v5; // edx
  NTSTATUS RegistryValues; // esi
  NTSTATUS v8; // eax
  int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp-59h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+50h] [rbp-39h] BYREF
  int ValueData; // [rsp+100h] [rbp+77h] BYREF

  v2 = a2;
  if ( RtlIsStateSeparationEnabled() )
    return 0LL;
  DestinationString.Length = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  ValueData = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x4Bu,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      a1);
  DestinationString.MaximumLength = ndisParameterStr.Length + a1->Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(64LL, DestinationString.MaximumLength, 538985550);
  if ( DestinationString.Buffer )
  {
    RtlCopyUnicodeString(&DestinationString, a1);
    RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
    if ( RtlCheckRegistryKey(1u, (PWSTR)DestinationString.Buffer)
      && RtlCreateRegistryKey(1u, (PWSTR)DestinationString.Buffer) )
    {
      v4 = -1073741823;
    }
    else
    {
      memset(QueryTable, 0, sizeof(QueryTable));
      QueryTable[1].Name = 0LL;
      QueryTable[0].Name = (wchar_t *)L"DefaultFilterSettings";
      QueryTable[0].EntryContext = &ValueData;
      QueryTable[0].Flags = (_BYTE)v2 != 0 ? 292 : 36;
      QueryTable[0].DefaultType = (_BYTE)v2 != 0 ? 0x4000000 : 0;
      RegistryValues = RtlQueryRegistryValuesEx(1u, (PCWSTR)DestinationString.Buffer, QueryTable, 0LL, 0LL);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v5,
          1u,
          0x4Cu,
          (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
          RegistryValues,
          v2);
      if ( RegistryValues )
      {
        if ( RegistryValues == -1073741772 )
        {
          v4 = ndisSetAllFilterDefaultParameters(a1, &DestinationString, &ndisFilterDriverParamsStr, v2);
          if ( !v4 )
          {
            ValueData = 1;
            v8 = RtlWriteRegistryValue(
                   1u,
                   (PCWSTR)DestinationString.Buffer,
                   L"DefaultFilterSettings",
                   4u,
                   &ValueData,
                   4u);
            v9 = 0;
            if ( v8 )
              v9 = -1073741823;
            v4 = v9;
          }
        }
        else
        {
          v4 = -1073741823;
        }
      }
    }
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  else
  {
    v4 = -1073741670;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x4Du,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      (char)a1,
      v10);
  }
  return v4;
}
