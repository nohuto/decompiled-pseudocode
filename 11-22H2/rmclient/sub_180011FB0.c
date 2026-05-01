/*
 * XREFs of sub_180011FB0 @ 0x180011FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

FARPROC __fastcall sub_180011FB0(unsigned int a1, unsigned int a2, __int64 a3)
{
  FARPROC result; // rax
  char v4; // bl
  HMODULE v7; // rax

  result = (FARPROC)qword_1800329A8;
  v4 = a3;
  if ( qword_1800329A8
    || (v7 = sub_180011B8C(),
        result = GetProcAddress(v7, "LogStagedFeatureUsage"),
        (qword_1800329A8 = (__int64)result) != 0) )
  {
    LOBYTE(a3) = v4;
    return (FARPROC)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result)(a1, a2, a3);
  }
  return result;
}
