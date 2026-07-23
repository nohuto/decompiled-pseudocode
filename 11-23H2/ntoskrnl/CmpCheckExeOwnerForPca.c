/*
 * XREFs of CmpCheckExeOwnerForPca @ 0x14069A314
 * Callers:
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14020BB00 (PsGetCurrentThreadProcess.c)
 *     RtlEqualSid @ 0x14022A880 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsReferenceProcessFilePointer @ 0x14069A0A0 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x14069C84C (ObQuerySecurityObject.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x14069E340 (RtlGetOwnerSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

char CmpCheckExeOwnerForPca()
{
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 Pool2; // rax
  PVOID v2; // rcx
  void *v3; // rdi
  int SecurityObject; // ebx
  unsigned int OwnerDefaulted; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  PSID Owner; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  OwnerDefaulted = 0;
  Owner = 0LL;
  if ( !CmpTrustedInstallerSid )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)CurrentThreadProcess, (unsigned __int64 *)&Object) < 0 )
    return 0;
  if ( (unsigned int)ObQuerySecurityObject((_DWORD)Object, 1, 0, 0, (__int64)&OwnerDefaulted) != -1073741789 )
  {
    v2 = Object;
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(256LL, OwnerDefaulted, 538987843LL);
  v2 = Object;
  v3 = (void *)Pool2;
  if ( !Pool2 )
  {
LABEL_12:
    ObfDereferenceObject(v2);
    return 0;
  }
  SecurityObject = ObQuerySecurityObject((_DWORD)Object, 1, Pool2, OwnerDefaulted, (__int64)&OwnerDefaulted);
  ObfDereferenceObject(Object);
  if ( SecurityObject < 0
    || RtlGetOwnerSecurityDescriptor(v3, &Owner, (PBOOLEAN)&OwnerDefaulted) < 0
    || Owner && RtlEqualSid(CmpTrustedInstallerSid, Owner) )
  {
    ExFreePoolWithTag(v3, 0);
    return 0;
  }
  ExFreePoolWithTag(v3, 0);
  return 1;
}
