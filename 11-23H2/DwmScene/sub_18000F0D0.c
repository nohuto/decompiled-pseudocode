/*
 * XREFs of sub_18000F0D0 @ 0x18000F0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FEFC @ 0x18000FEFC (sub_18000FEFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char sub_18000F0D0()
{
  __int64 (*RtlDllShutdownInProgress)(void); // rax
  char v1; // bl
  HMODULE v2; // rax

  RtlDllShutdownInProgress = (__int64 (*)(void))qword_1801D3370;
  v1 = 0;
  if ( qword_1801D3370 )
    return RtlDllShutdownInProgress();
  v2 = (HMODULE)sub_18000FEFC();
  RtlDllShutdownInProgress = GetProcAddress(v2, "RtlDllShutdownInProgress");
  qword_1801D3370 = (__int64)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return RtlDllShutdownInProgress();
  return v1;
}
