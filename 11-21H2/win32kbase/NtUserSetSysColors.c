/*
 * XREFs of NtUserSetSysColors @ 0x1C00B8210
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     CheckAccessEx @ 0x1C002FB20 (CheckAccessEx.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     xxxSetSysColors @ 0x1C0062954 (xxxSetSysColors.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     CreateProfileUserName @ 0x1C00B8930 (CreateProfileUserName.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetSysColors(unsigned int a1, char *a2, char *a3, unsigned int a4)
{
  unsigned int v4; // r15d
  char *v5; // rbx
  size_t v7; // r14
  __int64 Pool2; // rsi
  __int64 v9; // rdi
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  struct tagKERNELHANDLETABLEENTRY *v17; // rbx
  struct tagTHREADINFO *v18; // rdx
  int v19; // eax
  PVOID v20; // rbx
  size_t v21; // rdx
  PVOID v22; // rbx
  size_t v23; // rdx
  unsigned __int64 i; // rcx
  char v25; // di
  unsigned __int64 j; // rcx
  char v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r14d
  __int64 v36; // rcx
  int v37; // [rsp+40h] [rbp-288h] BYREF
  _DWORD v38[6]; // [rsp+48h] [rbp-280h] BYREF
  int v39[2]; // [rsp+60h] [rbp-268h] BYREF
  void *v40; // [rsp+68h] [rbp-260h]
  void *v41; // [rsp+70h] [rbp-258h]
  __int128 v42; // [rsp+80h] [rbp-248h]
  __int128 v43; // [rsp+90h] [rbp-238h]
  __int64 v44; // [rsp+A8h] [rbp-220h] BYREF
  size_t v45; // [rsp+B0h] [rbp-218h]
  unsigned __int64 v46; // [rsp+B8h] [rbp-210h]
  __int64 v47; // [rsp+C0h] [rbp-208h] BYREF
  size_t v48; // [rsp+C8h] [rbp-200h]
  unsigned __int64 v49; // [rsp+D0h] [rbp-1F8h]
  __int128 v50; // [rsp+E0h] [rbp-1E8h]
  __int128 v51; // [rsp+F0h] [rbp-1D8h]
  __int128 v52; // [rsp+100h] [rbp-1C8h] BYREF
  __int64 v53; // [rsp+110h] [rbp-1B8h]
  __int128 v54; // [rsp+118h] [rbp-1B0h] BYREF
  __int64 v55; // [rsp+128h] [rbp-1A0h]
  __int128 v56; // [rsp+130h] [rbp-198h] BYREF
  __int64 v57; // [rsp+140h] [rbp-188h]
  PVOID BackTrace[20]; // [rsp+150h] [rbp-178h] BYREF
  PVOID v59[27]; // [rsp+1F0h] [rbp-D8h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = a1;
  Pool2 = 0LL;
  v40 = 0LL;
  v9 = 0LL;
  v41 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v39[0] = 0x2000;
  v39[1] = -1;
  v38[4] = 0;
  v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v17 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v17 + 2) = 0LL;
          v36 = *(_QWORD *)v17;
          if ( !*(_DWORD *)(*(_QWORD *)v17 + 8LL) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v15, v12);
            v36 = *(_QWORD *)v17;
          }
          HMUnlockObject(v36);
        }
        v5 = a3;
      }
    }
  }
  v18 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
    v19 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 8;
  else
    v19 = 0;
  if ( v19 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v39, 0) )
  {
    v34 = 0;
    UserSetLastError(5LL, (__int64)v18, v12, v13);
    goto LABEL_84;
  }
  if ( (_DWORD)v7 )
  {
    v7 *= 4LL;
    if ( v7 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v7] > MmUserProbeAddress || &a2[v7] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)v5) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v5[v7] > MmUserProbeAddress || &v5[v7] < v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v37 = 1919120213;
    v44 = 260LL;
    v20 = gpLeakTrackingAllocator;
    *(_QWORD *)&v50 = &v44;
    *((_QWORD *)&v50 + 1) = &v37;
    v42 = v50;
    v21 = v7;
    v45 = v7;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72637355) != 0x72637355 )
    {
LABEL_23:
      Pool2 = ExAllocatePool2(*(_QWORD *)v42 & 0xFFFFFFFFFFFFFFFCuLL | 1, v7);
      goto LABEL_24;
    }
    for ( i = 0LL; ; ++i )
    {
      v46 = i;
      if ( i >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_23;
      if ( *((_DWORD *)gpLeakTrackingAllocator + i) == 1919120213 )
        break;
    }
    v25 = 0;
    if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
    {
      v25 = 1;
      v21 = v7 + 16;
      v45 = v7 + 16;
    }
    Pool2 = ExAllocatePool2(*(_QWORD *)v42 & 0xFFFFFFFFFFFFFFFCuLL | 1, v21);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v25 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v20,
                                Pool2,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_24;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v20,
                                   Pool2,
                                   BackTrace) )
      {
LABEL_24:
        v40 = (void *)Pool2;
        if ( !Pool2 )
          ExRaiseStatus(-1073741801);
        memmove((void *)Pool2, a2, v7);
        v38[0] = 1986229077;
        v47 = 260LL;
        v22 = gpLeakTrackingAllocator;
        *(_QWORD *)&v51 = &v47;
        *((_QWORD *)&v51 + 1) = v38;
        v43 = v51;
        v23 = v7;
        v48 = v7;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76637355) != 0x76637355 )
        {
LABEL_26:
          v9 = ExAllocatePool2(*(_QWORD *)v43 & 0xFFFFFFFFFFFFFFFCuLL | 1, v7);
LABEL_27:
          v41 = (void *)v9;
          if ( !v9 )
            ExRaiseStatus(-1073741801);
          memmove((void *)v9, a3, v7);
          LODWORD(v7) = a1;
          v4 = a4;
          goto LABEL_69;
        }
        for ( j = 0LL; ; ++j )
        {
          v49 = j;
          if ( j >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_26;
          if ( *((_DWORD *)gpLeakTrackingAllocator + j) == 1986229077 )
            break;
        }
        v27 = 0;
        if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
        {
          v27 = 1;
          v23 = v7 + 16;
          v48 = v7 + 16;
        }
        v9 = ExAllocatePool2(*(_QWORD *)v43 & 0xFFFFFFFFFFFFFFFCuLL | 1, v23);
        if ( v9 )
        {
          memset(v59, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, v59, 0LL);
          if ( v27 && (unsigned __int64)(v9 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v22,
                                    v9,
                                    v59) )
            {
              v9 += 16LL;
              goto LABEL_27;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v22,
                                       v9,
                                       v59) )
          {
            goto LABEL_27;
          }
          ExFreePoolWithTag((PVOID)v9, 0);
        }
        v9 = 0LL;
        goto LABEL_27;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    Pool2 = 0LL;
    goto LABEL_24;
  }
LABEL_69:
  if ( qword_1C029BD10 )
    qword_1C029BD10(Pool2, &v56, Win32FreePool);
  if ( qword_1C029BD10 )
    qword_1C029BD10(v9, &v54, Win32FreePool);
  v28 = CreateProfileUserName(&v52);
  v34 = xxxSetSysColors(v29, v7, (char *)Pool2, (char *)v9, v4);
  if ( v28 && qword_1C029BE28 )
    qword_1C029BE28(&v52);
  if ( qword_1C029BD20 )
    qword_1C029BD20(&v54);
  if ( qword_1C029BD20 )
    qword_1C029BD20(&v56);
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  if ( v9 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v9);
LABEL_84:
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  return v34;
}
