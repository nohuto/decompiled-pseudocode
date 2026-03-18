/*
 * XREFs of PopDirectedDripsDiagTraceNotifyDevices @ 0x1405DD8E4
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x14098C2AC (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x14098C45C (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall PopDirectedDripsDiagTraceNotifyDevices(unsigned __int8 a1, int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  int v4; // esi
  _BYTE *v5; // rdi
  PVOID *v6; // rdx
  _BYTE *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  PVOID *v10; // r8
  PVOID *v11; // r9
  unsigned __int64 v12; // r11
  unsigned int v13; // r10d
  char *v14; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v18; // edx
  int v19; // r9d
  REGHANDLE v20; // rbx
  int v22; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  int *v24; // [rsp+68h] [rbp-9h]
  __int64 v25; // [rsp+70h] [rbp-1h]
  int *v26; // [rsp+78h] [rbp+7h]
  __int64 v27; // [rsp+80h] [rbp+Fh]
  __int64 *v28; // [rsp+88h] [rbp+17h]
  __int64 v29; // [rsp+90h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v31; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+E8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v32 = a3;
  v31 = a2;
  v4 = a1;
  if ( a2 >= 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    v5 = (_BYTE *)MEMORY[0xFFFFF78000000008];
    v6 = (PVOID *)PopDirectedDripsDiagSessionContext;
    if ( PopDirectedDripsDiagSessionContext != &PopDirectedDripsDiagSessionContext )
    {
      do
      {
        if ( (_BYTE)v4 )
        {
          v7 = v6[6];
          v8 = 7LL;
          v6[6] = 0LL;
          v9 = 10LL;
        }
        else
        {
          v7 = v6[15];
          v8 = 16LL;
          v6[15] = 0LL;
          v9 = 19LL;
        }
        v10 = &v6[v9];
        v11 = &v6[v8];
        if ( *((_DWORD *)v6 + 9) == dword_140C1CD88 && v7 && ((_DWORD)v6[5] & 0x100) == 0 )
        {
          v12 = v5 - v7;
          v13 = 0;
          v14 = (char *)((char *)PopFxAccountingBucketLimits - (char *)v10);
          do
          {
            if ( v12 >= *(_QWORD *)&v14[(_QWORD)v10] && v12 < PopFxAccountingBucketLimits[v13 + 1] )
            {
              ++*(_DWORD *)v11;
              *v10 = (char *)*v10 + v12;
            }
            ++v13;
            v11 = (PVOID *)((char *)v11 + 4);
            ++v10;
          }
          while ( v13 < 5 );
          if ( (_BYTE)v4 )
            v6[15] = v5;
        }
        v6 = (PVOID *)*v6;
      }
      while ( v6 != &PopDirectedDripsDiagSessionContext );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)&PopDirectedDripsDiagLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    v18 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&PopDirectedDripsDiagLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v18;
      p_Process += 96LL;
      if ( v18 >= 6 )
        goto LABEL_28;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_28:
      LODWORD(v3) = *((_DWORD *)&CurrentThread->0 + 1);
      if ( ((unsigned int)v3 & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PopDirectedDripsDiagLock, SessionId, 0LL);
      _enable();
      goto LABEL_36;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v19 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    LOBYTE(v3) = *(_BYTE *)(p_Process + 16);
    CurrentThread->AbEntrySummary |= 1 << (char)v3;
    _enable();
    if ( v19 )
      LOBYTE(v3) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&PopDirectedDripsDiagLock, v19);
  }
LABEL_36:
  if ( PopDiagHandleRegistered )
  {
    v20 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES);
    if ( (_BYTE)v3 )
    {
      v22 = v4;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      v24 = &v22;
      v25 = 4LL;
      v26 = &v31;
      v27 = 4LL;
      v28 = &v32;
      v29 = 8LL;
      LOBYTE(v3) = EtwWriteEx(v20, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
