/*
 * XREFs of xxxClientLoadMenu @ 0x1C00A3310
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxLoadSysMenu @ 0x1C00BC940 (xxxLoadSysMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0240CA4 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // r9
  unsigned __int8 *v5; // rdi
  unsigned __int16 v6; // ax
  int v7; // ebx
  __int64 *v8; // rcx
  ULONG64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int8 *result; // rax
  _BYTE v12[4]; // [rsp+30h] [rbp-298h] BYREF
  int v13; // [rsp+34h] [rbp-294h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-290h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-288h] BYREF
  __int128 v16; // [rsp+48h] [rbp-280h] BYREF
  __int64 v17; // [rsp+58h] [rbp-270h]
  __int64 v18; // [rsp+60h] [rbp-268h]
  _DWORD v19[16]; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int8 v20[512]; // [rsp+B0h] [rbp-218h] BYREF

  memset(v19, 0, sizeof(v19));
  v15 = 0LL;
  v13 = 0;
  v4 = a2[1];
  if ( (_WORD)v4 )
  {
    result = AllocCallbackMessage(64, (_WORD)v4 != 0, v4 & -(__int64)((_WORD)v4 != 0), v20, 1, 0x200uLL);
    v5 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v5 = (unsigned __int8 *)v19;
    RegionSize = (ULONG_PTR)v19;
    v19[0] = 64;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v16 = 0LL;
  v17 = 0LL;
  if ( v5 != (unsigned __int8 *)v19 && v5 != v20 )
    PushW32ThreadLock((__int64)v5, &v16, (__int64)Win32FreePool);
  *((_QWORD *)v5 + 5) = a1;
  *((_WORD *)v5 + 24) = *a2;
  v6 = a2[1];
  *((_WORD *)v5 + 25) = v6;
  if ( v6 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v5, *((_QWORD *)a2 + 1), (unsigned int)*a2 + 2, (void **)v5 + 7) < 0 )
      goto LABEL_19;
  }
  else
  {
    *((_QWORD *)v5 + 7) = *((_QWORD *)a2 + 1);
  }
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v7 = KeUserModeCallback(76LL, v5, *(unsigned int *)v5, &v15, &v13);
  EtwTraceEndCallback(76LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  if ( v7 >= 0 && v13 == 24 )
  {
    v8 = (__int64 *)v15;
    v9 = v15 + 8;
    if ( v15 + 8 < v15 || v9 > MmUserProbeAddress )
      v8 = (__int64 *)MmUserProbeAddress;
    v18 = *v8;
    LOBYTE(v9) = 2;
    v10 = HMValidateHandleNoRip(v18, v9);
    goto LABEL_12;
  }
LABEL_19:
  v10 = 0LL;
LABEL_12:
  if ( v5 != (unsigned __int8 *)v19 && v5 != v20 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
  }
  return (unsigned __int8 *)v10;
}
