/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x14066E110
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x14022C6B0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x140A52C30 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A53040 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x140A550EC (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(wchar_t *a1, size_t a2, const wchar_t *a3, __int64 a4)
{
  NTSTATUS ProcessHostGuestArchitectures; // ebx
  const char *v9; // r9
  int v10; // r8d
  __int16 v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[12]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-B0h] BYREF

  wcscpy(pszSrc, L"AppPatch64");
  if ( a2 < 0xB )
    return 3221225507LL;
  v12 = -1;
  pszDest[0] = 0;
  v11[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v12, v11, a4);
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v11[0] == 9 || v11[0] == 12 )
    {
      ProcessHostGuestArchitectures = AslPathCombine(pszSrc);
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v9 = "AslPathCombine failed [%x]";
        v10 = 1017;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !a3 )
        a3 = &word_14001F044;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v9 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v10 = 1023;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(a1, a2);
  }
  v9 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v10 = 1005;
LABEL_5:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v10, (_DWORD)v9);
  return (unsigned int)ProcessHostGuestArchitectures;
}
