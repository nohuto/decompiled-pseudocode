/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1C01037F0
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

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTCALLOUT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
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
  __int128 *v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  _BYTE v33[4]; // [rsp+30h] [rbp-158h] BYREF
  _DWORD v34[5]; // [rsp+34h] [rbp-154h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-140h] BYREF
  __int128 v36; // [rsp+58h] [rbp-130h]
  __int64 v37; // [rsp+68h] [rbp-120h]
  __int64 v38; // [rsp+70h] [rbp-118h]
  __int128 v39; // [rsp+98h] [rbp-F0h]
  __int128 v40; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-D0h]
  __int64 v42; // [rsp+C0h] [rbp-C8h] BYREF
  int v43; // [rsp+C8h] [rbp-C0h]
  int v44; // [rsp+CCh] [rbp-BCh]
  __int64 v45; // [rsp+D0h] [rbp-B8h]
  __int128 v46; // [rsp+D8h] [rbp-B0h]
  __int128 v47; // [rsp+E8h] [rbp-A0h]
  __int128 v48; // [rsp+F8h] [rbp-90h]
  __int128 v49; // [rsp+108h] [rbp-80h]
  __int128 v50; // [rsp+118h] [rbp-70h]
  __int128 v51; // [rsp+128h] [rbp-60h]
  __int64 v52; // [rsp+138h] [rbp-50h]
  __int64 v53; // [rsp+140h] [rbp-48h]

  v35 = 0LL;
  v34[0] = 0;
  v40 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v44 = 0;
  v42 = v14;
  v43 = a2 & 0x1FFFF;
  v45 = a3;
  v46 = *a4;
  v47 = a4[1];
  v48 = a4[2];
  v49 = a4[3];
  v50 = a4[4];
  v51 = a4[5];
  v52 = a5;
  v53 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v40);
  v15 = *(_QWORD *)(v13 + 480);
  v39 = *(_OWORD *)(v15 + 64);
  v36 = v39;
  v37 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v33);
  EtwTraceBeginCallback(53LL);
  v18 = KeUserModeCallback(53LL, &v42, 136LL, &v35, v34);
  EtwTraceEndCallback(53LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v33);
  ThreadUnlock1(v20, v19, v21);
  v22 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v22 + 64) = v39;
  *(_QWORD *)(v22 + 80) = v37;
  if ( v18 >= 0 && v34[0] == 24 )
  {
    v23 = (__int64 *)v35;
    if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v38 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = *(__int128 **)(v35 + 16);
      if ( v26 + 6 < v26 || (unsigned __int64)(v26 + 6) > MmUserProbeAddress )
        v26 = (__int128 *)MmUserProbeAddress;
      v27 = v26[1];
      v28 = v26[2];
      v29 = v26[3];
      v30 = v26[4];
      v31 = v26[5];
      *a4 = *v26;
      a4[1] = v27;
      a4[2] = v28;
      a4[3] = v29;
      a4[4] = v30;
      a4[5] = v31;
      return v24;
    }
  }
  return 0LL;
}
