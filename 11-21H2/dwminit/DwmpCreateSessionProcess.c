/*
 * XREFs of DwmpCreateSessionProcess @ 0x180006980
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U2@@-$_.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800044C0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x180005BA8 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800075AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 __fastcall DwmpCreateSessionProcess(PVOID Parameter)
{
  unsigned __int64 v1; // rbp
  signed int v2; // ebx
  HANDLE Thread; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  signed int LastError; // eax
  GUID *v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10[4]; // [rsp+58h] [rbp-20h] BYREF
  int v11; // [rsp+88h] [rbp+10h] BYREF
  signed int v12; // [rsp+90h] [rbp+18h] BYREF
  GUID *v13; // [rsp+98h] [rbp+20h] BYREF

  v1 = (unsigned int)Parameter;
  v2 = 0;
  Thread = 0LL;
  if ( OneCoreSkipDwmLaunch() )
  {
    v2 = 1;
  }
  else if ( gDwmFirstLaunch )
  {
    SetLastError(0);
    Thread = CreateThread(
               0LL,
               0LL,
               (LPTHREAD_START_ROUTINE)DwmpCreateSessionProcessWorker,
               (LPVOID)(unsigned int)v1,
               0,
               0LL);
    if ( !Thread )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 >= 0 )
        v2 = -2003304445;
      DoStackCaptureDirect(v2, 0x5C7u);
    }
  }
  else
  {
    DwmpCreateSessionProcessWorker((PVOID)v1);
  }
  if ( (unsigned int)dword_180015000 > 5
    && (qword_180015010 & 0x400000000000LL) != 0
    && (qword_180015018 & 0x400000000000LL) == qword_180015018 )
  {
    v11 = v1;
    v13 = &gDwmInitTargetAppSessionGuid;
    v12 = v2;
    v9 = &gDwmInitTelemetryActivityId;
    v10[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v4,
      (int)&unk_180010F6F,
      v5,
      v6,
      (__int64)v10,
      (__int64 *)&v9,
      (__int64)&v12,
      (__int64)&v11,
      (__int64 *)&v13);
  }
  if ( Thread )
    CloseHandle(Thread);
  return (unsigned int)v2;
}
