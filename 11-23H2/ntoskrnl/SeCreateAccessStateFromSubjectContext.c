/*
 * XREFs of SeCreateAccessStateFromSubjectContext @ 0x1409CA168
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18224 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x140A1936C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140232C10 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 */

__int64 __fastcall SeCreateAccessStateFromSubjectContext(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, _DWORD *a5)
{
  void *v7; // rcx
  int AccessStateFromSubjectContext; // edi

  v7 = *(void **)a1;
  if ( v7 )
    ObfReferenceObject(v7);
  ObfReferenceObject(*(PVOID *)(a1 + 16));
  AccessStateFromSubjectContext = SepCreateAccessStateFromSubjectContext((_OWORD *)a1, a2, a3, a4, a5);
  if ( AccessStateFromSubjectContext < 0 )
  {
    if ( *(_QWORD *)a1 )
      ObfDereferenceObject(*(PVOID *)a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
  }
  return (unsigned int)AccessStateFromSubjectContext;
}
