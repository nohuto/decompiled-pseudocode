/*
 * XREFs of LsaLookupAuthenticationPackage @ 0x1407FCBE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __cdecl LsaLookupAuthenticationPackage(
        HANDLE LsaHandle,
        PLSA_STRING PackageName,
        PULONG AuthenticationPackage)
{
  NTSTATUS v5; // ebx

  v5 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B888) )
  {
    v5 = sub_14042A5E0(LsaHandle, PackageName);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140C1B888);
  }
  return v5;
}
