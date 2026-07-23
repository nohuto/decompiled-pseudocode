/*
 * XREFs of CmCreateKey @ 0x140692410
 * Callers:
 *     NtCreateKeyTransacted @ 0x140692240 (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x1406923A0 (NtCreateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     PsGetCurrentSilo @ 0x14022E310 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14029788C (CmpAllocateTransientPoolWithQuota.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     CmpFreeExtraParameter @ 0x1407E6FF0 (CmpFreeExtraParameter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmCreateKey(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __m128i *a5,
        unsigned int a6,
        _DWORD *a7,
        __int64 a8)
{
  HANDLE *v10; // r14
  unsigned int v11; // r12d
  char v12; // al
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  char v16; // si
  unsigned __int8 PreviousMode; // si
  size_t v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int16 v21; // ax
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  struct _PRIVILEGE_SET *v23; // r14
  int v24; // ebx
  void *v25; // rax
  POBJECT_TYPE *v26; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  _OWORD *v28; // rax
  __int64 v29; // rcx
  KPROCESSOR_MODE v31; // r9
  ULONG_PTR v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-258h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-250h]
  char v40; // [rsp+40h] [rbp-238h]
  HANDLE Handle; // [rsp+48h] [rbp-230h] BYREF
  unsigned int v42; // [rsp+50h] [rbp-228h]
  PVOID Object; // [rsp+58h] [rbp-220h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-218h]
  size_t Size; // [rsp+68h] [rbp-210h]
  __m128i v46; // [rsp+70h] [rbp-208h] BYREF
  ULONG_PTR v47; // [rsp+80h] [rbp-1F8h]
  HANDLE *v48; // [rsp+88h] [rbp-1F0h]
  __m128i v49; // [rsp+90h] [rbp-1E8h]
  __m128i v50; // [rsp+A0h] [rbp-1D8h]
  void *Src; // [rsp+B0h] [rbp-1C8h]
  HANDLE *v52; // [rsp+B8h] [rbp-1C0h]
  ULONG_PTR v53; // [rsp+C0h] [rbp-1B8h]
  _DWORD *v54; // [rsp+C8h] [rbp-1B0h]
  __m128i v55; // [rsp+D0h] [rbp-1A8h]
  _OWORD v56[19]; // [rsp+E0h] [rbp-198h] BYREF
  _OWORD v57[2]; // [rsp+210h] [rbp-68h] BYREF

  v10 = a1;
  v48 = a1;
  Size = (size_t)a5;
  v52 = a1;
  v53 = a3;
  v54 = a7;
  Handle = 0LL;
  v46 = 0LL;
  v49 = 0LL;
  Privileges = 0LL;
  LODWORD(Object) = 0;
  memset(v57, 0, sizeof(v57));
  v47 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v57, 0x20000LL);
  memset(v56, 0, 0x128uLL);
  LODWORD(v56[6]) = -1;
  *((_QWORD *)&v56[9] + 1) = &v56[9];
  *(_QWORD *)&v56[9] = &v56[9];
  memset((char *)&v56[13] + 8, 0, 0x50uLL);
  HIDWORD(v56[1]) = a2 & 0x300;
  v11 = a2 & 0xFFFFFCFF;
  v42 = v11;
  v12 = CmpAcquireShutdownRundown();
  v16 = v12;
  v40 = v12;
  if ( v12 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( a5 )
      {
        v50 = 0LL;
        v18 = 0x7FFFFFFF0000LL;
        if ( Size < 0x7FFFFFFF0000LL )
          v18 = Size;
        v50.m128i_i32[0] = *(_DWORD *)v18;
        v14 = *(_QWORD *)(v18 + 8);
        Src = (void *)v14;
        v50.m128i_i64[1] = v14;
        v49 = v50;
        v13 = (unsigned int)_mm_cvtsi128_si32(v50);
        if ( (_WORD)v13 )
        {
          if ( (v14 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = (unsigned __int16)v13 + v14;
          v18 = v15;
          if ( v15 > 0x7FFFFFFF0000LL || v15 < v14 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( (v50.m128i_i8[0] & 1) != 0 )
        {
          v24 = -1073741811;
          v16 = v12;
          goto LABEL_45;
        }
        if ( (_WORD)v13 )
        {
          Size = (unsigned __int16)v13;
          TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(
                                                              v18,
                                                              (unsigned __int16)v13,
                                                              2019773763LL);
          Privileges = TransientPoolWithQuota;
          if ( !TransientPoolWithQuota )
          {
            v24 = -1073741670;
            v16 = v40;
            goto LABEL_45;
          }
          v23 = TransientPoolWithQuota;
          memmove(TransientPoolWithQuota, Src, Size);
          v49.m128i_i64[1] = (__int64)v23;
          v10 = v48;
        }
      }
      v19 = (__int64)v10;
      if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v19 = 0LL;
      if ( a7 )
      {
        v20 = (__int64)a7;
        if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
          v20 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v20 = *(_DWORD *)v20;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = *(_QWORD *)(a3 + 16);
      v48 = (HANDLE *)v18;
      v55 = 0LL;
      if ( v18 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      v55.m128i_i32[0] = *(_DWORD *)v18;
      v13 = *(_QWORD *)(v18 + 8);
      v55.m128i_i64[1] = v13;
      v46 = v55;
      v21 = _mm_cvtsi128_si32(v55);
      if ( v21 )
      {
        if ( (v13 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = v21 + v13;
        v18 = v14;
        if ( v14 > 0x7FFFFFFF0000LL || v14 < v13 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v46.m128i_i8[0] & 1) != 0 )
      {
        v24 = -1073741811;
        v16 = v40;
        goto LABEL_45;
      }
      v25 = *(void **)(a3 + 8);
      Handle = v25;
    }
    else
    {
      if ( a5 )
        v49 = *a5;
      v46 = *(__m128i *)*(_QWORD *)(a3 + 16);
      v25 = *(void **)(a3 + 8);
      Handle = v25;
    }
    if ( CmpTraceRoutine )
    {
      if ( v25 )
      {
        v31 = KeGetCurrentThread()->PreviousMode;
        Object = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v31, &Object, 0LL) >= 0 )
        {
          v47 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
      }
    }
    v18 = a6;
    if ( (a6 & 0x100001F) == a6 )
    {
      DWORD2(v56[1]) = a6;
      LODWORD(v56[0]) = 1;
      *((_QWORD *)&v56[0] + 1) = v49.m128i_i64[1];
      WORD2(v56[0]) = v49.m128i_i16[0];
      *((_QWORD *)&v56[4] + 1) = a8;
      v26 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v24 = ObOpenObjectByNameEx(a3, v26, PreviousMode, 0LL, v11, v56, CurrentSilo, &Handle);
      if ( v24 >= 0 )
      {
        *v10 = Handle;
        if ( a7 )
          *a7 = v56[2];
      }
      v16 = v40;
    }
    else
    {
      v24 = -1073741811;
      v16 = v40;
    }
  }
  else
  {
    v18 = (unsigned __int8)HvShutdownComplete;
    if ( HvShutdownComplete )
    {
      v18 = (unsigned int)PopShutdownCleanly;
      if ( (PopShutdownCleanly & 8) != 0 )
        KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    }
    v24 = -1073741431;
  }
LABEL_45:
  if ( CmpTraceRoutine )
  {
    HandleInformation = (POBJECT_HANDLE_INFORMATION)&v46;
    v32 = v47;
    BugCheckParameter4 = v47;
    LOBYTE(v32) = 10;
    CmpTraceRoutine(v32, v57, (unsigned int)v24, 0LL);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( *((_QWORD *)&v56[5] + 1) )
  {
    CmpLockRegistry(v18, v13, v14, v15);
    CmpDereferenceKeyControlBlock(*((ULONG_PTR *)&v56[5] + 1));
    CmpUnlockRegistry(v34, v33, v35, v36, BugCheckParameter4, HandleInformation);
  }
  v28 = *(_OWORD **)&v56[9];
  v29 = **(_QWORD **)&v56[9];
  if ( *(_OWORD **)(*(_QWORD *)&v56[9] + 8LL) != &v56[9] || *(_QWORD *)(v29 + 8) != *(_QWORD *)&v56[9] )
    goto LABEL_72;
  *(_QWORD *)&v56[9] = **(_QWORD **)&v56[9];
  *(_QWORD *)(v29 + 8) = &v56[9];
  if ( v28 != &v56[9] )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(v28);
      v28 = *(_OWORD **)&v56[9];
      v37 = **(_QWORD **)&v56[9];
      if ( *(_OWORD **)(*(_QWORD *)&v56[9] + 8LL) != &v56[9] || *(_QWORD *)(v37 + 8) != *(_QWORD *)&v56[9] )
        break;
      *(_QWORD *)&v56[9] = **(_QWORD **)&v56[9];
      *(_QWORD *)(v37 + 8) = &v56[9];
      if ( v28 == &v56[9] )
        goto LABEL_54;
    }
LABEL_72:
    __fastfail(3u);
  }
LABEL_54:
  if ( v16 )
    CmpReleaseShutdownRundown();
  return (unsigned int)v24;
}
