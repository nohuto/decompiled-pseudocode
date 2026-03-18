/*
 * XREFs of SfnTOUCHHITTESTING @ 0x1C022A6A0
 * Callers:
 *     <none>
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
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall SfnTOUCHHITTESTING(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  _BYTE v25[4]; // [rsp+30h] [rbp-348h] BYREF
  _DWORD v26[5]; // [rsp+34h] [rbp-344h] BYREF
  unsigned __int8 *v27; // [rsp+48h] [rbp-330h]
  unsigned __int64 v28; // [rsp+50h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-318h] BYREF
  __int128 v30; // [rsp+68h] [rbp-310h]
  __int64 v31; // [rsp+78h] [rbp-300h]
  __int128 v32; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v33; // [rsp+90h] [rbp-2E8h]
  __int64 v34; // [rsp+98h] [rbp-2E0h]
  __int128 v35; // [rsp+B8h] [rbp-2C0h]
  __int128 v36; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-2A0h]
  unsigned __int8 v38[88]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v39[512]; // [rsp+140h] [rbp-238h] BYREF

  memset(v38, 0, sizeof(v38));
  v28 = 0LL;
  v26[0] = 0;
  v36 = 0LL;
  v37 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  result = AllocCallbackMessage(88, 1u, 48LL, v39, 1, 0x200uLL);
  v14 = result;
  v27 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v32 = 0LL;
    v33 = 0LL;
    if ( v14 != v38 && v14 != v39 )
      PushW32ThreadLock((__int64)v14, &v32, (__int64)Win32FreePool);
    *((_QWORD *)v14 + 5) = v12;
    *((_DWORD *)v14 + 12) = a2;
    *((_QWORD *)v14 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v14, a4, 0x30u, (void **)v14 + 8) < 0 )
      goto LABEL_21;
    *((_QWORD *)v14 + 9) = a5;
    *((_QWORD *)v14 + 10) = a6;
    ThreadLock((__int64)a1, (__int64 *)&v36);
    v15 = *(_QWORD *)(v11 + 480);
    v35 = *(_OWORD *)(v15 + 64);
    v30 = v35;
    v31 = *(_QWORD *)(v15 + 80);
    *(_QWORD *)(v15 + 72) = v12;
    v16 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v16;
    v17 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v17;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v25);
    EtwTraceBeginCallback(115LL);
    *((_QWORD *)v14 + 2) = 0LL;
    v18 = KeUserModeCallback(115LL, v14, *(unsigned int *)v14, &v28, v26);
    EtwTraceEndCallback(115LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v25);
    ThreadUnlock1(v20, v19, v21);
    v22 = *(_QWORD *)(v11 + 480);
    *(_OWORD *)(v22 + 64) = v35;
    *(_QWORD *)(v22 + 80) = v31;
    if ( v18 < 0 )
      goto LABEL_21;
    if ( v26[0] == 24 )
    {
      v23 = (__int64 *)v28;
      if ( v28 + 8 < v28 || v28 + 8 > MmUserProbeAddress )
        v23 = (__int64 *)MmUserProbeAddress;
      v24 = *v23;
      v34 = *v23;
    }
    else
    {
LABEL_21:
      v24 = 0LL;
    }
    if ( v14 != v38 && v14 != v39 )
    {
      if ( *((_QWORD *)v14 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v32);
    }
    return (unsigned __int8 *)v24;
  }
  return result;
}
