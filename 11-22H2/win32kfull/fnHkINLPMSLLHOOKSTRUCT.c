/*
 * XREFs of fnHkINLPMSLLHOOKSTRUCT @ 0x1C0156782
 * Callers:
 *     xxxHkCallHook @ 0x1C0120850 (xxxHkCallHook.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall fnHkINLPMSLLHOOKSTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 result; // rax
  _BYTE v17[4]; // [rsp+30h] [rbp-78h] BYREF
  int v18; // [rsp+34h] [rbp-74h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-70h] BYREF
  int v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  __int64 v22; // [rsp+60h] [rbp-48h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  __int128 v24; // [rsp+70h] [rbp-38h]
  __int128 v25; // [rsp+80h] [rbp-28h]

  v19[0] = 0LL;
  v18 = 0;
  memset_0(&v20, 0, 0x40uLL);
  v20 = a1;
  v21 = a2;
  *((_DWORD *)a3 + 5) = 0;
  v24 = *a3;
  v25 = a3[1];
  v22 = a4;
  v23 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17, v9, v10, v11);
  EtwTraceBeginCallback(46LL);
  v12 = KeUserModeCallback(46LL, &v20, 64LL, v19, &v18);
  EtwTraceEndCallback(46LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17, v13, v14);
  if ( v12 < 0 || v18 != 24 )
    return 0LL;
  v15 = (__int64 *)v19[0];
  if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || v19[0] + 8LL > MmUserProbeAddress )
    v15 = (__int64 *)MmUserProbeAddress;
  result = *v15;
  v19[1] = *v15;
  return result;
}
