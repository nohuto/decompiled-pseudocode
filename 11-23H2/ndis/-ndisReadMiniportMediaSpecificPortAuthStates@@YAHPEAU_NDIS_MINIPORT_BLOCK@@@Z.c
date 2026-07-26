/*
 * XREFs of ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E298
 * Callers:
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E4E8 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     NdisCloseConfiguration @ 0x1C001D290 (NdisCloseConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C001E870 (NdisOpenProtocolConfiguration.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C002E160 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

__int64 __fastcall ndisReadMiniportMediaSpecificPortAuthStates(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int MiniportSpecificPortAuthStates; // ebx
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-79h] BYREF
  NTSTATUS v5; // [rsp+58h] [rbp-69h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+60h] [rbp-61h] BYREF
  _UNICODE_STRING String; // [rsp+68h] [rbp-59h] BYREF
  _UNICODE_STRING v8; // [rsp+78h] [rbp-49h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-39h] BYREF
  _UNICODE_STRING Source; // [rsp+98h] [rbp-29h] BYREF
  char v11; // [rsp+A8h] [rbp-19h] BYREF
  char v12; // [rsp+D0h] [rbp+Fh] BYREF

  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_DWORD *)(&v8.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  Source = 0LL;
  ConfigurationHandle = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Eu,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      a1);
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)&v11;
  *(_DWORD *)&v8.Length = 2621440;
  v8.Buffer = (wchar_t *)&v12;
  if ( RtlIntegerToUnicodeString(a1->IfBlock->ifType, 0xAu, &String)
    || RtlIntegerToUnicodeString(a1->PhysicalMediumType, 0xAu, &v8) )
  {
    MiniportSpecificPortAuthStates = -1073741670;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes\\");
    RtlInitUnicodeString(&Source, L"\\");
    Destination.Length = 0;
    Destination.MaximumLength = String.Length + v8.Length + DestinationString.Length + Source.Length + 4;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550);
    if ( !Destination.Buffer )
    {
      MiniportSpecificPortAuthStates = -1073741670;
      goto LABEL_9;
    }
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &String);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeStringToString(&Destination, &v8);
    v5 = RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer);
    MiniportSpecificPortAuthStates = v5;
    if ( !v5 )
    {
      NdisOpenProtocolConfiguration(&v5, &ConfigurationHandle, &Destination);
      MiniportSpecificPortAuthStates = v5;
      if ( !v5 )
      {
        MiniportSpecificPortAuthStates = ndisReadMiniportSpecificPortAuthStates(a1, ConfigurationHandle);
        NdisCloseConfiguration(ConfigurationHandle);
        if ( !MiniportSpecificPortAuthStates )
          a1->FilterPnPFlags |= 0x10u;
      }
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_9:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Fu,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      MiniportSpecificPortAuthStates);
  return MiniportSpecificPortAuthStates;
}
