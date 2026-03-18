/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C0228200
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rax
  __int128 v16; // xmm6
  __int64 v17; // xmm7_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  ULONG64 v25; // rcx
  _BYTE v27[4]; // [rsp+30h] [rbp-F8h] BYREF
  _DWORD v28[5]; // [rsp+34h] [rbp-F4h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-D8h]
  __int128 v31; // [rsp+60h] [rbp-C8h]
  __int64 v32; // [rsp+70h] [rbp-B8h]
  __int128 v33; // [rsp+90h] [rbp-98h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-88h]
  __int64 v35; // [rsp+A8h] [rbp-80h] BYREF
  int v36; // [rsp+B0h] [rbp-78h]
  int v37; // [rsp+B4h] [rbp-74h]
  __int64 v38; // [rsp+B8h] [rbp-70h]
  __int128 v39; // [rsp+C0h] [rbp-68h]
  __int64 v40; // [rsp+D0h] [rbp-58h]
  __int64 v41; // [rsp+D8h] [rbp-50h]

  v29 = 0LL;
  v28[0] = 0;
  v30 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v37 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
  {
    v35 = v13;
    v36 = a2;
    v38 = a3;
    v39 = *a4;
    v40 = a5;
    v41 = a6;
    ThreadLock((__int64)a1, (__int64 *)&v33);
    v15 = *(_QWORD *)(v12 + 480);
    v16 = *(_OWORD *)(v15 + 64);
    v31 = v16;
    v17 = *(_QWORD *)(v15 + 80);
    v32 = v17;
    *(_QWORD *)(v15 + 72) = v13;
    if ( a1 )
      v18 = *a1;
    else
      v18 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v18;
    if ( a1 )
      v19 = *(_QWORD *)(a1[5] + 224);
    else
      v19 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v19;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v27);
    EtwTraceBeginCallback(24LL);
    v20 = KeUserModeCallback(24LL, &v35, 56LL, &v29, v28);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v27);
    ThreadUnlock1(v22, v21, v23);
    v24 = *(_QWORD *)(v12 + 480);
    *(_OWORD *)(v24 + 64) = v16;
    *(_QWORD *)(v24 + 80) = v17;
    if ( v20 < 0 || v28[0] != 24 )
      return 0LL;
    v25 = v29;
    if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
      v25 = MmUserProbeAddress;
    return *(_QWORD *)v25;
  }
  return v30;
}
