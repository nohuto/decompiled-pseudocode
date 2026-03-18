/*
 * XREFs of SepDeleteAccessState @ 0x140232270
 * Callers:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7EA8 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PspInsertProcess @ 0x1406B9FA4 (PspInsertProcess.c)
 *     ObReferenceObjectByName @ 0x1406C2C50 (ObReferenceObjectByName.c)
 *     WmipCreateGuidObject @ 0x1406C5030 (WmipCreateGuidObject.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1406ECFE0 (ObOpenObjectByNameEx.c)
 *     PsOpenProcess @ 0x1406F3D00 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1407374D0 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x1407376D0 (NtOpenProcessTokenEx.c)
 *     PspInsertThread @ 0x14073EE9C (PspInsertThread.c)
 *     PsOpenThread @ 0x1407BB7E0 (PsOpenThread.c)
 *     PspCombineSecurityDomains @ 0x1407C6D0C (PspCombineSecurityDomains.c)
 *     NtGetNextProcess @ 0x1407D4660 (NtGetNextProcess.c)
 *     SeDeleteAccessState @ 0x1407DAF40 (SeDeleteAccessState.c)
 *     NtGetNextThread @ 0x1407DF010 (NtGetNextThread.c)
 *     PsCreateMinimalProcess @ 0x140852EAC (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085C7C0 (PspCreateProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9360 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140A018E4 (CMFCheckAccess.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A17F74 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A18F2C (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140A190BC (CmpDoBuildVirtualStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x1407BF400 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteAccessState(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rcx
  void *v4; // rcx
  void (*v5)(void); // rax

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_BYTE *)(a1 + 11) )
    ExFreePoolWithTag(*(PVOID *)v2, 0);
  v3 = *(void **)(a1 + 136);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 48) && (*(_DWORD *)(a1 + 12) & 0x4000000) == 0 )
      SeDeassignSecurity((PSECURITY_DESCRIPTOR *)(v2 + 48));
    v5 = *(void (**)(void))(v2 + 72);
    if ( v5 && *(_QWORD *)(v2 + 80) )
    {
      if ( *(_QWORD *)(v2 + 56) )
        v5();
      if ( *(_QWORD *)(v2 + 64) )
        (*(void (__fastcall **)(_QWORD))(v2 + 72))(*(_QWORD *)(v2 + 80));
    }
  }
}
