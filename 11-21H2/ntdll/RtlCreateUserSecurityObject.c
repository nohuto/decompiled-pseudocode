/*
 * XREFs of RtlCreateUserSecurityObject @ 0x1800E2F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAndSetSD @ 0x18000B740 (RtlCreateAndSetSD.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlCreateUserSecurityObject(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  void *ProcessHeap; // rdi
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  PSECURITY_DESCRIPTOR BaseAddress; // [rsp+50h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(AceData, AceCount, OwnerSid, GroupSid, &BaseAddress);
  if ( result >= 0 )
  {
    v9 = RtlpNewSecurityObject(
           0LL,
           BaseAddress,
           NewSecurityDescriptor,
           0LL,
           0,
           IsDirectoryObject,
           0,
           (HANDLE)0xFFFFFFFFFFFFFFFCLL,
           GenericMapping);
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    return v9;
  }
  return result;
}
