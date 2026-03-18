/*
 * XREFs of xxxCsDdeInitialize @ 0x1C00AC42C
 * Callers:
 *     NtUserDdeInitialize @ 0x1C00AC330 (NtUserDdeInitialize.c)
 * Callees:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C00AC6D0 (xxxChangeMonitorFlags.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00CA358 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // esi
  __int64 Window; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  struct tagWND **v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE v32[16]; // [rsp+98h] [rbp-51h] BYREF
  _QWORD v33[2]; // [rsp+A8h] [rbp-41h] BYREF
  _QWORD v34[3]; // [rsp+B8h] [rbp-31h] BYREF
  _QWORD v35[3]; // [rsp+D0h] [rbp-19h] BYREF
  _QWORD v36[10]; // [rsp+E8h] [rbp-1h] BYREF

  v5 = 0LL;
  v36[2] = 0LL;
  v35[2] = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 16399LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_7;
  v10 = PsGetCurrentProcessWin32Process(v9);
  if ( v10 )
    v10 &= -(__int64)(*(_QWORD *)v10 != 0LL);
  v11 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v10) )
LABEL_7:
    v11 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v34, 0LL);
  v34[2] = 0LL;
  Window = xxxCreateWindowEx(
             0,
             *(unsigned __int16 *)(gpsi + 884LL),
             *(unsigned __int16 *)(gpsi + 884LL),
             0LL,
             0xC0000000,
             0,
             0,
             0,
             0,
             0LL,
             (__int64)v34,
             hModuleWin,
             0LL,
             0,
             0x30Au,
             v11,
             0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v34);
  if ( !Window )
    return 16399LL;
  LOBYTE(v13) = 9;
  v14 = HMAllocObject(gptiCurrent, 0LL, v13);
  v15 = v14;
  if ( !v14 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v16 = (struct tagWND **)(v14 + 48);
  v33[1] = Window;
  v33[0] = v14 + 48;
  HMAssignmentLock(v33, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v32);
  xxxSetWindowLongPtr(*v16, 0, *(_QWORD *)v15, 0, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v32, v17, v18);
  *(_QWORD *)(v15 + 56) = a5;
  *(_QWORD *)(v15 + 24) = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  *(_DWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(gptiCurrent + 624LL);
  v19 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 624LL) = v15;
  v35[0] = v19;
  *(_QWORD *)(gptiCurrent + 416LL) = v35;
  v35[1] = v15;
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (PKDPC)v15;
  HMLockObject(v15);
  v36[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v36;
  v36[1] = Window;
  HMLockObject(Window);
  xxxChangeMonitorFlags(v15, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v15) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v16);
    if ( ThreadUnlock1(v27, v26, v28) )
      xxxDestroyWindow(Window);
    ThreadUnlock1(v30, v29, v31);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v15;
  if ( *v16 )
    v5 = *(_QWORD *)*v16;
  *a2 = v5;
  ThreadUnlock1(a1, v20, v21);
  ThreadUnlock1(v23, v22, v24);
  *a3 = MonitorFlags;
  return 0LL;
}
