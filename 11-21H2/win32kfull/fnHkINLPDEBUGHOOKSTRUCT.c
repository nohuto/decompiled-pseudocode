/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x1C022AAE4
 * Callers:
 *     xxxHkCallHook @ 0x1C0053C4C (xxxHkCallHook.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1C022205C (-CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z.c)
 */

__int64 __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 result; // rax
  _BYTE v12[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v13; // [rsp+34h] [rbp-B4h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-B0h] BYREF
  _OWORD v15[8]; // [rsp+50h] [rbp-98h] BYREF

  v14[0] = 0LL;
  v13 = 0;
  memset(v15, 0, 0x78uLL);
  LODWORD(v15[0]) = a1;
  *((_QWORD *)&v15[0] + 1) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  v15[1] = *(_OWORD *)a3;
  v15[2] = *(_OWORD *)(a3 + 16);
  *((_QWORD *)&v15[6] + 1) = a4;
  *(_QWORD *)&v15[7] = a5;
  if ( a2 - 13 <= 1 )
    return 0LL;
  LODWORD(v15[6]) = CopyDebugHookLParam(a2, (union _DEBUGLPARAM *)&v15[3], (struct tagDEBUGHOOKINFO *)a3);
  *((_QWORD *)&v15[1] + 1) = 0LL;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  EtwTraceBeginCallback(43LL);
  v9 = KeUserModeCallback(43LL, v15, 120LL, v14, &v13);
  EtwTraceEndCallback(43LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  if ( v9 < 0 || v13 != 24 )
    return 0LL;
  v10 = (__int64 *)v14[0];
  if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  result = *v10;
  v14[1] = *v10;
  return result;
}
