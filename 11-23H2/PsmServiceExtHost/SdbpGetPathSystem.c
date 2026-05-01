/*
 * XREFs of SdbpGetPathSystem @ 0x180092C30
 * Callers:
 *     <none>
 * Callees:
 *     SdbpGetProcessHostGuestArchitectures @ 0x180092CD8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A02BC (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall SdbpGetPathSystem(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  int v10; // r8d
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF

  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures((char *)v13 + 4, v13, a4);
  v8 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v9 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v10 = 1053;
LABEL_5:
    LODWORD(v12) = ProcessHostGuestArchitectures;
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathSystem", v10, (_DWORD)v9, v12);
    return v8;
  }
  ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(a1, a2, a3, (__int64)v13);
  v8 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v9 = "AslEnvGetSystem32DirPathBuf failed [%x]";
    v10 = 1059;
    goto LABEL_5;
  }
  return v8;
}
