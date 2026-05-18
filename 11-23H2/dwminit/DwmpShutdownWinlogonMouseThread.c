/*
 * XREFs of DwmpShutdownWinlogonMouseThread @ 0x18000C750
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000836C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x18000EB5C (--1CKstBase@@QEAA@XZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x18000F600 (-Stop@CKstBase@@QEAAXXZ.c)
 */

__int64 DwmpShutdownWinlogonMouseThread()
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  CKstBase *v4; // rbx
  HANDLE ProcessHeap; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  GUID *v7; // [rsp+50h] [rbp+8h] BYREF
  GUID *v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  if ( gpKstWinLogon )
  {
    CKstBase::Stop(gpKstWinLogon);
    v4 = gpKstWinLogon;
    if ( gpKstWinLogon )
    {
      CKstBase::~CKstBase(gpKstWinLogon);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    gpKstWinLogon = 0LL;
    if ( (unsigned int)dword_180016000 > 5
      && (qword_180016010 & 0x400000000000LL) != 0
      && (qword_180016018 & 0x400000000000LL) == qword_180016018 )
    {
      v9 = 0x1000000LL;
      v7 = &gDwmInitTargetAppSessionGuid;
      v8 = &gDwmInitTelemetryActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
        v1,
        (int)&unk_18001227F,
        v2,
        v3,
        (__int64)&v9,
        (__int64 *)&v8,
        (__int64 *)&v7);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x748,
      (__int64)"onecoreuap\\windows\\dwm\\dwminit\\dll\\dwminit.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
