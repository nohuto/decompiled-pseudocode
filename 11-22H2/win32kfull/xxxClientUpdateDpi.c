/*
 * XREFs of xxxClientUpdateDpi @ 0x1C0213724
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientUpdateDpi(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG64 v7; // rcx
  char v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v10 = 0;
  v11 = a1;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9, a2, a3, a4);
  EtwTraceBeginCallback(58LL);
  v4 = KeUserModeCallback(58LL, &v11, 4LL, &v12, &v10);
  EtwTraceEndCallback(58LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9, v5, v6);
  if ( v4 < 0 || v10 != 24 )
    return 0LL;
  v7 = v12;
  if ( v12 + 8 < v12 || v12 + 8 > MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  return *(_QWORD *)v7;
}
