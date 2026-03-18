/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C0149D40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  ULONG64 v21; // rcx
  __int64 v23; // [rsp+58h] [rbp-E0h]
  __int128 v24; // [rsp+80h] [rbp-B8h]
  __int128 v25; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-98h]
  _OWORD v27[8]; // [rsp+B0h] [rbp-88h] BYREF
  int v28; // [rsp+140h] [rbp+8h] BYREF
  char v29; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v30; // [rsp+150h] [rbp+18h] BYREF

  v30 = 0LL;
  v28 = 0;
  v25 = 0LL;
  v26 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  memset(v27, 0, 0x60uLL);
  *(_QWORD *)&v27[0] = v12;
  DWORD2(v27[0]) = a2;
  *(_QWORD *)&v27[1] = a3;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 44) = 0;
  }
  DWORD2(v27[1]) = a4 != 0;
  if ( a4 )
  {
    v27[3] = *(_OWORD *)a4;
    v27[4] = *(_OWORD *)(a4 + 16);
    v27[5] = *(_OWORD *)(a4 + 32);
  }
  v27[2] = __PAIR128__(a6, a5);
  ThreadLock((__int64)a1, (__int64 *)&v25);
  v13 = *(_QWORD *)(v11 + 480);
  v24 = *(_OWORD *)(v13 + 64);
  v23 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v15;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(4LL);
  v16 = KeUserModeCallback(4LL, v27, 96LL, &v30, &v28);
  EtwTraceEndCallback(4LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ThreadUnlock1(v18, v17, v19);
  v20 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v20 + 64) = v24;
  *(_QWORD *)(v20 + 80) = v23;
  if ( v16 < 0 || v28 != 24 )
    return 0LL;
  v21 = v30;
  if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
    v21 = MmUserProbeAddress;
  return *(_QWORD *)v21;
}
