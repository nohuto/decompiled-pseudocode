/*
 * XREFs of LsaCallAuthenticationPackage @ 0x1409C5DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __cdecl LsaCallAuthenticationPackage(
        HANDLE LsaHandle,
        ULONG AuthenticationPackage,
        PVOID ProtocolSubmitBuffer,
        ULONG SubmitBufferLength,
        PVOID *ProtocolReturnBuffer,
        PULONG ReturnBufferLength,
        PNTSTATUS ProtocolStatus)
{
  NTSTATUS v9; // ebx

  v9 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B888) )
  {
    v9 = sub_14042A5E0(LsaHandle, AuthenticationPackage);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140C1B888);
  }
  return v9;
}
