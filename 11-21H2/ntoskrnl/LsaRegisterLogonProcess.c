/*
 * XREFs of LsaRegisterLogonProcess @ 0x1407FCD50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __stdcall LsaRegisterLogonProcess(
        PLSA_STRING LogonProcessName,
        PHANDLE LsaHandle,
        PLSA_OPERATIONAL_MODE SecurityMode)
{
  NTSTATUS v5; // ebx

  v5 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B888) )
  {
    v5 = sub_14042A5E0(LogonProcessName, LsaHandle);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140C1B888);
  }
  return v5;
}
