/*
 * XREFs of ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800D2B50
 * Callers:
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800D2570 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180004494 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180016538 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(__int64 a1, bool *a2)
{
  HANDLE CurrentProcess; // rax
  const char *v5; // r9
  int v7; // ecx
  double v8; // xmm6_8
  double v9; // xmm6_8
  _DWORD *v10; // rcx
  bool v11; // cc
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  double v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct _FILETIME UserTime; // [rsp+90h] [rbp+20h] BYREF
  struct _FILETIME CreationTime; // [rsp+98h] [rbp+28h] BYREF

  CurrentProcess = GetCurrentProcess();
  if ( !GetProcessTimes(CurrentProcess, &CreationTime, &UserTime, &UserTime, &UserTime) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x146,
             (unsigned int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
             v5);
  GetSystemTimePreciseAsFileTime(&v16);
  if ( v16 >= *(_QWORD *)&CreationTime )
  {
    v7 = v16 - CreationTime.dwLowDateTime;
    if ( (__int64)(v16 - *(_QWORD *)&CreationTime) < 0 )
      v8 = (double)(int)(v7 & 1 | ((v16 - *(_QWORD *)&CreationTime) >> 1))
         + (double)(int)(v7 & 1 | ((v16 - *(_QWORD *)&CreationTime) >> 1));
    else
      v8 = (double)v7;
    v9 = v8 / 10000000.0;
    v10 = *(_DWORD **)(a1 + 8);
    v11 = *v10 <= 5u;
    v17 = v9;
    if ( !v11 )
    {
      if ( tlgKeywordOn((__int64)v10, 1LL) )
      {
        v18 = v15;
        v19 = v14;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v12,
          byte_18018F21A,
          v13,
          v14,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17);
      }
    }
    *a2 = v9 >= 300.0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x15D,
      (int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
      (const char *)0x8000FFFFLL,
      (unsigned __int64)"Time went backwards: this process was created at %I64u hns, but it is now only %I64u hns",
      *(const char **)&CreationTime,
      v16);
    return 2147549183LL;
  }
}
