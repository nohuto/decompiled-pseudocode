/*
 * XREFs of sub_1406B4F98 @ 0x1406B4F98
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140673A24 @ 0x140673A24 (sub_140673A24.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140679440 (RtlGetOwnerSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char sub_1406B4F98()
{
  struct _EX_RUNDOWN_REF *CurrentThreadProcess; // rax
  PVOID PoolWithTag; // rax
  PVOID v2; // rcx
  void *v3; // rdi
  int v4; // ebx
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  PSID Owner; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Owner = 0LL;
  if ( !qword_140D3B070 )
    return 0;
  CurrentThreadProcess = (struct _EX_RUNDOWN_REF *)PsGetCurrentThreadProcess();
  if ( (int)PsReferenceProcessFilePointer(CurrentThreadProcess, (__int64 *)&Object) < 0 )
    return 0;
  if ( (unsigned int)sub_140673A24((__int64)Object, 1LL, 0LL, 0, &NumberOfBytes) != -1073741789 )
  {
    v2 = Object;
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
  v2 = Object;
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_12:
    ObfDereferenceObject(v2);
    return 0;
  }
  v4 = sub_140673A24((__int64)Object, 1LL, (__int64)PoolWithTag, NumberOfBytes, &NumberOfBytes);
  ObfDereferenceObject(Object);
  if ( v4 < 0
    || RtlGetOwnerSecurityDescriptor(v3, &Owner, (PBOOLEAN)&NumberOfBytes) < 0
    || Owner && RtlEqualSid(qword_140D3B070, Owner) )
  {
    ExFreePoolWithTag(v3, 0);
    return 0;
  }
  ExFreePoolWithTag(v3, 0);
  return 1;
}
