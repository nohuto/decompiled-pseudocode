/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C0222C70
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rdi
  _BYTE v22[4]; // [rsp+30h] [rbp-338h] BYREF
  _DWORD v23[5]; // [rsp+34h] [rbp-334h] BYREF
  unsigned __int8 *v24; // [rsp+48h] [rbp-320h]
  unsigned __int64 v25; // [rsp+50h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  __int128 v27; // [rsp+68h] [rbp-300h]
  __int64 v28; // [rsp+78h] [rbp-2F0h]
  __int128 v29; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v30; // [rsp+90h] [rbp-2D8h]
  __int64 v31; // [rsp+98h] [rbp-2D0h]
  __int128 v32; // [rsp+B8h] [rbp-2B0h]
  __int128 v33; // [rsp+C8h] [rbp-2A0h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-290h]
  _OWORD v35[3]; // [rsp+E0h] [rbp-288h] BYREF
  __int64 v36; // [rsp+110h] [rbp-258h]
  unsigned __int8 v37[512]; // [rsp+120h] [rbp-248h] BYREF

  memset(v35, 0, sizeof(v35));
  v36 = 0LL;
  v25 = 0LL;
  v23[0] = 0;
  v33 = 0LL;
  v34 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v8 = ThreadWin32Thread;
  if ( a1 )
    v9 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v37, 1, 0x200uLL);
  v11 = result;
  v24 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v29 = 0LL;
    v30 = 0LL;
    if ( v11 != (unsigned __int8 *)v35 && v11 != v37 )
      PushW32ThreadLock((__int64)v11, &v29, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_22;
    *((_DWORD *)v11 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, a4, a3, (void **)v11 + 6) < 0 )
      goto LABEL_22;
    ThreadLock((__int64)a1, (__int64 *)&v33);
    v12 = *(_QWORD *)(v8 + 480);
    v32 = *(_OWORD *)(v12 + 64);
    v27 = v32;
    v28 = *(_QWORD *)(v12 + 80);
    *(_QWORD *)(v12 + 72) = v9;
    v13 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 480) + 64LL) = v13;
    v14 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 480) + 80LL) = v14;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v22);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v11 + 2) = 0LL;
    v15 = KeUserModeCallback(1LL, v11, *(unsigned int *)v11, &v25, v23);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v22);
    ThreadUnlock1(v17, v16, v18);
    v19 = *(_QWORD *)(v8 + 480);
    *(_OWORD *)(v19 + 64) = v32;
    *(_QWORD *)(v19 + 80) = v28;
    if ( v15 < 0 )
      goto LABEL_22;
    if ( v23[0] == 24 )
    {
      v20 = (__int64 *)v25;
      if ( v25 + 8 < v25 || v25 + 8 > MmUserProbeAddress )
        v20 = (__int64 *)MmUserProbeAddress;
      v21 = *v20;
      v31 = *v20;
    }
    else
    {
LABEL_22:
      v21 = 0LL;
    }
    if ( v11 != (unsigned __int8 *)v35 && v11 != v37 )
    {
      if ( *((_QWORD *)v11 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
    }
    return (unsigned __int8 *)v21;
  }
  return result;
}
