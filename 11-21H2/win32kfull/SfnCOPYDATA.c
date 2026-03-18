/*
 * XREFs of SfnCOPYDATA @ 0x1C0106080
 * Callers:
 *     xxxSendShutdownData @ 0x1C022D134 (xxxSendShutdownData.c)
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

__int64 __fastcall SfnCOPYDATA(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned __int8 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  _BYTE v25[4]; // [rsp+30h] [rbp-368h] BYREF
  int v26; // [rsp+34h] [rbp-364h] BYREF
  unsigned __int8 *v27; // [rsp+38h] [rbp-360h]
  int v28; // [rsp+40h] [rbp-358h]
  unsigned __int64 v29; // [rsp+58h] [rbp-340h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int128 v31; // [rsp+70h] [rbp-328h]
  __int64 v32; // [rsp+80h] [rbp-318h]
  __int128 v33; // [rsp+88h] [rbp-310h] BYREF
  __int64 v34; // [rsp+98h] [rbp-300h]
  __int64 v35; // [rsp+A0h] [rbp-2F8h]
  __int128 v36; // [rsp+C0h] [rbp-2D8h]
  __int128 v37; // [rsp+D0h] [rbp-2C8h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-2B8h]
  _DWORD v39[28]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v40[512]; // [rsp+160h] [rbp-238h] BYREF

  v28 = a2;
  memset(v39, 0, sizeof(v39));
  v29 = 0LL;
  v26 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = ThreadWin32Thread;
  if ( a1 )
    v11 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v11 = 0LL;
  if ( a4 )
  {
    v12 = *(_DWORD *)(a4 + 8);
    v13 = AllocCallbackMessage(112, 1u, v12, v40, 1, 0x200uLL);
    v27 = v13;
    if ( !v13 )
      return 0LL;
  }
  else
  {
    v12 = 0;
    v13 = (unsigned __int8 *)v39;
    v27 = (unsigned __int8 *)v39;
    memset(&v39[1], 0, 0x6CuLL);
    v39[0] = 112;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v33 = 0LL;
  v34 = 0LL;
  if ( v13 != (unsigned __int8 *)v39 && v13 != v40 )
    PushW32ThreadLock((__int64)v13, &v33, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 5) = v11;
  *((_DWORD *)v13 + 12) = v28;
  *((_QWORD *)v13 + 7) = a3;
  if ( a4 )
  {
    *((_DWORD *)v13 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v13 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v13 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v13, *(_QWORD *)(a4 + 16), v12, (void **)v13 + 11) < 0 )
      goto LABEL_29;
  }
  else
  {
    *((_DWORD *)v13 + 16) = 0;
  }
  *((_QWORD *)v13 + 12) = a5;
  *((_QWORD *)v13 + 13) = a6;
  ThreadLock((__int64)a1, (__int64 *)&v37);
  v14 = *(_QWORD *)(v10 + 480);
  v36 = *(_OWORD *)(v14 + 64);
  v31 = v36;
  v32 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v11;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 64LL) = v15;
  if ( a1 )
    v16 = *(_QWORD *)(a1[5] + 224);
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 80LL) = v16;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v25);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v17 = KeUserModeCallback(0LL, v13, *(unsigned int *)v13, &v29, &v26);
  EtwTraceEndCallback(0LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v25);
  ThreadUnlock1(v19, v18, v20);
  v21 = *(_QWORD *)(v10 + 480);
  *(_OWORD *)(v21 + 64) = v36;
  *(_QWORD *)(v21 + 80) = v32;
  if ( v17 >= 0 && v26 == 24 )
  {
    v22 = (__int64 *)v29;
    if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
      v22 = (__int64 *)MmUserProbeAddress;
    v23 = *v22;
    v35 = *v22;
    goto LABEL_22;
  }
LABEL_29:
  v23 = 0LL;
LABEL_22:
  if ( v13 != (unsigned __int8 *)v39 && v13 != v40 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v33);
  }
  return v23;
}
