/*
 * XREFs of sub_1409E62D0 @ 0x1409E62D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     CmRegisterCallbackEx @ 0x14090FD10 (CmRegisterCallbackEx.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 */

void __fastcall sub_1409E62D0(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( FilterData && *((_DWORD *)FilterData + 2) == 4 )
    qword_140D3B0B0 = **(unsigned int **)FilterData;
  if ( ControlCode )
  {
    if ( ControlCode == 1 && !byte_140D3B01D )
    {
      RtlInitUnicodeString(&DestinationString, L"425500");
      if ( CmRegisterCallbackEx(
             (PEX_CALLBACK_FUNCTION)Function,
             &DestinationString,
             &DestinationString,
             0LL,
             &stru_140D3B230,
             0LL) >= 0 )
        byte_140D3B01D = 1;
    }
  }
  else if ( byte_140D3B01D )
  {
    CmUnRegisterCallback(stru_140D3B230);
    byte_140D3B01D = 0;
  }
}
