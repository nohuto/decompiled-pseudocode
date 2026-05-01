/*
 * XREFs of ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z @ 0x18007B450
 * Callers:
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x18003AE0C (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x18007B378 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSid@U_SID@@@@@-$_tlgWriteTempla.c)
 *     ?HampSystemBamQueryState@@YAJPEAU_HAM_SESSION@@PEBG1PEAK@Z @ 0x180092A34 (-HampSystemBamQueryState@@YAJPEAU_HAM_SESSION@@PEBG1PEAK@Z.c)
 */

__int64 __fastcall HampSessionCheckBackgroundAccessAllowed(
        struct _HAM_SESSION *a1,
        struct _HAM_PACKAGE_INFO *a2,
        unsigned int *a3)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  const unsigned __int16 *v12; // [rsp+48h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+38h] BYREF
  NTSTATUS v15; // [rsp+A8h] [rbp+48h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = RtlConvertSidToUnicodeString(&DestinationString, (char *)a2 + 132, 1u);
  if ( v6 >= 0 )
  {
    v6 = HampSystemBamQueryState(a1, DestinationString.Buffer, (const unsigned __int16 *)a2, &v14);
    if ( v6 >= 0 )
    {
      v6 = 0;
      *a3 = v14;
    }
    else if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    {
      v14 = *((_DWORD *)a2 + 50);
      v11 = (__int64)a2 + 132;
      v12 = (const unsigned __int16 *)a2;
      v15 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
        v7,
        byte_1800C16E5,
        v8,
        v9,
        (__int64)&v15,
        &v12,
        (__int64)&v14,
        &v11);
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v6;
}
