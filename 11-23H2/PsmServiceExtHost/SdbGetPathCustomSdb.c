/*
 * XREFs of SdbGetPathCustomSdb @ 0x180091F98
 * Callers:
 *     SdbResolveDatabaseEx @ 0x180092094 (SdbResolveDatabaseEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     SdbpGetCustomSdbFileName @ 0x1800924EC (SdbpGetCustomSdbFileName.c)
 *     SdbpGetSystemSdbFilePath @ 0x180092D7C (SdbpGetSystemSdbFilePath.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

_BOOL8 __fastcall SdbGetPathCustomSdb(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // r9d
  int SystemSdbFilePath; // eax
  int v10; // ebx
  const char *v11; // r9
  int v12; // r8d
  __int64 v14; // [rsp+20h] [rbp-98h]
  _BYTE v15[96]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v15, 0, 0x56uLL);
  if ( a3 && (SystemSdbFilePath = SdbpGetCustomSdbFileName(v15, v7, a3), v10 = SystemSdbFilePath, SystemSdbFilePath < 0) )
  {
    v11 = "SdbpGetCustomSdbFileName failed [%x]";
    v12 = 1541;
  }
  else
  {
    SystemSdbFilePath = SdbpGetSystemSdbFilePath(a1, v7, 7, v8, (__int64)v15, a4);
    v10 = SystemSdbFilePath;
    if ( SystemSdbFilePath >= 0 )
    {
      v10 = 0;
      return v10 >= 0;
    }
    v11 = "SdbpGetSystemSdbFilePath failed [%x]";
    v12 = 1553;
  }
  LODWORD(v14) = SystemSdbFilePath;
  AslLogCallPrintf(1, (unsigned int)"SdbGetPathCustomSdb", v12, (_DWORD)v11, v14);
  return v10 >= 0;
}
