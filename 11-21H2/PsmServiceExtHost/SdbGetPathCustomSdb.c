/*
 * XREFs of SdbGetPathCustomSdb @ 0x180097280
 * Callers:
 *     SdbResolveDatabaseEx @ 0x18009737C (SdbResolveDatabaseEx.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     SdbpGetCustomSdbFileName @ 0x1800977D4 (SdbpGetCustomSdbFileName.c)
 *     SdbpGetSystemSdbFilePath @ 0x18009809C (SdbpGetSystemSdbFilePath.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

_BOOL8 __fastcall SdbGetPathCustomSdb(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // r9d
  int SystemSdbFilePath; // ebx
  const char *v10; // r9
  int v11; // r8d
  _BYTE v13[96]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v13, 0, 0x56uLL);
  if ( a3 && (SystemSdbFilePath = SdbpGetCustomSdbFileName(v13, v7, a3), SystemSdbFilePath < 0) )
  {
    v10 = "SdbpGetCustomSdbFileName failed [%x]";
    v11 = 1528;
  }
  else
  {
    SystemSdbFilePath = SdbpGetSystemSdbFilePath(a1, v7, 7, v8, (__int64)v13, a4);
    if ( SystemSdbFilePath >= 0 )
    {
      SystemSdbFilePath = 0;
      return SystemSdbFilePath >= 0;
    }
    v10 = "SdbpGetSystemSdbFilePath failed [%x]";
    v11 = 1540;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetPathCustomSdb", v11, (_DWORD)v10);
  return SystemSdbFilePath >= 0;
}
