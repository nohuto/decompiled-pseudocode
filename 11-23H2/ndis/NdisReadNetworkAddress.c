/*
 * XREFs of NdisReadNetworkAddress @ 0x1C005D1B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     NdisReadConfiguration @ 0x1C001D370 (NdisReadConfiguration.c)
 */

void __stdcall NdisReadNetworkAddress(
        PNDIS_STATUS Status,
        PVOID *NetworkAddress,
        PUINT NetworkAddressLength,
        NDIS_HANDLE ConfigurationHandle)
{
  unsigned int v7; // ebp
  CHAR *Buffer; // rbx
  CHAR *v9; // r12
  CHAR *v10; // rsi
  unsigned __int64 v11; // r15
  CHAR String; // [rsp+80h] [rbp+8h] BYREF
  CHAR v13; // [rsp+81h] [rbp+9h]
  char v14; // [rsp+82h] [rbp+Ah]
  PVOID *v15; // [rsp+88h] [rbp+10h]
  ULONG Value; // [rsp+90h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp+20h] BYREF

  v15 = NetworkAddress;
  ParameterValue = 0LL;
  Value = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x23u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      ConfigurationHandle);
  *Status = -1073741823;
  *NetworkAddressLength = 0;
  NdisReadConfiguration(Status, &ParameterValue, ConfigurationHandle, (PNDIS_STRING)&Keyword, NdisParameterString);
  if ( !*Status
    && ParameterValue->ParameterType == NdisParameterString
    && ParameterValue->ParameterData.StringData.Length >= 4u )
  {
    v14 = 0;
    v7 = 0;
    Buffer = (CHAR *)ParameterValue->ParameterData.StringData.Buffer;
    v9 = Buffer;
    v10 = Buffer + 4;
    v11 = (unsigned __int64)&Buffer[2 * ((unsigned __int64)ParameterValue->ParameterData.StringData.Length >> 1)];
    if ( (unsigned __int64)(Buffer + 4) > v11 )
      goto LABEL_14;
    while ( 1 )
    {
      String = *Buffer;
      v13 = Buffer[2];
      Buffer += 4;
      v10 += 4;
      if ( RtlCharToInteger(&String, 0x10u, &Value) < 0 )
        break;
      ++v7;
      *v9++ = Value;
      if ( (unsigned __int64)Buffer < v11 && *(_WORD *)Buffer == 45 )
      {
        Buffer += 2;
        v10 += 2;
      }
      if ( (unsigned __int64)v10 > v11 )
      {
        *Status = 0;
        *v15 = ParameterValue->ParameterData.StringData.Buffer;
        *NetworkAddressLength = v7;
        if ( v7 )
          goto LABEL_14;
        break;
      }
    }
  }
  *Status = -1073741823;
LABEL_14:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x24u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      ConfigurationHandle);
}
