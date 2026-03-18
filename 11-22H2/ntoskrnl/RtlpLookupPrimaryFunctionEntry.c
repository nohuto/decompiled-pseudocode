/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x1403C4840
 * Callers:
 *     RtlLookupExceptionHandler @ 0x1403C47A8 (RtlLookupExceptionHandler.c)
 *     RtlLookupPrimaryFunctionEntry @ 0x1405B1A34 (RtlLookupPrimaryFunctionEntry.c)
 *     RtlpSameFunction @ 0x1405B1A50 (RtlpSameFunction.c)
 *     CcInitializeBcbProfiler @ 0x140B18354 (CcInitializeBcbProfiler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r10d
  _BYTE *v4; // r9
  int v6; // ecx
  int v7; // eax

  v3 = 0;
  while ( 1 )
  {
    v4 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (*v4 & 0x20) == 0 )
      break;
    v6 = (unsigned __int8)v4[2];
    v7 = v6 + 1;
    if ( (v6 & 1) == 0 )
      v7 = (unsigned __int8)v4[2];
    ++v3;
    a1 = &v4[2 * v7 + 4];
    if ( v3 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
