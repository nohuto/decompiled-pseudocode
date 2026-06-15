/*
 * XREFs of ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18004199C
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180040818 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180040EF8 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180057E7C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180058158 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x18005DCB0 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     _lambda_02cf54438168803f227ee4e991ef3551_::operator() @ 0x180152EF0 (_lambda_02cf54438168803f227ee4e991ef3551_--operator().c)
 *     _lambda_584c7311ea728c54c4a47fc057f19078_::operator() @ 0x18015306C (_lambda_584c7311ea728c54c4a47fc057f19078_--operator().c)
 *     _lambda_f9bd085ee8be78cd632838852672651f_::operator() @ 0x1801533B8 (_lambda_f9bd085ee8be78cd632838852672651f_--operator().c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x180154DCC (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180156C54 (-UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180129980 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall AtmosCheck::Trace(AtmosCheck *this, const char *a2, int a3)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  const char *v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]

  if ( a3 )
  {
    if ( (unsigned int)dword_1801C02B0 > 2 )
    {
      *(_QWORD *)&EventDescriptor.Id = a2;
      LODWORD(v5) = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_1801C02B0,
        (__int64)&EventDescriptor,
        (__int64)&v5);
    }
  }
  else if ( (unsigned int)dword_1801C02B0 > 5 )
  {
    if ( a2 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( a2[v3] );
      v4 = v3 + 1;
    }
    else
    {
      a2 = MultiByteStr;
      v4 = 1;
    }
    v12 = v4;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1801C02B8;
    v13 = 0;
    EventDescriptor.Keyword = 0LL;
    v11 = a2;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1801C02B8;
    v8 = &unk_18018FAD4;
    UserData.Reserved = 2;
    v9 = 23;
    v10 = 1;
    LODWORD(v5) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1801C02D0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
