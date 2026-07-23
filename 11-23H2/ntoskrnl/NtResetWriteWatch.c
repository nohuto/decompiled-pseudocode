/*
 * XREFs of NtResetWriteWatch @ 0x140747A20
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiGetVadMandatoryPageSize @ 0x1402EB080 (MiGetVadMandatoryPageSize.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // r13
  _KPROCESS *Process; // rsi
  void *v10; // r15
  __int64 *v11; // rax
  char *v12; // rsi
  unsigned __int64 VadMandatoryPageSize; // rax
  NTSTATUS v14; // edi
  __int64 v16; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v18; // [rsp+48h] [rbp-70h] BYREF

  v3 = 0;
  BugCheckParameter1 = 0LL;
  memset(&v18, 0, sizeof(v18));
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress >= RegionSize && RegionSize )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (char *)BaseAddress + RegionSize - 1;
    Process = CurrentThread->ApcState.Process;
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      v10 = CurrentThread->ApcState.Process;
    }
    else
    {
      v14 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ProcessHandle,
              8,
              (__int64)PsProcessType,
              CurrentThread->PreviousMode,
              0x77576D4Du,
              &BugCheckParameter1,
              0LL,
              0LL);
      if ( v14 < 0 )
        return v14;
      v10 = (void *)BugCheckParameter1;
      if ( Process != (_KPROCESS *)BugCheckParameter1 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v18);
        v3 = 1;
      }
    }
    v11 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, (int *)&BugCheckParameter1);
    v12 = (char *)v11;
    if ( !v11 )
    {
      v14 = -1073741585;
      goto LABEL_12;
    }
    if ( (v11[6] & 0x600000) == 0x600000
      && (unsigned __int64)v8 <= (((*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) << 12) | 0xFFF) )
    {
      VadMandatoryPageSize = MiGetVadMandatoryPageSize((__int64)v11);
      if ( VadMandatoryPageSize <= 1 )
      {
LABEL_10:
        MiMoveDirtyBitsToPfns((unsigned __int64)BaseAddress, (unsigned __int64)v8, (__int64)v12, 1);
        v14 = 0;
LABEL_11:
        MiUnlockAndDereferenceVad(v12);
LABEL_12:
        if ( v3 )
          KiUnstackDetachProcess(&v18);
        if ( ProcessHandle != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(v10, 0x77576D4Du);
        return v14;
      }
      v16 = (VadMandatoryPageSize << 12) - 1;
      if ( (v16 & (unsigned __int64)BaseAddress) == 0 )
      {
        if ( (v16 & RegionSize) != 0 )
        {
          v14 = -1073741583;
          goto LABEL_11;
        }
        goto LABEL_10;
      }
    }
    v14 = -1073741585;
    goto LABEL_11;
  }
  return -1073741583;
}
