/*
 * XREFs of SeCreateClientSecurityFromSubjectContext @ 0x1406DF7F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 */

NTSTATUS __stdcall SeCreateClientSecurityFromSubjectContext(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN ServerIsRemote,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  PACCESS_TOKEN ClientToken; // rbx
  char v5; // r12
  __int64 v6; // r15
  int v10; // r8d
  int v11; // r14d
  NTSTATUS v12; // edi
  __int64 v14; // rbp
  char v15; // [rsp+A0h] [rbp+8h] BYREF
  BOOLEAN v16; // [rsp+B0h] [rbp+18h]

  v16 = ServerIsRemote;
  ClientToken = SubjectContext->ClientToken;
  v5 = 0;
  v6 = 0LL;
  v15 = 0;
  if ( !ClientToken )
    ClientToken = SubjectContext->PrimaryToken;
  ObfReferenceObjectWithTag(ClientToken, 0x63436553u);
  if ( SubjectContext->ClientToken )
  {
    v11 = 2;
    v14 = *((_QWORD *)SubjectContext->PrimaryToken + 138);
    sub_1402F8A20(v14, *((_QWORD *)SubjectContext->ClientToken + 138), &v15);
    if ( !v15 )
    {
      v5 = 1;
      v6 = v14;
    }
  }
  else
  {
    v11 = 1;
  }
  LOBYTE(v10) = v16;
  v12 = sub_140727350(
          (_DWORD)ClientToken,
          (_DWORD)ClientSecurityQos,
          v10,
          v11,
          0,
          SubjectContext->ImpersonationLevel,
          0,
          0LL,
          v5,
          v6,
          (__int64)ClientContext);
  if ( v12 < 0 || !ClientSecurityQos->ContextTrackingMode )
    ObfDereferenceObjectWithTag(ClientToken, 0x63436553u);
  return v12;
}
