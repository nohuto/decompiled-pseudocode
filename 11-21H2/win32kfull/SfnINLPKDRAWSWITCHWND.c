/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C0225AF0
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
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     _WindowFromDC @ 0x1C00EE034 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(_QWORD *a1, int a2, HDC a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int8 *result; // rax
  const struct tagWND *v17; // rax
  HDC DC; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v22; // rax
  __int128 v23; // xmm6
  __int64 v24; // xmm7_8
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // rdi
  _BYTE v34[4]; // [rsp+30h] [rbp-388h] BYREF
  int v35; // [rsp+34h] [rbp-384h] BYREF
  int v36; // [rsp+38h] [rbp-380h]
  int v37; // [rsp+3Ch] [rbp-37Ch]
  unsigned __int8 *v38; // [rsp+50h] [rbp-368h]
  unsigned __int64 v39; // [rsp+58h] [rbp-360h] BYREF
  __int64 v40; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-348h] BYREF
  __int128 v42; // [rsp+78h] [rbp-340h]
  __int64 v43; // [rsp+88h] [rbp-330h]
  __int128 v44; // [rsp+90h] [rbp-328h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-318h]
  __int64 v46; // [rsp+A8h] [rbp-310h]
  __int128 v47; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-2E0h]
  unsigned __int8 v49[112]; // [rsp+E0h] [rbp-2D8h] BYREF
  unsigned __int8 v50[512]; // [rsp+150h] [rbp-268h] BYREF

  memset(v49, 0, 0x68uLL);
  v10 = v49;
  v39 = 0LL;
  v35 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 16);
  v15 = v14 + 2;
  if ( (unsigned int)v15 < v14 )
    goto LABEL_24;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_24;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v15, v50, 1, 0x200uLL);
  v10 = result;
  v38 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v44 = 0LL;
  v45 = 0LL;
  if ( v10 != v49 && v10 != v50 )
    PushW32ThreadLock((__int64)v10, &v44, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(_QWORD *)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) < 0 )
    goto LABEL_24;
  v17 = WindowFromDC(a3);
  DC = (HDC)_GetDC(v17);
  v37 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 4640LL));
  v36 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4628LL));
  DPIServerInfo = GetDPIServerInfo(v20, v19);
  v40 = GreSelectFontInternal(DC, *(_QWORD *)(DPIServerInfo + 8), 1);
  *((_QWORD *)v10 + 5) = v13;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = DC;
  *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  ThreadLock((__int64)a1, (__int64 *)&v47);
  v22 = *(_QWORD *)(v12 + 480);
  v23 = *(_OWORD *)(v22 + 64);
  v42 = v23;
  v24 = *(_QWORD *)(v22 + 80);
  v43 = v24;
  *(_QWORD *)(v22 + 72) = v13;
  v25 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v25;
  v26 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v26;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  EtwTraceBeginCallback(97LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v27 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, &v39, &v35);
  EtwTraceEndCallback(97LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v31 + 64) = v23;
  *(_QWORD *)(v31 + 80) = v24;
  GreSelectFontInternal(DC, v40, 1);
  GreSetBkColor(DC, v36);
  GreSetTextColor(DC, v37);
  _ReleaseDC(DC);
  if ( v27 < 0 )
    goto LABEL_24;
  if ( v35 == 24 )
  {
    v32 = (__int64 *)v39;
    if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v46 = *v32;
  }
  else
  {
LABEL_24:
    v33 = 0LL;
  }
  if ( v10 != v49 && v10 != v50 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v44);
  }
  return (unsigned __int8 *)v33;
}
