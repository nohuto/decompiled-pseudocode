/*
 * XREFs of LsaFreeReturnBuffer @ 0x1406EB730
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __stdcall LsaFreeReturnBuffer(PVOID Buffer)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx

  v2 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B888) )
  {
    v2 = sub_14042A5E0(Buffer, v3);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140C1B888);
  }
  return v2;
}
