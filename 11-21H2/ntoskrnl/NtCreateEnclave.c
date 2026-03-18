/*
 * XREFs of NtCreateEnclave @ 0x14097AD20
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiValidateZeroBits @ 0x1406FB478 (MiValidateZeroBits.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCreateEnclave @ 0x140979918 (MiCreateEnclave.c)
 *     RtlIsEnclaveFeaturePresent @ 0x1409B5CE8 (RtlIsEnclaveFeaturePresent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateEnclave(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        char *Src,
        unsigned int a8,
        _DWORD *a9)
{
  unsigned __int64 *v9; // rdi
  PVOID Pool; // rsi
  char PreviousMode; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  int Enclave; // ebx
  int v15; // edi
  char v16; // r9
  __int64 v17; // rcx
  void *Process; // rdi
  _DWORD *v19; // r9
  char v21; // [rsp+50h] [rbp-F8h]
  size_t Size; // [rsp+70h] [rbp-D8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-D0h] BYREF
  PVOID v26; // [rsp+80h] [rbp-C8h]
  unsigned __int64 v27[2]; // [rsp+88h] [rbp-C0h] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp-B0h]
  ULONGLONG v29[6]; // [rsp+A0h] [rbp-A8h] BYREF
  _BYTE v30[48]; // [rsp+D0h] [rbp-78h] BYREF

  v28 = a4;
  v9 = a2;
  v29[1] = (ULONGLONG)a2;
  v29[0] = a3;
  Size = a8;
  v27[1] = (unsigned __int64)a9;
  BugCheckParameter1 = 0LL;
  memset(v30, 0, sizeof(v30));
  v27[0] = 0LL;
  Pool = 0LL;
  v26 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a9;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( a6 == 1 )
  {
LABEL_17:
    if ( MemoryDescriptorList )
    {
      v15 = 4096;
      v13 = a5;
      goto LABEL_19;
    }
LABEL_16:
    Enclave = -1073741637;
    goto LABEL_52;
  }
  if ( a6 == 2 )
  {
    if ( !(unsigned __int8)((__int64 (*)(void))RtlIsEnclaveFeaturePresent)() )
      goto LABEL_16;
    goto LABEL_17;
  }
  if ( (unsigned int)(a6 - 16) > 1 || !(unsigned __int8)RtlIsEnclaveFeaturePresent(8LL) )
    goto LABEL_16;
  v13 = a5;
  if ( a5 )
  {
    Enclave = -1073741581;
    goto LABEL_52;
  }
  if ( (unsigned int)Size > 0x24 )
  {
    Enclave = -1073741820;
    goto LABEL_52;
  }
  v15 = 0;
LABEL_19:
  if ( (int)MiValidateZeroBits(v29) >= 0 )
  {
    if ( !v28 )
    {
      Enclave = -1073741582;
      goto LABEL_51;
    }
    if ( v13 > v28 )
    {
      Enclave = -1073741581;
      goto LABEL_51;
    }
    v16 = v21;
    if ( v21 == 1 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a2;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
    v27[0] = *a2;
    if ( !(_DWORD)Size )
    {
LABEL_45:
      if ( a1 == -1LL )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        BugCheckParameter1 = (ULONG_PTR)Process;
      }
      else
      {
        Enclave = ObpReferenceObjectByHandleWithTag(
                    a1,
                    8,
                    (__int64)PsProcessType,
                    v16,
                    0x6D566D4Du,
                    &BugCheckParameter1,
                    0LL,
                    0LL);
        if ( Enclave < 0 )
          goto LABEL_51;
        Process = (void *)BugCheckParameter1;
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v30, v19);
      }
      Enclave = MiCreateEnclave((int)Process, v27, v29[0], v28, v13, a6, (__int64)Pool, Size, (__int64)&Size + 4);
      if ( a1 != -1LL )
      {
        KiUnstackDetachProcess((__int64)v30, 0LL);
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      }
      goto LABEL_51;
    }
    if ( v15 && (_DWORD)Size != v15 )
    {
      Enclave = -1073741820;
      goto LABEL_51;
    }
    Pool = MiAllocatePool(256, ((unsigned int)Size + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x44456D4Du);
    v26 = Pool;
    if ( !Pool )
    {
      Enclave = -1073741670;
      goto LABEL_51;
    }
    if ( v21 == 1 )
    {
      if ( (unsigned int)Size >= 0x10000uLL )
      {
        if ( ((unsigned __int8)Src & 3) == 0 )
        {
          if ( (unsigned __int64)&Src[(unsigned int)Size] > 0x7FFFFFFF0000LL || &Src[(unsigned int)Size] < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
          goto LABEL_44;
        }
      }
      else if ( ((unsigned __int8)Src & 3) == 0 )
      {
        goto LABEL_44;
      }
      ExRaiseDatatypeMisalignment();
    }
LABEL_44:
    memmove(Pool, Src, (unsigned int)Size);
    v16 = v21;
    goto LABEL_45;
  }
  Enclave = -1073741583;
LABEL_51:
  v9 = a2;
LABEL_52:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( Enclave >= 0 )
    *v9 = v27[0];
  if ( a9 )
    *a9 = HIDWORD(Size);
  return (unsigned int)Enclave;
}
