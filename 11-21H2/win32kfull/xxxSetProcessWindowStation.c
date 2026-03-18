/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C00EC4A0
 * Callers:
 *     EditionSetProcessWindowStationEntryPoint @ 0x1C00EC400 (EditionSetProcessWindowStationEntryPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01459BC (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE v5; // r13
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rdi
  int v10; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rsi
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  void *ProcessWin32WindowStation; // rbx
  int v16; // edx
  int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  BOOLEAN v20; // al
  int v21; // ecx
  unsigned int v22; // ecx
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  PVOID *v31; // rbx
  _QWORD *v32; // rcx
  PVOID *v33; // rdx
  ULONG v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  struct _OBJECT_HANDLE_INFORMATION HandleAttributes; // [rsp+48h] [rbp-19h] BYREF
  PVOID Object; // [rsp+50h] [rbp-11h] BYREF
  void *TargetHandle; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v45[3]; // [rsp+60h] [rbp-1h] BYREF
  __int128 v46; // [rsp+78h] [rbp+17h] BYREF
  __int64 v47; // [rsp+88h] [rbp+27h]
  PVOID v48; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  CurrentProcess = PsGetCurrentProcess(SourceHandle, a2);
  TargetHandle = 0LL;
  HandleAttributes = 0LL;
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, v5, &Object, &HandleAttributes);
  v12 = Object;
  v13 = v10;
  if ( v10 < 0 )
  {
    v34 = RtlNtStatusToDosError(v10);
    UserSetLastError(v34, v35);
    return v13;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87LL, v11);
    ObfDereferenceObject(v12);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v14 = *(_QWORD **)(ProcessWin32Process + 664);
    if ( v14 )
    {
      if ( v14 != Object )
      {
        v25 = v14 + 14;
        v26 = v14[14];
        if ( v26 && *(_QWORD *)(*(_QWORD *)(v26 + 16) + 424LL) == ProcessWin32Process )
        {
          if ( a3 )
          {
            HMAssignmentUnlock(v25);
          }
          else
          {
            v45[2] = 0LL;
            v46 = 0LL;
            v47 = 0LL;
            PushW32ThreadLock((__int64)Object, &v46, UserDereferenceObject);
            v36 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 112LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v45[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v45;
            v45[1] = v36;
            HMLockObject(v36);
            xxxDisownClipboard(*(struct tagWND **)(*(_QWORD *)(ProcessWin32Process + 664) + 112LL));
            ThreadUnlock1(v39, v38, v40);
            v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(v41 + 16) = v46;
          }
        }
        v27 = *(_QWORD **)(ProcessWin32Process + 664);
        v28 = v27[12];
        if ( v28 && *(_QWORD *)(*(_QWORD *)(v28 + 16) + 424LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v27 + 12);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 664) + 80LL) = 0LL;
          v27 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v29 = v27[10];
        if ( v29 && *(_QWORD *)(v29 + 424) == ProcessWin32Process )
        {
          v27[10] = 0LL;
          v27 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v30 = v27[13];
        if ( v30 && *(_QWORD *)(*(_QWORD *)(v30 + 16) + 424LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v27 + 13);
          v27 = *(_QWORD **)(ProcessWin32Process + 664);
        }
        v31 = (PVOID *)(v27 + 19);
        while ( 1 )
        {
          v32 = *v31;
          if ( !*v31 )
            break;
          v33 = (PVOID *)(v32 + 30);
          if ( *(_QWORD *)(v32[2] + 424LL) == ProcessWin32Process )
          {
            v48 = *v31;
            *v31 = *v33;
            *v33 = 0LL;
            *((_DWORD *)v48 + 80) &= ~0x800000u;
            HMAssignmentUnlock(&v48);
          }
          else
          {
            v31 = (PVOID *)(v32 + 30);
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 672) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v12);
      return 3221225495LL;
    }
    v24 = *(_QWORD *)(ProcessWin32Process + 672);
    if ( v24 )
      SetHandleFlag(v24, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 664, v12);
  ObfDereferenceObject(v12);
  *(_QWORD *)(ProcessWin32Process + 672) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    v48 = 0LL;
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v5, &v48, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v12 != v48 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v48);
    }
  }
  if ( !PsGetProcessWin32WindowStation(CurrentProcess)
    && ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) >= 0 )
  {
    PsSetProcessWindowStation(CurrentProcess, TargetHandle);
  }
  v16 = *(_DWORD *)(ProcessWin32Process + 12);
  *(_DWORD *)(ProcessWin32Process + 680) = HandleAttributes.GrantedAccess;
  v17 = v16;
  v18 = v16 & 0xFFFBFFFF;
  v19 = v17 | 0x40000;
  if ( (v12[16] & 4) == 0 )
    v18 = v19;
  *(_DWORD *)(ProcessWin32Process + 12) = v18;
  v20 = RtlAreAllAccessesGranted(HandleAttributes.GrantedAccess, 0x200u);
  v21 = *(_DWORD *)(ProcessWin32Process + 12);
  if ( v20 )
    v22 = v21 | 0x10;
  else
    v22 = v21 & 0xFFFFFFEF;
  *(_DWORD *)(ProcessWin32Process + 12) = v22;
  return 0LL;
}
