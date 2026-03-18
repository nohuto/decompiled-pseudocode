/*
 * XREFs of SdbpGetPathCustomSdbPreRS3 @ 0x140649A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x140A13EC0 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A142D0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x140A15B1C (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdbPreRS3(wchar_t *a1, size_t a2, const wchar_t *a3, __int64 a4)
{
  wchar_t *v8; // rdi
  int ProcessHostGuestArchitectures; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  int v12; // r8d
  __int16 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[8]; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszDest[264]; // [rsp+70h] [rbp-90h] BYREF

  wcscpy(pszSrc, L"Custom");
  v16[0] = *(_OWORD *)L"Custom\\Custom64";
  v16[1] = *(_OWORD *)L"ustom64";
  if ( a2 < 7 )
    return 3221225507LL;
  v14 = -1;
  *a1 = 0;
  v8 = pszSrc;
  pszDest[0] = 0;
  v13[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v14, v13, a4);
  v10 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v13[0] == 9 || v13[0] == 12 )
      v8 = (wchar_t *)v16;
    if ( !a3 )
      a3 = &word_140011C40;
    ProcessHostGuestArchitectures = AslPathCombine(v8, a3, pszDest, 0x104uLL);
    v10 = ProcessHostGuestArchitectures;
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)SdbpGetPathAppPatch(a1, a2);
    v11 = "AslPathCombine failed [%x]";
    v12 = 1161;
  }
  else
  {
    v11 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v12 = 1147;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdbPreRS3", v12, (_DWORD)v11, ProcessHostGuestArchitectures);
  return v10;
}
