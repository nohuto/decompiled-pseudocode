/*
 * XREFs of AslpFileGetExportName @ 0x18009B658
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x18009BE44 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x180098FC8 (AslStringAnsiToUnicode.c)
 *     AslpFileQueryExportName @ 0x18009CDC8 (AslpFileQueryExportName.c)
 */

__int64 __fastcall AslpFileGetExportName(PWSTR *a1, __int64 a2)
{
  int ExportName; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  int v7; // r8d
  int v9; // [rsp+20h] [rbp-128h]
  char v10[256]; // [rsp+30h] [rbp-118h] BYREF

  memset_0(v10, 0, sizeof(v10));
  ExportName = AslpFileQueryExportName(v10, a2);
  v5 = ExportName;
  if ( ExportName >= 0 )
  {
    ExportName = AslStringAnsiToUnicode(a1, v10);
    v5 = ExportName;
    if ( ExportName >= 0 )
      return 0;
    v6 = "AslStringAnsiToUnicode failed [%x]";
    v7 = 3292;
    goto LABEL_5;
  }
  if ( ExportName != -1073741275 && ExportName != -1073741701 )
  {
    v6 = "AslpFileQueryExportName failed [%x]";
    v7 = 3285;
LABEL_5:
    v9 = ExportName;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetExportName", v7, (_DWORD)v6, v9);
  }
  return v5;
}
