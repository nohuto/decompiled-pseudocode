/*
 * XREFs of NtCreateEnclave @ 0x140A3EB20
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x140721120 (MiValidateZeroBits.c)
 *     RtlIsEnclaveFeaturePresent @ 0x1409BF398 (RtlIsEnclaveFeaturePresent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     MiCreateEnclave @ 0x140A3D6DC (MiCreateEnclave.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  PVOID Pool; // rsi
  char PreviousMode; // al
  __int64 v12; // rcx
  SIZE_T v13; // r12
  NTSTATUS Enclave; // ebx
  int v15; // ebx
  char v16; // dl
  __int64 v17; // rcx
  void *Process; // rdi
  char v20; // [rsp+50h] [rbp-E8h]
  size_t Sizea; // [rsp+64h] [rbp-D4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-C8h] BYREF
  PVOID v24; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v25[2]; // [rsp+80h] [rbp-B8h] BYREF
  SIZE_T v26; // [rsp+90h] [rbp-A8h]
  ULONGLONG v27[6]; // [rsp+98h] [rbp-A0h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v28; // [rsp+C8h] [rbp-70h] BYREF

  v26 = Size;
  v27[1] = (ULONGLONG)BaseAddress;
  v27[0] = ZeroBits;
  Sizea = EnclaveInformationLength;
  v25[1] = (unsigned __int64)EnclaveError;
  BugCheckParameter1 = 0LL;
  memset(&v28, 0, sizeof(v28));
  v25[0] = 0LL;
  Pool = 0LL;
  v24 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EnclaveError < 0x7FFFFFFF0000LL )
      v12 = (__int64)EnclaveError;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( EnclaveType == 1 )
  {
LABEL_17:
    if ( qword_140C69988 )
    {
      v15 = 4096;
      v13 = InitialCommitment;
      goto LABEL_19;
    }
LABEL_16:
    Enclave = -1073741637;
    goto LABEL_49;
  }
  if ( EnclaveType == 2 )
  {
    if ( !RtlIsEnclaveFeaturePresent(2u) )
      goto LABEL_16;
    goto LABEL_17;
  }
  if ( EnclaveType - 16 > 1 || !RtlIsEnclaveFeaturePresent(8u) )
    goto LABEL_16;
  v13 = InitialCommitment;
  if ( InitialCommitment )
  {
LABEL_11:
    Enclave = -1073741581;
    goto LABEL_49;
  }
  if ( EnclaveInformationLength > 0x24 )
    goto LABEL_13;
  v15 = 0;
LABEL_19:
  if ( (MiValidateZeroBits(v27) & 0x80000000) != 0LL )
  {
    Enclave = -1073741583;
    goto LABEL_49;
  }
  if ( !v26 )
  {
    Enclave = -1073741582;
    goto LABEL_49;
  }
  if ( v13 > v26 )
    goto LABEL_11;
  v16 = v20;
  if ( v20 == 1 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
      v17 = (__int64)BaseAddress;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  v25[0] = (unsigned __int64)*BaseAddress;
  if ( (_DWORD)Sizea )
  {
    if ( v15 && (_DWORD)Sizea != v15 )
    {
LABEL_13:
      Enclave = -1073741820;
      goto LABEL_49;
    }
    Pool = MiAllocatePool(256, ((unsigned int)Sizea + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x44456D4Du);
    v24 = Pool;
    if ( !Pool )
    {
      Enclave = -1073741670;
      goto LABEL_49;
    }
    if ( v20 != 1 )
      goto LABEL_42;
    if ( (unsigned int)Sizea >= 0x10000uLL )
    {
      if ( ((unsigned __int8)EnclaveInformation & 3) == 0 )
      {
        if ( (unsigned __int64)EnclaveInformation + (unsigned int)Sizea > 0x7FFFFFFF0000LL
          || (char *)EnclaveInformation + (unsigned int)Sizea < EnclaveInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
        goto LABEL_42;
      }
    }
    else if ( ((unsigned __int8)EnclaveInformation & 3) == 0 )
    {
LABEL_42:
      memmove(Pool, EnclaveInformation, (unsigned int)Sizea);
      v16 = v20;
      goto LABEL_43;
    }
    ExRaiseDatatypeMisalignment();
  }
LABEL_43:
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    BugCheckParameter1 = (ULONG_PTR)Process;
  }
  else
  {
    Enclave = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                8,
                (__int64)PsProcessType,
                v16,
                0x6D566D4Du,
                &BugCheckParameter1,
                0LL,
                0LL);
    if ( Enclave < 0 )
      goto LABEL_49;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v28);
  }
  Enclave = MiCreateEnclave((int)Process, v25, v27[0], v26, v13, EnclaveType, (__int64)Pool, Sizea, (__int64)&Sizea + 4);
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess(&v28);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_49:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( Enclave >= 0 )
    *BaseAddress = (PVOID)v25[0];
  if ( EnclaveError )
    *EnclaveError = HIDWORD(Sizea);
  return Enclave;
}
