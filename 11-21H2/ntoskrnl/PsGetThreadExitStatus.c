/*
 * XREFs of PsGetThreadExitStatus @ 0x1406E2920
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     sub_140973B80 @ 0x140973B80 (sub_140973B80.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

NTSTATUS __stdcall PsGetThreadExitStatus(PETHREAD Thread)
{
  struct _EX_RUNDOWN_REF *v1; // rdi

  v1 = (struct _EX_RUNDOWN_REF *)((char *)Thread + 1352);
  if ( !sub_140347810((struct _EX_RUNDOWN_REF *)Thread + 169) )
    return *((_DWORD *)Thread + 358);
  sub_1402AD030(v1);
  return 259;
}
