/*
 * XREFs of CmOpenKey @ 0x1407CABA0
 * Callers:
 *     NtOpenKeyTransactedEx @ 0x14067F130 (NtOpenKeyTransactedEx.c)
 *     NtOpenKey @ 0x1406A5B90 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x1407CA940 (NtOpenKeyEx.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14090E160 (CmOpenKeyForBugCheckRecovery.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpFreeExtraParameter @ 0x1406D17F4 (CmpFreeExtraParameter.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  void *v22; // rax
  POBJECT_TYPE *v23; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v25; // rdx
  int v26; // ebx
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  _OWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v32; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE v40; // [rsp+60h] [rbp-1E8h]
  HANDLE Handle; // [rsp+68h] [rbp-1E0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-1D8h]
  __int128 v43; // [rsp+80h] [rbp-1C8h] BYREF
  HANDLE *v44; // [rsp+90h] [rbp-1B8h]
  __int64 v45; // [rsp+98h] [rbp-1B0h]
  __int128 v46; // [rsp+A0h] [rbp-1A8h]
  _OWORD v47[2]; // [rsp+B0h] [rbp-198h] BYREF
  _OWORD v48[19]; // [rsp+D0h] [rbp-178h] BYREF

  v44 = a1;
  v45 = a3;
  Handle = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  LODWORD(Object) = 0;
  memset(v47, 0, sizeof(v47));
  v42 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v47, 0x20000uLL);
  memset(v48, 0, 0x128uLL);
  LODWORD(v48[6]) = -1;
  *((_QWORD *)&v48[9] + 1) = &v48[9];
  *(_QWORD *)&v48[9] = &v48[9];
  *(_OWORD *)((char *)&v48[13] + 8) = 0LL;
  *(_OWORD *)((char *)&v48[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v48[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v48[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v48[17] + 8) = 0LL;
  HIDWORD(v48[1]) = a2 & 0x300;
  v10 = a2 & 0xFFFFFCFF;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v12, v11, v13) )
  {
    if ( (a4 & 0x1C) == a4 )
    {
      if ( a6 == 1 )
      {
        v17 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v17 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v17 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = *(_QWORD *)(a3 + 16);
        v46 = 0LL;
        if ( v18 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        v19 = *(_DWORD *)v18;
        LODWORD(v46) = v19;
        v20 = *(_QWORD *)(v18 + 8);
        *((_QWORD *)&v46 + 1) = v20;
        v43 = v46;
        if ( (_WORD)v19 )
        {
          if ( (v20 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v21 = v20 + (unsigned __int16)v19;
          if ( v21 > 0x7FFFFFFF0000LL || v21 < v20 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v43 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      v22 = *(void **)(a3 + 8);
      v40 = v22;
      if ( CmpTraceRoutine )
      {
        if ( v22 )
        {
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          Object = 0LL;
          if ( ObReferenceObjectByHandle(v40, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL) >= 0 )
          {
            v42 = *((_QWORD *)Object + 1);
            ObfDereferenceObject(Object);
          }
        }
      }
      *((_QWORD *)&v48[4] + 1) = a5;
      DWORD2(v48[1]) = a4;
      v23 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v26 = ObOpenObjectByNameEx(a3, v23, a6, 0LL, v10, v48, CurrentSilo, &Handle);
      v28 = v26 >= 0;
      if ( v26 >= 0 )
      {
        v28 = (unsigned __int64)Handle;
        *a1 = Handle;
      }
      if ( CmpTraceRoutine )
      {
        v34 = v42;
        LOBYTE(v34) = 11;
        CmpTraceRoutine(v34, v47, (unsigned int)v26, 0LL, v42, &v43);
      }
      if ( *((_QWORD *)&v48[5] + 1) )
      {
        CmpLockRegistry(v28, v25, v27);
        CmpDereferenceKeyControlBlock(*((ULONG_PTR *)&v48[5] + 1));
        CmpUnlockRegistry(v36, v35, v37, v38);
      }
      v29 = *(_OWORD **)&v48[9];
      v30 = **(_QWORD **)&v48[9];
      if ( *(_OWORD **)(*(_QWORD *)&v48[9] + 8LL) == &v48[9] && *(_QWORD *)(v30 + 8) == *(_QWORD *)&v48[9] )
      {
        *(_QWORD *)&v48[9] = **(_QWORD **)&v48[9];
        *(_QWORD *)(v30 + 8) = &v48[9];
        if ( v29 == &v48[9] )
        {
LABEL_29:
          CmpReleaseShutdownRundown(&v48[9], &v48[9], v27);
          return (unsigned int)v26;
        }
        while ( 1 )
        {
          CmpFreeExtraParameter(v29);
          v29 = *(_OWORD **)&v48[9];
          v32 = **(_QWORD **)&v48[9];
          if ( *(_OWORD **)(*(_QWORD *)&v48[9] + 8LL) != &v48[9] || *(_QWORD *)(v32 + 8) != *(_QWORD *)&v48[9] )
            break;
          *(_QWORD *)&v48[9] = **(_QWORD **)&v48[9];
          *(_QWORD *)(v32 + 8) = &v48[9];
          if ( v29 == &v48[9] )
            goto LABEL_29;
        }
      }
      __fastfail(3u);
    }
    CmpReleaseShutdownRundown(v15, v14, v16);
    return 3221225714LL;
  }
  else
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(v15) = 11;
      CmpTraceRoutine(v15, v47, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return 3221225865LL;
  }
}
