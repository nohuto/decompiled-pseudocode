/*
 * XREFs of SdbpGetPathSystem @ 0x180097F50
 * Callers:
 *     <none>
 * Callees:
 *     SdbpGetProcessHostGuestArchitectures @ 0x180097FF8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A346C (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall SdbpGetPathSystem(int a1, int a2, int a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  const char *v8; // r9
  int v9; // r8d
  _BYTE v11[4]; // [rsp+30h] [rbp-18h] BYREF
  _WORD v12[10]; // [rsp+34h] [rbp-14h] BYREF

  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(v12, v11, a4);
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v8 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v9 = 1040;
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathSystem", v9, (_DWORD)v8);
    return (unsigned int)ProcessHostGuestArchitectures;
  }
  ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(a1, a2, a3, v12[0], (__int64)v11);
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v8 = "AslEnvGetSystem32DirPathBuf failed [%x]";
    v9 = 1046;
    goto LABEL_5;
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
