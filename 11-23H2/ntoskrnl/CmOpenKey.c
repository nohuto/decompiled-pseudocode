/*
 * XREFs of CmOpenKey @ 0x1406E2A90
 * Callers:
 *     NtOpenKeyEx @ 0x1407ABEF0 (NtOpenKeyEx.c)
 *     NtOpenKey @ 0x1407AC640 (NtOpenKey.c)
 *     NtOpenKeyTransactedEx @ 0x1407D37D0 (NtOpenKeyTransactedEx.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D350 (CmOpenKeyForBugCheckRecovery.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14022E310 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeExtraParameter @ 0x1407E6FF0 (CmpFreeExtraParameter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int16 v19; // ax
  void *v20; // rax
  POBJECT_TYPE *v21; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v23; // rdx
  int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  _OWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v31; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE v39; // [rsp+60h] [rbp-1E8h]
  HANDLE Handle; // [rsp+68h] [rbp-1E0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-1D8h]
  __m128i v42; // [rsp+80h] [rbp-1C8h]
  HANDLE *v43; // [rsp+90h] [rbp-1B8h]
  __int64 v44; // [rsp+98h] [rbp-1B0h]
  __m128i v45; // [rsp+A0h] [rbp-1A8h]
  _OWORD v46[2]; // [rsp+B0h] [rbp-198h] BYREF
  _OWORD v47[19]; // [rsp+D0h] [rbp-178h] BYREF

  v43 = a1;
  v44 = a3;
  Handle = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  LODWORD(Object) = 0;
  memset(v46, 0, sizeof(v46));
  v41 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v46, 0x20000LL);
  memset(v47, 0, 0x128uLL);
  LODWORD(v47[6]) = -1;
  *((_QWORD *)&v47[9] + 1) = &v47[9];
  *(_QWORD *)&v47[9] = &v47[9];
  *(_OWORD *)((char *)&v47[13] + 8) = 0LL;
  *(_OWORD *)((char *)&v47[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v47[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v47[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v47[17] + 8) = 0LL;
  HIDWORD(v47[1]) = a2 & 0x300;
  v10 = a2 & 0xFFFFFCFF;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v12, v11, v13) )
  {
    if ( (a4 & 0x1C) == a4 )
    {
      if ( a6 == 1 )
      {
        v16 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v16 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v16 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = *(_QWORD *)(a3 + 16);
        v45 = 0LL;
        if ( v17 >= 0x7FFFFFFF0000LL )
          v17 = 0x7FFFFFFF0000LL;
        v45.m128i_i32[0] = *(_DWORD *)v17;
        v18 = *(_QWORD *)(v17 + 8);
        v45.m128i_i64[1] = v18;
        v42 = v45;
        v19 = _mm_cvtsi128_si32(v45);
        if ( v19 )
        {
          if ( (v18 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v19 + v18 > 0x7FFFFFFF0000LL || v19 + v18 < v18 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v42 = *(__m128i *)*(_QWORD *)(a3 + 16);
      }
      v20 = *(void **)(a3 + 8);
      v39 = v20;
      if ( CmpTraceRoutine )
      {
        if ( v20 )
        {
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          Object = 0LL;
          if ( ObReferenceObjectByHandle(v39, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL) >= 0 )
          {
            v41 = *((_QWORD *)Object + 1);
            ObfDereferenceObject(Object);
          }
        }
      }
      *((_QWORD *)&v47[4] + 1) = a5;
      DWORD2(v47[1]) = a4;
      v21 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v24 = ObOpenObjectByNameEx(a3, v21, a6, 0LL, v10, v47, CurrentSilo, &Handle);
      v27 = v24 >= 0;
      if ( v24 >= 0 )
      {
        v27 = (unsigned __int64)Handle;
        *a1 = Handle;
      }
      if ( CmpTraceRoutine )
      {
        v33 = v41;
        LOBYTE(v33) = 11;
        CmpTraceRoutine(v33, v46, (unsigned int)v24, 0LL);
      }
      if ( *((_QWORD *)&v47[5] + 1) )
      {
        CmpLockRegistry(v27, v23, v25, v26);
        CmpDereferenceKeyControlBlock(*((ULONG_PTR *)&v47[5] + 1));
        CmpUnlockRegistry(v35, v34, v36, v37);
      }
      v28 = *(_OWORD **)&v47[9];
      v29 = **(_QWORD **)&v47[9];
      if ( *(_OWORD **)(*(_QWORD *)&v47[9] + 8LL) == &v47[9] && *(_QWORD *)(v29 + 8) == *(_QWORD *)&v47[9] )
      {
        *(_QWORD *)&v47[9] = **(_QWORD **)&v47[9];
        *(_QWORD *)(v29 + 8) = &v47[9];
        if ( v28 == &v47[9] )
        {
LABEL_29:
          CmpReleaseShutdownRundown(&v47[9], &v47[9]);
          return (unsigned int)v24;
        }
        while ( 1 )
        {
          CmpFreeExtraParameter(v28);
          v28 = *(_OWORD **)&v47[9];
          v31 = **(_QWORD **)&v47[9];
          if ( *(_OWORD **)(*(_QWORD *)&v47[9] + 8LL) != &v47[9] || *(_QWORD *)(v31 + 8) != *(_QWORD *)&v47[9] )
            break;
          *(_QWORD *)&v47[9] = **(_QWORD **)&v47[9];
          *(_QWORD *)(v31 + 8) = &v47[9];
          if ( v28 == &v47[9] )
            goto LABEL_29;
        }
      }
      __fastfail(3u);
    }
    CmpReleaseShutdownRundown(v15, v14);
    return 3221225714LL;
  }
  else
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(v15) = 11;
      CmpTraceRoutine(v15, v46, 3221225865LL, 0LL);
    }
    return 3221225865LL;
  }
}
