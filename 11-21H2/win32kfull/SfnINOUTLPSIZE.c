/*
 * XREFs of SfnINOUTLPSIZE @ 0x1C0227010
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall SfnINOUTLPSIZE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  int v30; // [rsp+68h] [rbp-A0h]
  int v31; // [rsp+6Ch] [rbp-9Ch]
  __int64 v32; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  __int64 v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  __int128 v37; // [rsp+B8h] [rbp-50h]
  __int128 v38; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-30h]
  int v40; // [rsp+110h] [rbp+8h] BYREF
  char v41; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v42; // [rsp+120h] [rbp+18h] BYREF

  v42 = 0LL;
  v40 = 0;
  v38 = 0LL;
  v39 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v31 = 0;
  v29 = v14;
  v30 = a2;
  v32 = a3;
  v33 = *a4;
  v34 = a5;
  v35 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v38);
  v15 = *(_QWORD *)(v13 + 480);
  v37 = *(_OWORD *)(v15 + 64);
  v28 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v17;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(126LL);
  v18 = KeUserModeCallback(126LL, &v29, 48LL, &v42, &v40);
  EtwTraceEndCallback(126LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ThreadUnlock1(v20, v19, v21);
  v22 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v22 + 64) = v37;
  *(_QWORD *)(v22 + 80) = v28;
  if ( v18 >= 0 && v40 == 24 )
  {
    v23 = (__int64 *)v42;
    if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v36 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int64 **)(v25 + 96) != a4 )
    {
      v26 = *(__int64 **)(v42 + 16);
      if ( v26 + 1 < v26 || (unsigned __int64)(v26 + 1) > MmUserProbeAddress )
        v26 = (__int64 *)MmUserProbeAddress;
      *a4 = *v26;
      return v24;
    }
  }
  return 0LL;
}
