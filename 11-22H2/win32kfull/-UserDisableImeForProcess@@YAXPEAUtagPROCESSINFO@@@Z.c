/*
 * XREFs of ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00A31DC
 * Callers:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00A2F0C (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C00A3140 (NtUserDisableThreadIme.c)
 * Callees:
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00A3214 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 */

void __fastcall UserDisableImeForProcess(struct tagPROCESSINFO *a1)
{
  struct tagTHREADINFO *i; // rbx

  *((_DWORD *)a1 + 3) |= 0x800000u;
  for ( i = (struct tagTHREADINFO *)*((_QWORD *)a1 + 40); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 83) )
    UserDisableImeForThread(i, 0);
}
