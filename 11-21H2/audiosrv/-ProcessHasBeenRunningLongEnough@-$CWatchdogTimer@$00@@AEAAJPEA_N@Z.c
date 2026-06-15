/*
 * XREFs of ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800C8E00
 * Callers:
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C86D4 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD00 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1800C80BC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800C8FE4 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(__int64 a1, bool *a2)
{
  HANDLE CurrentProcess; // rax
  const char *v5; // r9
  int v7; // r8d
  double v8; // xmm6_8
  unsigned __int64 v9; // rcx
  double v10; // xmm6_8
  __int64 v11; // r9
  bool v12; // cc
  unsigned __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  struct _FILETIME v16; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct _FILETIME UserTime; // [rsp+90h] [rbp+20h] BYREF
  struct _FILETIME CreationTime; // [rsp+98h] [rbp+28h] BYREF

  CurrentProcess = GetCurrentProcess();
  if ( !GetProcessTimes(CurrentProcess, &CreationTime, &UserTime, &UserTime, &UserTime) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x12F,
             (unsigned int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
             v5);
  GetSystemTimePreciseAsFileTime(&v13);
  if ( v13 >= *(_QWORD *)&CreationTime )
  {
    v7 = v13 - CreationTime.dwLowDateTime;
    if ( (__int64)(v13 - *(_QWORD *)&CreationTime) < 0 )
    {
      v9 = v7 & 1 | ((v13 - *(_QWORD *)&CreationTime) >> 1);
      v8 = (double)(int)v9 + (double)(int)v9;
    }
    else
    {
      v8 = (double)v7;
    }
    v10 = v8 / 10000000.0;
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_DWORD *)v11 <= 5u;
    v14 = *(_QWORD *)&v10;
    if ( !v12 && (*(_BYTE *)(v11 + 16) & 1) != 0 && (*(_QWORD *)(v11 + 24) & 1LL) == *(_QWORD *)(v11 + 24) )
    {
      v16 = CreationTime;
      v15 = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v11,
        byte_18018822B,
        v14,
        v11,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14);
    }
    *a2 = v10 >= 300.0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x146,
      (unsigned int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
      (const char *)0x8000FFFFLL,
      (int)"Time went backwards: this process was created at %I64u hns, but it is now only %I64u hns",
      *(const char **)&CreationTime,
      v13);
    return 2147549183LL;
  }
}
