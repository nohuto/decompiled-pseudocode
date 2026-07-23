/*
 * XREFs of SepDeleteAccessState @ 0x140232340
 * Callers:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     SeSubProcessToken @ 0x1406B722C (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7ED8 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     PspInsertProcess @ 0x1406B9FD4 (PspInsertProcess.c)
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     WmipCreateGuidObject @ 0x1406C5060 (WmipCreateGuidObject.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     PsOpenProcess @ 0x1406F3D30 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x1407378C0 (NtOpenProcessTokenEx.c)
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     PsOpenThread @ 0x1407BBAB0 (PsOpenThread.c)
 *     PspCombineSecurityDomains @ 0x1407C6FDC (PspCombineSecurityDomains.c)
 *     NtGetNextProcess @ 0x1407D4930 (NtGetNextProcess.c)
 *     SeDeleteAccessState @ 0x1407DB210 (SeDeleteAccessState.c)
 *     NtGetNextThread @ 0x1407DF2E0 (NtGetNextThread.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085CA00 (PspCreateProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9560 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140A01B74 (CMFCheckAccess.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18224 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A191DC (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140A1936C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x1407BF6D0 (SeDeassignSecurity.c)
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
