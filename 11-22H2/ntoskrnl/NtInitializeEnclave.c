/*
 * XREFs of NtInitializeEnclave @ 0x140A3F000
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
 *     MiInitializeEnclave @ 0x140A3DF08 (MiInitializeEnclave.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  size_t v5; // r13
  PVOID Pool; // rdi
  char PreviousMode; // dl
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  PVOID v14; // rsi
  char v16; // [rsp+40h] [rbp-B8h]
  ULONG v17; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v19; // [rsp+58h] [rbp-A0h]
  HANDLE v20; // [rsp+68h] [rbp-90h]
  PULONG v21; // [rsp+70h] [rbp-88h]
  PVOID v22; // [rsp+78h] [rbp-80h]
  $115DCDF994C6370D29323EAB0E0C9502 v23; // [rsp+88h] [rbp-70h] BYREF

  v5 = EnclaveInformationLength;
  v22 = BaseAddress;
  v20 = ProcessHandle;
  v21 = EnclaveError;
  memset(&v23, 0, sizeof(v23));
  Object = 0LL;
  v17 = 0;
  Pool = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EnclaveError < 0x7FFFFFFF0000LL )
      v10 = (__int64)EnclaveError;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( !EnclaveInformationLength )
    goto LABEL_12;
  if ( EnclaveInformationLength <= 0x1000 )
  {
    Pool = MiAllocatePool(256, EnclaveInformationLength, 0x44456D4Du);
    v19 = Pool;
    if ( !Pool )
    {
      v11 = -1073741670;
      goto LABEL_17;
    }
    memmove(Pool, EnclaveInformation, v5);
    PreviousMode = v16;
LABEL_12:
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      Object = CurrentThread->ApcState.Process;
    }
    else
    {
      v11 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ProcessHandle,
              8,
              (__int64)PsProcessType,
              PreviousMode,
              0x6D566D4Du,
              &Object,
              0LL,
              0LL);
      if ( v11 < 0 )
        goto LABEL_17;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v23);
    }
    v11 = MiInitializeEnclave(Process, (unsigned __int64)v22, (__int64)Pool, v5, &v17);
    goto LABEL_17;
  }
  v11 = -1073741820;
LABEL_17:
  v14 = Object;
  if ( Object && ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess(&v23);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( EnclaveError )
    *EnclaveError = v17;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return v11;
}
