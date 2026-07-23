/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x1407AAB70
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140843C80 (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x140B3F574 (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x140B70E7C (IopReassignSystemRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ExRaiseAccessViolation @ 0x1408742B0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v7; // rcx
  __int64 p_MaximumLength; // rcx
  UNICODE_STRING v9; // xmm0
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v15; // rdi
  int v16; // edi
  unsigned int MaximumLength; // eax
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-30h]
  void *v23[2]; // [rsp+40h] [rbp-28h]
  UNICODE_STRING Src; // [rsp+50h] [rbp-18h] BYREF
  int v25; // [rsp+88h] [rbp+20h]

  *(_OWORD *)v23 = 0LL;
  Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)LinkTarget & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (__int64)LinkTarget;
    if ( (unsigned __int64)LinkTarget >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_WORD *)v7 = *(_WORD *)v7;
    p_MaximumLength = (__int64)&LinkTarget->MaximumLength;
    if ( (unsigned __int64)&LinkTarget->MaximumLength >= 0x7FFFFFFF0000LL )
      p_MaximumLength = 0x7FFFFFFF0000LL;
    *(_WORD *)p_MaximumLength = *(_WORD *)p_MaximumLength;
    v9 = *LinkTarget;
    *(UNICODE_STRING *)v23 = v9;
    if ( v9.MaximumLength )
    {
      v10 = (unsigned __int64)v23[1];
      v11 = (unsigned __int64)v23[1] + v9.MaximumLength - 1;
      if ( v23[1] > (void *)v11 || v11 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v10 = *(_BYTE *)v10;
        v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v10 != v12 );
    }
    if ( ReturnedLength )
    {
      v13 = (__int64)ReturnedLength;
      if ( (unsigned __int64)ReturnedLength >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
  }
  else
  {
    *(UNICODE_STRING *)v23 = *LinkTarget;
  }
  Object = 0LL;
  v25 = ObReferenceObjectByHandle(LinkHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v25 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (char *)Object;
    BugCheckParameter2 = (ULONG_PTR)Object - 32;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    if ( (*((_DWORD *)v15 + 7) & 0x10) != 0 )
      RtlInitUnicodeString(&Src, &word_1408882A0);
    else
      Src = *(UNICODE_STRING *)(v15 + 8);
    v16 = *(_DWORD *)&Src.Length;
    if ( ReturnedLength )
    {
      if ( Src.MaximumLength <= WORD1(v23[0]) )
      {
        MaximumLength = Src.MaximumLength;
LABEL_25:
        memmove(v23[1], Src.Buffer, MaximumLength);
        LinkTarget->Length = v16;
        if ( ReturnedLength )
          *ReturnedLength = HIWORD(v16);
LABEL_27:
        ExReleasePushLockEx((__int64 *)BugCheckParameter2, 0LL);
        v18 = KeGetCurrentThread();
        v19 = v18->KernelApcDisable++ == -1;
        if ( v19
          && ($C71981A45BEB2B45F82C232A7085991E *)v18->ApcState.ApcListHead[0].Flink != &v18->152
          && !v18->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(Object);
        return v25;
      }
    }
    else if ( Src.Length <= WORD1(v23[0]) )
    {
      MaximumLength = Src.Length;
      goto LABEL_25;
    }
    v25 = -1073741789;
    if ( ReturnedLength )
      *ReturnedLength = Src.MaximumLength;
    goto LABEL_27;
  }
  return v25;
}
