/*
 * XREFs of PspReferenceTokenForNewProcess @ 0x1406B9234
 * Callers:
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14085CA00 (PspCreateProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall PspReferenceTokenForNewProcess(__int64 a1, void *a2, KPROCESSOR_MODE a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  PVOID v6; // rbx
  PVOID v7; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v7 = 0LL;
    result = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)SeTokenObjectType, a3, &v7, 0LL);
    v6 = v7;
    if ( result < 0 )
      return result;
  }
  else if ( a1 )
  {
    v6 = (PVOID)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  }
  else
  {
    v6 = PspBootAccessToken;
    ObfReferenceObject(PspBootAccessToken);
  }
  *a4 = v6;
  return 0;
}
