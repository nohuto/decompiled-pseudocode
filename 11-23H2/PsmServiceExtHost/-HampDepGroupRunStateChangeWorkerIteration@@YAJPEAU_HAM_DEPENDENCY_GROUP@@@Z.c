/*
 * XREFs of ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B798
 * Callers:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B5E4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C984 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18003B6C8 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18003BA64 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BAAC (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB3C (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BC74 (-HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003BCD0 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BF50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003BFD8 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003C06C (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18003C1F8 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18003C33C (-HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HO.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007C7EC (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 */

__int64 __fastcall HampDepGroupRunStateChangeWorkerIteration(struct _HAM_DEPENDENCY_GROUP *a1)
{
  __int64 v2; // r14
  struct _HAM_HOST_DEPENDENCY *i; // rax
  struct _HAM_HOST_DEPENDENCY *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // rax
  unsigned int v12; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v17; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[16]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v20; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+B0h] [rbp-50h] BYREF
  void *v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C8h] [rbp-38h]
  int v26; // [rsp+CCh] [rbp-34h]
  unsigned int *v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+DCh] [rbp-24h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+ECh] [rbp-14h]
  __int64 *v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]

  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v20 = &unk_1800C228D;
    UserData.Reserved = 2;
    v21 = 30;
    v22 = 1;
    v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( !HampDepGroupIsCurrentThreadWorker(a1) )
    __int2c();
  HampDepGroupLockAndReferenceMembers(a1, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v16);
  v2 = *((_QWORD *)a1 + 14);
  HampDepGroupPopulateIndependentHostList(
    (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v16,
    (struct _HAM_DEP_HOST_STACK *)v18);
  HampDepGroupReleaseLockExclusive(a1);
  HampDepGroupEvaluateDependencies(a1, (unsigned __int64)v18);
  for ( i = HampDepGroupGetFirstDependency(a1); ; i = HampDepGroupGetNextDependency(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    if ( (*((_BYTE *)i + 32) & 7) == 5 )
      HampHostQueueTerminateEx(*((_QWORD *)i + 7), *((_DWORD *)i + 21), *((_DWORD *)i + 20), 0LL, 2, 0, 0LL, &v13);
  }
  HampDepGroupProcessDonations(a1);
  HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v16);
  LOBYTE(v5) = 3;
  HampDepGroupProcessActivityActionForGroup(a1, v5);
  LOBYTE(v6) = 2;
  HampDepGroupProcessActivityActionForGroup(a1, v6);
  LOBYTE(v7) = 1;
  v9 = HampDepGroupProcessActivityActionForGroup(a1, v7);
  if ( v9 < 0 )
  {
    LOBYTE(v8) = 4;
    HampDepGroupProcessActivityActionForGroup(a1, v8);
  }
  else
  {
    v9 = 0;
  }
  HampDepGroupAcquireLockExclusive(a1);
  *((_QWORD *)a1 + 13) = v2;
  HampDepGroupReleaseLockExclusive(a1);
  HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v16);
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v10 = *(_QWORD *)a1;
    v35 = 0;
    v32 = 0;
    v29 = 0;
    *(_QWORD *)&EventDescriptor.Id = v10;
    v33 = &v15;
    p_EventDescriptor = &EventDescriptor;
    v27 = &v12;
    *(_DWORD *)&v17.Level = 516;
    v23.Ptr = (ULONGLONG)off_1800DB220;
    v34 = 8;
    v31 = 8;
    v17.Keyword = 8LL;
    v15 = v2;
    v12 = v9;
    v28 = 4;
    *(_DWORD *)&v17.Id = 184549376;
    v23.Size = *(unsigned __int16 *)off_1800DB220;
    v24 = &unk_1800C2249;
    v23.Reserved = 2;
    v25 = 56;
    v26 = 1;
    v13 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &v17, 0LL, 0LL, 5u, &v23);
  }
  return (unsigned int)v9;
}
