/*
 * XREFs of sub_1800104A0 @ 0x1800104A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOLEAN sub_1800104A0()
{
  BOOLEAN (*RtlDllShutdownInProgress)(void); // rax
  char v1; // bl
  HMODULE v2; // rax

  RtlDllShutdownInProgress = (BOOLEAN (*)(void))qword_1800329D0;
  v1 = 0;
  if ( qword_1800329D0 )
    return RtlDllShutdownInProgress();
  v2 = (HMODULE)sub_180011BC4();
  RtlDllShutdownInProgress = (BOOLEAN (*)(void))GetProcAddress(v2, "RtlDllShutdownInProgress");
  qword_1800329D0 = (__int64)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return RtlDllShutdownInProgress();
  return v1;
}
